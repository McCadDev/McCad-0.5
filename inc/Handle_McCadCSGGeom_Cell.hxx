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

#ifndef _Handle_McCadCSGGeom_Cell_HeaderFile
#define _Handle_McCadCSGGeom_Cell_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(MMgt_TShared);
class McCadCSGGeom_Cell;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadCSGGeom_Cell);

class Handle(McCadCSGGeom_Cell) : public Handle(MMgt_TShared) {
  public:
    Handle(McCadCSGGeom_Cell)():Handle(MMgt_TShared)() {} 
    Handle(McCadCSGGeom_Cell)(const Handle(McCadCSGGeom_Cell)& aHandle) : Handle(MMgt_TShared)(aHandle) 
     {
     }

    Handle(McCadCSGGeom_Cell)(const McCadCSGGeom_Cell* anItem) : Handle(MMgt_TShared)((MMgt_TShared *)anItem) 
     {
     }

    Handle(McCadCSGGeom_Cell)& operator=(const Handle(McCadCSGGeom_Cell)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadCSGGeom_Cell)& operator=(const McCadCSGGeom_Cell* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadCSGGeom_Cell* operator->() const
     {
      return (McCadCSGGeom_Cell *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadCSGGeom_Cell)();
 
   Standard_EXPORT static const Handle(McCadCSGGeom_Cell) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
