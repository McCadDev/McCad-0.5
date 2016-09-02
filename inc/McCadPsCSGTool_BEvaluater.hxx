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

#ifndef _McCadPsCSGTool_BEvaluater_HeaderFile
#define _McCadPsCSGTool_BEvaluater_HeaderFile

#ifndef _Handle_McCadTDS_PsSolid_HeaderFile
#include <Handle_McCadTDS_PsSolid.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class McCadTDS_PsSolid;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadPsCSGTool_BEvaluater  {

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

//! This class performs the extension of a PsSolid <br>
Standard_EXPORT McCadPsCSGTool_BEvaluater();


Standard_EXPORT McCadPsCSGTool_BEvaluater(const Handle(McCadTDS_PsSolid)& thePsSolid);


Standard_EXPORT   void Init(const Handle(McCadTDS_PsSolid)& thePsSolid) ;


Standard_EXPORT   Standard_Boolean IsDone() const;


Standard_EXPORT   void Done() ;


Standard_EXPORT   void NotDone() ;


Standard_EXPORT   Handle_McCadTDS_PsSolid GetPsSolid() const;





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
Handle_McCadTDS_PsSolid myMotherPsSolid;
Handle_McCadTDS_PsSolid myPsSolids;
Standard_Boolean myIsDone;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
