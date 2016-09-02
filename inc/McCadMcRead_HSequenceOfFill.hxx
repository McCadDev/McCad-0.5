// File generated by CPPExt (Transient)
//
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

#ifndef _McCadMcRead_HSequenceOfFill_HeaderFile
#define _McCadMcRead_HSequenceOfFill_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadMcRead_HSequenceOfFill_HeaderFile
#include <Handle_McCadMcRead_HSequenceOfFill.hxx>
#endif

#ifndef _McCadMcRead_SequenceOfFill_HeaderFile
#include <McCadMcRead_SequenceOfFill.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_McCadMcRead_Fill_HeaderFile
#include <Handle_McCadMcRead_Fill.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadMcRead_Fill;
class McCadMcRead_SequenceOfFill;



class McCadMcRead_HSequenceOfFill : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 

McCadMcRead_HSequenceOfFill();

  Standard_Boolean IsEmpty() const;

  Standard_Integer Length() const;


Standard_EXPORT   void Clear() ;


Standard_EXPORT   void Append(const Handle(McCadMcRead_Fill)& anItem) ;


Standard_EXPORT   void Append(const Handle(McCadMcRead_HSequenceOfFill)& aSequence) ;


Standard_EXPORT   void Prepend(const Handle(McCadMcRead_Fill)& anItem) ;


Standard_EXPORT   void Prepend(const Handle(McCadMcRead_HSequenceOfFill)& aSequence) ;


Standard_EXPORT   void Reverse() ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadMcRead_Fill)& anItem) ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadMcRead_HSequenceOfFill)& aSequence) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadMcRead_Fill)& anItem) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadMcRead_HSequenceOfFill)& aSequence) ;


Standard_EXPORT   void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;


Standard_EXPORT   Handle_McCadMcRead_HSequenceOfFill Split(const Standard_Integer anIndex) ;


Standard_EXPORT   void SetValue(const Standard_Integer anIndex,const Handle(McCadMcRead_Fill)& anItem) ;


Standard_EXPORT  const Handle_McCadMcRead_Fill& Value(const Standard_Integer anIndex) const;


Standard_EXPORT   Handle_McCadMcRead_Fill& ChangeValue(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;

 const McCadMcRead_SequenceOfFill& Sequence() const;

  McCadMcRead_SequenceOfFill& ChangeSequence() ;


Standard_EXPORT   Handle_McCadMcRead_HSequenceOfFill ShallowCopy() const;
//Standard_EXPORT ~McCadMcRead_HSequenceOfFill();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

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
McCadMcRead_SequenceOfFill mySequence;


};

#define Item Handle_McCadMcRead_Fill
#define Item_hxx <McCadMcRead_Fill.hxx>
#define TheSequence McCadMcRead_SequenceOfFill
#define TheSequence_hxx <McCadMcRead_SequenceOfFill.hxx>
#define TCollection_HSequence McCadMcRead_HSequenceOfFill
#define TCollection_HSequence_hxx <McCadMcRead_HSequenceOfFill.hxx>
#define Handle_TCollection_HSequence Handle_McCadMcRead_HSequenceOfFill
#define TCollection_HSequence_Type_() McCadMcRead_HSequenceOfFill_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
//
inline Handle_McCadMcRead_HSequenceOfFill ShallowCopy(const Handle_McCadMcRead_HSequenceOfFill& me) {
 return me->ShallowCopy();
}



#endif
