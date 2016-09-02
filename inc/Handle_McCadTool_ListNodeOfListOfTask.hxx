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

#ifndef _Handle_McCadTool_ListNodeOfListOfTask_HeaderFile
#define _Handle_McCadTool_ListNodeOfListOfTask_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_TCollection_MapNode_HeaderFile
#include <Handle_TCollection_MapNode.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(TCollection_MapNode);
class McCadTool_ListNodeOfListOfTask;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadTool_ListNodeOfListOfTask);

class Handle(McCadTool_ListNodeOfListOfTask) : public Handle(TCollection_MapNode) {
  public:
    Handle(McCadTool_ListNodeOfListOfTask)():Handle(TCollection_MapNode)() {} 
    Handle(McCadTool_ListNodeOfListOfTask)(const Handle(McCadTool_ListNodeOfListOfTask)& aHandle) : Handle(TCollection_MapNode)(aHandle) 
     {
     }

    Handle(McCadTool_ListNodeOfListOfTask)(const McCadTool_ListNodeOfListOfTask* anItem) : Handle(TCollection_MapNode)((TCollection_MapNode *)anItem) 
     {
     }

    Handle(McCadTool_ListNodeOfListOfTask)& operator=(const Handle(McCadTool_ListNodeOfListOfTask)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadTool_ListNodeOfListOfTask)& operator=(const McCadTool_ListNodeOfListOfTask* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadTool_ListNodeOfListOfTask* operator->() const
     {
      return (McCadTool_ListNodeOfListOfTask *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadTool_ListNodeOfListOfTask)();
 
   Standard_EXPORT static const Handle(McCadTool_ListNodeOfListOfTask) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
