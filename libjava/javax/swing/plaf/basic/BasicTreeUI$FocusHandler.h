
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicTreeUI$FocusHandler__
#define __javax_swing_plaf_basic_BasicTreeUI$FocusHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class FocusEvent;
      }
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
            class BasicTreeUI;
            class BasicTreeUI$FocusHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicTreeUI$FocusHandler : public ::java::lang::Object
{

public:
  BasicTreeUI$FocusHandler(::javax::swing::plaf::basic::BasicTreeUI *);
  virtual void focusGained(::java::awt::event::FocusEvent *);
  virtual void focusLost(::java::awt::event::FocusEvent *);
public: // actually package-private
  virtual void repaintLeadRow();
  ::javax::swing::plaf::basic::BasicTreeUI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicTreeUI$FocusHandler__
