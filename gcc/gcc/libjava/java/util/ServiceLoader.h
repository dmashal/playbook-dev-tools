
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_ServiceLoader__
#define __java_util_ServiceLoader__

#pragma interface

#include <java/lang/Object.h>

class java::util::ServiceLoader : public ::java::lang::Object
{

  ServiceLoader(::java::lang::Class *, ::java::lang::ClassLoader *);
public:
  ::java::util::Iterator * iterator();
  static ::java::util::ServiceLoader * load(::java::lang::Class *);
  static ::java::util::ServiceLoader * load(::java::lang::Class *, ::java::lang::ClassLoader *);
  static ::java::util::ServiceLoader * loadInstalled(::java::lang::Class *);
  void reload();
  ::java::lang::String * toString();
public: // actually package-private
  static ::java::util::List * access$0(::java::util::ServiceLoader *);
  static ::java::util::Iterator * access$1(::java::util::ServiceLoader *);
  static ::java::lang::Class * access$2(::java::util::ServiceLoader *);
  static ::java::lang::ClassLoader * access$3(::java::util::ServiceLoader *);
  static void access$4(::java::util::ServiceLoader *, ::java::util::Iterator *);
private:
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::lang::Object)))) spi;
  ::java::lang::ClassLoader * loader;
  ::java::util::List * cache;
  ::java::util::Iterator * serviceIt;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_ServiceLoader__