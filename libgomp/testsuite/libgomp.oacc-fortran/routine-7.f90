
! { dg-do run }
! { dg-additional-options "-cpp" }

#define M 8
#define N 32

program main
  integer :: i
  integer :: a(N)
  integer :: b(M * N)

  do i = 1, N
    a(i) = 0
  end do

  !$acc parallel copy (a)
  !$acc loop seq
    do i = 1, N
      call seq (a)
    end do
  !$acc end parallel

  do i = 1, N
    if (a(i) .ne.N) call abort
  end do

  !$acc parallel copy (a)
  !$acc loop seq
    do i = 1, N 
      call gang (a)
    end do
  !$acc end parallel

  do i = 1, N
    if (a(i) .ne. (N + (N * (-1 * i)))) call abort
  end do

  do i = 1, N
    b(i) = i
  end do

  !$acc parallel copy (b)
  !$acc loop
    do i = 1, N
      call worker (b)
    end do
  !$acc end parallel

  do i = 1, N
    if (b(i) .ne. N + i) call abort
  end do

  do i = 1, N
    a(i) = i
  end do

  !$acc parallel copy (a)
  !$acc loop
    do i = 1, N
      call vector (a)
    end do
  !$acc end parallel

  do i = 1, N
    if (a(i) .ne. 0) call abort
  end do

contains

subroutine vector (a)
  !$acc routine vector
  integer, intent (inout) :: a(N)
  integer :: i

  !$acc loop vector
  do i = 1, N
    a(i) = a(i) - a(i) 
  end do

end subroutine vector

subroutine worker (b)
  !$acc routine worker
  integer, intent (inout) :: b(M*N)
  integer :: i, j

  !$acc loop worker
  do i = 1, N
  !$acc loop vector
    do j = 1, M
      b(j + ((i - 1) * M)) = b(j + ((i - 1) * M)) + 1
    end do
  end do

end subroutine worker

subroutine gang (a)
  !$acc routine gang
  integer, intent (inout) :: a(N)
  integer :: i

  !$acc loop gang
  do i = 1, N
    a(i) = a(i) - i 
  end do

end subroutine gang

subroutine seq (a)
  !$acc routine seq
  integer, intent (inout) :: a(M)
  integer :: i

  do i = 1, N
    a(i) = a(i) + 1
  end do

end subroutine seq

end program main
