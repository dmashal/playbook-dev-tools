
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_xlib_WMSizeHints__
#define __gnu_gcj_xlib_WMSizeHints__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
        class RawData;
      namespace xlib
      {
          class WMSizeHints;
          class Window;
      }
    }
  }
}

class gnu::gcj::xlib::WMSizeHints : public ::java::lang::Object
{

public:
  WMSizeHints();
private:
  void init(::gnu::gcj::xlib::WMSizeHints *);
public: // actually protected
  virtual void finalize();
public:
  virtual ::java::lang::Object * clone();
  virtual void applyNormalHints(::gnu::gcj::xlib::Window *);
  virtual void setMinSize(jint, jint);
  virtual void setMaxSize(jint, jint);
public: // actually package-private
  ::gnu::gcj::RawData * __attribute__((aligned(__alignof__( ::java::lang::Object)))) structure;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_xlib_WMSizeHints__