// File generated by CPPExt (Value)
//
//                     Copyright (C) 1991 - 2000 by
//                      Matra Datavision SA.  All rights reserved.
//
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
//
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadGUI_FileDialog_HeaderFile
#define _McCadGUI_FileDialog_HeaderFile

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _McCadGUI_BaseDialog_HeaderFile
#include <McCadGUI_BaseDialog.hxx>
#endif
class TCollection_AsciiString;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadGUI_FileDialog  : public McCadGUI_BaseDialog {

public:

    void* operator new(size_t,void* anAddress)
      {
        return anAddress;
      }
    void* operator new(size_t size)
      {
        return Standard::Allocate(size);
      }
    void  operator delete(void *anAddress)
      {
        if (anAddress) Standard::Free((Standard_Address&)anAddress);
      }
 // Methods PUBLIC
 //


Standard_EXPORT McCadGUI_FileDialog();


Standard_EXPORT virtual  TCollection_AsciiString SelectedFile() const;


Standard_EXPORT virtual  TCollection_AsciiString SelectedFilter() const;


Standard_EXPORT virtual  void SetSelectedFilter(const TCollection_AsciiString& theMask) ;


Standard_EXPORT virtual  void SetSelection(const TCollection_AsciiString& theFileName) ;





protected:

 // Methods PROTECTED
 //


 // Fields PROTECTED
 //


private:

 // Methods PRIVATE
 //


 // Fields PRIVATE
 //
TCollection_AsciiString myFileName;
TCollection_AsciiString myFilter;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
