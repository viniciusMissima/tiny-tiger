/* Test the `vfmsQf32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neonv2_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neonv2 } */

#include "arm_neon.h"

void test_vfmsQf32 (void)
{
  float32x4_t out_float32x4_t;
  float32x4_t arg0_float32x4_t;
  float32x4_t arg1_float32x4_t;
  float32x4_t arg2_float32x4_t;

  out_float32x4_t = vfmsq_f32 (arg0_float32x4_t, arg1_float32x4_t, arg2_float32x4_t);
}

/* { dg-final { scan-assembler "vfms\.f32\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */