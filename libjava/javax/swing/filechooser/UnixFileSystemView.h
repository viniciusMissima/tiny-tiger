
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_filechooser_UnixFileSystemView__
#define __javax_swing_filechooser_UnixFileSystemView__

#pragma interface

#include <javax/swing/filechooser/FileSystemView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class Icon;
      namespace filechooser
      {
          class UnixFileSystemView;
      }
    }
  }
}

class javax::swing::filechooser::UnixFileSystemView : public ::javax::swing::filechooser::FileSystemView
{

public: // actually package-private
  UnixFileSystemView();
public:
  virtual ::java::io::File * createNewFolder(::java::io::File *);
  virtual JArray< ::java::io::File * > * getRoots();
  virtual ::java::lang::String * getSystemDisplayName(::java::io::File *);
  virtual ::javax::swing::Icon * getSystemIcon(::java::io::File *);
  virtual ::java::lang::String * getSystemTypeDescription(::java::io::File *);
  virtual jboolean isRoot(::java::io::File *);
private:
  static ::java::lang::String * NEW_FOLDER_NAME;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_filechooser_UnixFileSystemView__
