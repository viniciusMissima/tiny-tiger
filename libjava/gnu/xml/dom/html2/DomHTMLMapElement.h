
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_html2_DomHTMLMapElement__
#define __gnu_xml_dom_html2_DomHTMLMapElement__

#pragma interface

#include <gnu/xml/dom/html2/DomHTMLElement.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace html2
        {
            class DomHTMLDocument;
            class DomHTMLMapElement;
        }
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
        namespace html2
        {
            class HTMLCollection;
        }
      }
    }
  }
}

class gnu::xml::dom::html2::DomHTMLMapElement : public ::gnu::xml::dom::html2::DomHTMLElement
{

public: // actually protected
  DomHTMLMapElement(::gnu::xml::dom::html2::DomHTMLDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::org::w3c::dom::html2::HTMLCollection * getAreas();
  virtual ::java::lang::String * getName();
  virtual void setName(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_html2_DomHTMLMapElement__
