
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicComboBoxUI$ComboBoxLayoutManager__
#define __javax_swing_plaf_basic_BasicComboBoxUI$ComboBoxLayoutManager__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container;
        class Dimension;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicComboBoxUI;
            class BasicComboBoxUI$ComboBoxLayoutManager;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager : public ::java::lang::Object
{

public:
  BasicComboBoxUI$ComboBoxLayoutManager(::javax::swing::plaf::basic::BasicComboBoxUI *);
  virtual void addLayoutComponent(::java::lang::String *, ::java::awt::Component *);
  virtual void removeLayoutComponent(::java::awt::Component *);
  virtual ::java::awt::Dimension * preferredLayoutSize(::java::awt::Container *);
  virtual ::java::awt::Dimension * minimumLayoutSize(::java::awt::Container *);
  virtual void layoutContainer(::java::awt::Container *);
public: // actually package-private
  ::javax::swing::plaf::basic::BasicComboBoxUI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicComboBoxUI$ComboBoxLayoutManager__