
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_html2_DomHTMLLabelElement__
#define __gnu_xml_dom_html2_DomHTMLLabelElement__

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
            class DomHTMLLabelElement;
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
            class HTMLFormElement;
        }
      }
    }
  }
}

class gnu::xml::dom::html2::DomHTMLLabelElement : public ::gnu::xml::dom::html2::DomHTMLElement
{

public: // actually protected
  DomHTMLLabelElement(::gnu::xml::dom::html2::DomHTMLDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::org::w3c::dom::html2::HTMLFormElement * getForm();
  virtual ::java::lang::String * getAccessKey();
  virtual void setAccessKey(::java::lang::String *);
  virtual ::java::lang::String * getHtmlFor();
  virtual void setHtmlFor(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_html2_DomHTMLLabelElement__