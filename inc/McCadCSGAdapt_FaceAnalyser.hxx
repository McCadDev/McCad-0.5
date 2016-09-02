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

#ifndef _McCadCSGAdapt_FaceAnalyser_HeaderFile
#define _McCadCSGAdapt_FaceAnalyser_HeaderFile

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopoDS_Shell_HeaderFile
#include <TopoDS_Shell.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shell;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadCSGAdapt_FaceAnalyser  {

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

//! analysis and repair of shells, faces and edges. <br>
//!     This is just a primitive, temporary solution mimicking cascade. <br>
//!     Should be replaced soon!!! <br>
Standard_EXPORT McCadCSGAdapt_FaceAnalyser();


Standard_EXPORT McCadCSGAdapt_FaceAnalyser(const TopoDS_Shell& theShell);


Standard_EXPORT   void Init(const TopoDS_Shell& theShell) ;


Standard_EXPORT   void SetPrecision(const Standard_Real thePrecision) ;


Standard_EXPORT   Standard_Real GetPrecision() const;


Standard_EXPORT   TopoDS_Shell FixedShell() ;


Standard_EXPORT   Standard_Boolean HaveSmallFaces() const;


Standard_EXPORT   void DeleteSmallFaces() ;


Standard_EXPORT   Standard_Boolean HaveSmallEdges() const;


Standard_EXPORT   void DeleteSmallEdges() ;


Standard_EXPORT   Standard_Boolean HaveInDirectFaces() const;


Standard_EXPORT   void DoDirectFaces() ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT   void Fix() ;


 // Fields PRIVATE
 //
Standard_Real myPrecision;
TopoDS_Shell myShell;
Standard_Boolean isFixed;
Standard_Boolean haveSmallFaces;
Standard_Boolean haveSmallEdges;
Standard_Boolean haveIndirect;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
