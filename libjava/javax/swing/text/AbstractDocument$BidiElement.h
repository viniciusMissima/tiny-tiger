
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_AbstractDocument$BidiElement__
#define __javax_swing_text_AbstractDocument$BidiElement__

#pragma interface

#include <javax/swing/text/AbstractDocument$LeafElement.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AbstractDocument;
          class AbstractDocument$BidiElement;
          class Element;
      }
    }
  }
}

class javax::swing::text::AbstractDocument$BidiElement : public ::javax::swing::text::AbstractDocument$LeafElement
{

public: // actually package-private
  AbstractDocument$BidiElement(::javax::swing::text::AbstractDocument *, ::javax::swing::text::Element *, jint, jint, jint);
public:
  virtual ::java::lang::String * getName();
public: // actually package-private
  ::javax::swing::text::AbstractDocument * __attribute__((aligned(__alignof__( ::javax::swing::text::AbstractDocument$LeafElement)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_AbstractDocument$BidiElement__
