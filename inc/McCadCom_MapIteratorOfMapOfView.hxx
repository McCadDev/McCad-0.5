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

#ifndef _McCadCom_MapIteratorOfMapOfView_HeaderFile
#define _McCadCom_MapIteratorOfMapOfView_HeaderFile

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_McCadCom_View_HeaderFile
#include <Handle_McCadCom_View.hxx>
#endif
#ifndef _Handle_McCadCom_StdMapNodeOfMapOfView_HeaderFile
#include <Handle_McCadCom_StdMapNodeOfMapOfView.hxx>
#endif
class Standard_NoSuchObject;
class McCadCom_View;
class TColStd_MapTransientHasher;
class McCadCom_MapOfView;
class McCadCom_StdMapNodeOfMapOfView;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadCom_MapIteratorOfMapOfView  : public TCollection_BasicMapIterator {

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


Standard_EXPORT McCadCom_MapIteratorOfMapOfView();


Standard_EXPORT McCadCom_MapIteratorOfMapOfView(const McCadCom_MapOfView& aMap);


Standard_EXPORT   void Initialize(const McCadCom_MapOfView& aMap) ;


Standard_EXPORT  const Handle_McCadCom_View& Key() const;





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


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
