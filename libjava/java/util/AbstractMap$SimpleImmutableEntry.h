
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_AbstractMap$SimpleImmutableEntry__
#define __java_util_AbstractMap$SimpleImmutableEntry__

#pragma interface

#include <java/lang/Object.h>

class java::util::AbstractMap$SimpleImmutableEntry : public ::java::lang::Object
{

public:
  AbstractMap$SimpleImmutableEntry(::java::lang::Object *, ::java::lang::Object *);
  AbstractMap$SimpleImmutableEntry(::java::util::Map$Entry *);
  virtual ::java::lang::Object * getKey();
  virtual ::java::lang::Object * getValue();
  virtual ::java::lang::Object * setValue(::java::lang::Object *);
private:
  static const jlong serialVersionUID = 7138329143949025153LL;
public: // actually package-private
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) key;
  ::java::lang::Object * value;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_AbstractMap$SimpleImmutableEntry__
