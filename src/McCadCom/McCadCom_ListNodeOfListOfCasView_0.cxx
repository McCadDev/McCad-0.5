// File generated by CPPExt (Transient)
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

#include <McCadCom_ListNodeOfListOfCasView.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _McCadCom_CasView_HeaderFile
#include <McCadCom_CasView.hxx>
#endif
#ifndef _McCadCom_ListOfCasView_HeaderFile
#include <McCadCom_ListOfCasView.hxx>
#endif
#ifndef _McCadCom_ListIteratorOfListOfCasView_HeaderFile
#include <McCadCom_ListIteratorOfListOfCasView.hxx>
#endif
//McCadCom_ListNodeOfListOfCasView::~McCadCom_ListNodeOfListOfCasView() {}
 


Standard_EXPORT Handle_Standard_Type& McCadCom_ListNodeOfListOfCasView_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_MapNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadCom_ListNodeOfListOfCasView",
			                                 sizeof(McCadCom_ListNodeOfListOfCasView),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadCom_ListNodeOfListOfCasView) Handle(McCadCom_ListNodeOfListOfCasView)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadCom_ListNodeOfListOfCasView) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadCom_ListNodeOfListOfCasView))) {
       _anOtherObject = Handle(McCadCom_ListNodeOfListOfCasView)((Handle(McCadCom_ListNodeOfListOfCasView)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadCom_ListNodeOfListOfCasView::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadCom_ListNodeOfListOfCasView) ; 
}
//Standard_Boolean McCadCom_ListNodeOfListOfCasView::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadCom_ListNodeOfListOfCasView) == AType || TCollection_MapNode::IsKind(AType)); 
//}
//Handle_McCadCom_ListNodeOfListOfCasView::~Handle_McCadCom_ListNodeOfListOfCasView() {}
#define Item Handle_McCadCom_CasView
#define Item_hxx <McCadCom_CasView.hxx>
#define TCollection_ListNode McCadCom_ListNodeOfListOfCasView
#define TCollection_ListNode_hxx <McCadCom_ListNodeOfListOfCasView.hxx>
#define TCollection_ListIterator McCadCom_ListIteratorOfListOfCasView
#define TCollection_ListIterator_hxx <McCadCom_ListIteratorOfListOfCasView.hxx>
#define Handle_TCollection_ListNode Handle_McCadCom_ListNodeOfListOfCasView
#define TCollection_ListNode_Type_() McCadCom_ListNodeOfListOfCasView_Type_()
#define TCollection_List McCadCom_ListOfCasView
#define TCollection_List_hxx <McCadCom_ListOfCasView.hxx>
#include <TCollection_ListNode.gxx>

