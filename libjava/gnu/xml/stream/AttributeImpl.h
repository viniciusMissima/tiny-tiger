
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_AttributeImpl__
#define __gnu_xml_stream_AttributeImpl__

#pragma interface

#include <gnu/xml/stream/XMLEventImpl.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class AttributeImpl;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class QName;
      }
      namespace stream
      {
          class Location;
      }
    }
  }
}

class gnu::xml::stream::AttributeImpl : public ::gnu::xml::stream::XMLEventImpl
{

public: // actually protected
  AttributeImpl(::javax::xml::stream::Location *, ::javax::xml::namespace$::QName *, ::java::lang::String *, ::java::lang::String *, jboolean);
public:
  virtual jint getEventType();
  virtual ::javax::xml::namespace$::QName * getName();
  virtual ::java::lang::String * getValue();
  virtual ::java::lang::String * getDTDType();
  virtual jboolean isSpecified();
  virtual void writeAsEncodedUnicode(::java::io::Writer *);
public: // actually protected
  ::javax::xml::namespace$::QName * __attribute__((aligned(__alignof__( ::gnu::xml::stream::XMLEventImpl)))) name;
  ::java::lang::String * value;
  ::java::lang::String * type;
  jboolean specified;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_AttributeImpl__
