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

#ifndef _McCadCom_MapOfView_HeaderFile
#define _McCadCom_MapOfView_HeaderFile

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_McCadCom_View_HeaderFile
#include <Handle_McCadCom_View.hxx>
#endif
#ifndef _Handle_McCadCom_StdMapNodeOfMapOfView_HeaderFile
#include <Handle_McCadCom_StdMapNodeOfMapOfView.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class McCadCom_View;
class TColStd_MapTransientHasher;
class McCadCom_StdMapNodeOfMapOfView;
class McCadCom_MapIteratorOfMapOfView;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadCom_MapOfView  : public TCollection_BasicMap {

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


Standard_EXPORT McCadCom_MapOfView(const Standard_Integer NbBuckets = 1);


Standard_EXPORT   McCadCom_MapOfView& Assign(const McCadCom_MapOfView& Other) ;
  McCadCom_MapOfView& operator =(const McCadCom_MapOfView& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void ReSize(const Standard_Integer NbBuckets) ;


Standard_EXPORT   void Clear() ;
~McCadCom_MapOfView()
{
  Clear();
}



Standard_EXPORT   Standard_Boolean Add(const Handle(McCadCom_View)& aKey) ;


Standard_EXPORT   Standard_Boolean Contains(const Handle(McCadCom_View)& aKey) const;


Standard_EXPORT   Standard_Boolean Remove(const Handle(McCadCom_View)& aKey) ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT McCadCom_MapOfView(const McCadCom_MapOfView& Other);


 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
