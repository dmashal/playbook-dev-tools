
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_TimeUnit$7__
#define __java_util_concurrent_TimeUnit$7__

#pragma interface

#include <java/util/concurrent/TimeUnit.h>

class java::util::concurrent::TimeUnit$7 : public ::java::util::concurrent::TimeUnit
{

public: // actually package-private
  TimeUnit$7(::java::lang::String *, jint);
public:
  jlong toNanos(jlong);
  jlong toMicros(jlong);
  jlong toMillis(jlong);
  jlong toSeconds(jlong);
  jlong toMinutes(jlong);
  jlong toHours(jlong);
  jlong toDays(jlong);
  jlong convert(jlong, ::java::util::concurrent::TimeUnit *);
public: // actually package-private
  jint excessNanos(jlong, jlong);
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_TimeUnit$7__
