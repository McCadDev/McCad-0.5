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

#ifndef _McCadTDS_ExtFace_HeaderFile
#define _McCadTDS_ExtFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadTDS_ExtFace_HeaderFile
#include <Handle_McCadTDS_ExtFace.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Handle_TColgp_HSequenceOfPnt_HeaderFile
#include <Handle_TColgp_HSequenceOfPnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TColgp_HSequenceOfPnt;
class TopoDS_Face;
class gp_Pnt;


//! \brief This is an extended face <br>

//!  This is an extended face <br>


class McCadTDS_ExtFace : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 


Standard_EXPORT McCadTDS_ExtFace();


Standard_EXPORT McCadTDS_ExtFace(const TopoDS_Face& theFace);


Standard_EXPORT   void SetFace(const TopoDS_Face& theFace) ;


Standard_EXPORT   TopoDS_Face GetFace() const;


Standard_EXPORT   void AppendPosPnt(const gp_Pnt& thePnt) ;


Standard_EXPORT   void AppendNegPnt(const gp_Pnt& thePnt) ;


Standard_EXPORT   gp_Pnt GetPosPnt() const;


Standard_EXPORT   gp_Pnt GetNegPnt() const;


Standard_EXPORT   Standard_Integer NbPosPnt() const;


Standard_EXPORT   Standard_Integer NbNegPnt() const;


Standard_EXPORT   Handle_TColgp_HSequenceOfPnt GetPosPoints() const;


Standard_EXPORT   Handle_TColgp_HSequenceOfPnt GetNegPoints() const;


Standard_EXPORT   void SetHaveExt(const Standard_Boolean theHaveExt) ;


Standard_EXPORT   Standard_Boolean HaveExt() const;
//Standard_EXPORT ~McCadTDS_ExtFace();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //
Standard_Boolean myHaveExt;


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
TopoDS_Face myFace;
Handle_TColgp_HSequenceOfPnt myPosPoints;
Handle_TColgp_HSequenceOfPnt myNegPoints;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
