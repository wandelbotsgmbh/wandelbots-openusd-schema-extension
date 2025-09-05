//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#ifndef WANDELBOTSNOVASCHEMA_GENERATED_MOTIONGROUPAPI_H
#define WANDELBOTSNOVASCHEMA_GENERATED_MOTIONGROUPAPI_H

/// \file wandelbotsNOVASchema/motionGroupAPI.h

#include "pxr/pxr.h"
#include ".//api.h"
#include "pxr/usd/usd/apiSchemaBase.h"
#include "pxr/usd/usd/prim.h"
#include "pxr/usd/usd/stage.h"
#include ".//tokens.h"

#include "pxr/base/vt/value.h"

#include "pxr/base/gf/vec3d.h"
#include "pxr/base/gf/vec3f.h"
#include "pxr/base/gf/matrix4d.h"

#include "pxr/base/tf/token.h"
#include "pxr/base/tf/type.h"

PXR_NAMESPACE_OPEN_SCOPE

class SdfAssetPath;

// -------------------------------------------------------------------------- //
// MOTIONGROUPAPI                                                             //
// -------------------------------------------------------------------------- //

/// \class WandelbotsNOVAMotionGroupAPI
///
/// Defines a connector to NOVA motion group api.
///
class WandelbotsNOVAMotionGroupAPI : public UsdAPISchemaBase
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::SingleApplyAPI;

    /// Construct a WandelbotsNOVAMotionGroupAPI on UsdPrim \p prim .
    /// Equivalent to WandelbotsNOVAMotionGroupAPI::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit WandelbotsNOVAMotionGroupAPI(const UsdPrim& prim=UsdPrim())
        : UsdAPISchemaBase(prim)
    {
    }

    /// Construct a WandelbotsNOVAMotionGroupAPI on the prim held by \p schemaObj .
    /// Should be preferred over WandelbotsNOVAMotionGroupAPI(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit WandelbotsNOVAMotionGroupAPI(const UsdSchemaBase& schemaObj)
        : UsdAPISchemaBase(schemaObj)
    {
    }

    /// Destructor.
    WANDELBOTSNOVASCHEMA_API
    virtual ~WandelbotsNOVAMotionGroupAPI();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    WANDELBOTSNOVASCHEMA_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a WandelbotsNOVAMotionGroupAPI holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// WandelbotsNOVAMotionGroupAPI(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    WANDELBOTSNOVASCHEMA_API
    static WandelbotsNOVAMotionGroupAPI
    Get(const UsdStagePtr &stage, const SdfPath &path);


    /// Returns true if this <b>single-apply</b> API schema can be applied to 
    /// the given \p prim. If this schema can not be a applied to the prim, 
    /// this returns false and, if provided, populates \p whyNot with the 
    /// reason it can not be applied.
    /// 
    /// Note that if CanApply returns false, that does not necessarily imply
    /// that calling Apply will fail. Callers are expected to call CanApply
    /// before calling Apply if they want to ensure that it is valid to 
    /// apply a schema.
    /// 
    /// \sa UsdPrim::GetAppliedSchemas()
    /// \sa UsdPrim::HasAPI()
    /// \sa UsdPrim::CanApplyAPI()
    /// \sa UsdPrim::ApplyAPI()
    /// \sa UsdPrim::RemoveAPI()
    ///
    WANDELBOTSNOVASCHEMA_API
    static bool 
    CanApply(const UsdPrim &prim, std::string *whyNot=nullptr);

    /// Applies this <b>single-apply</b> API schema to the given \p prim.
    /// This information is stored by adding "MotionGroupAPI" to the 
    /// token-valued, listOp metadata \em apiSchemas on the prim.
    /// 
    /// \return A valid WandelbotsNOVAMotionGroupAPI object is returned upon success. 
    /// An invalid (or empty) WandelbotsNOVAMotionGroupAPI object is returned upon 
    /// failure. See \ref UsdPrim::ApplyAPI() for conditions 
    /// resulting in failure. 
    /// 
    /// \sa UsdPrim::GetAppliedSchemas()
    /// \sa UsdPrim::HasAPI()
    /// \sa UsdPrim::CanApplyAPI()
    /// \sa UsdPrim::ApplyAPI()
    /// \sa UsdPrim::RemoveAPI()
    ///
    WANDELBOTSNOVASCHEMA_API
    static WandelbotsNOVAMotionGroupAPI 
    Apply(const UsdPrim &prim);

protected:
    /// Returns the kind of schema this class belongs to.
    ///
    /// \sa UsdSchemaKind
    WANDELBOTSNOVASCHEMA_API
    UsdSchemaKind _GetSchemaKind() const override;

private:
    // needs to invoke _GetStaticTfType.
    friend class UsdSchemaRegistry;
    WANDELBOTSNOVASCHEMA_API
    static const TfType &_GetStaticTfType();

    static bool _IsTypedSchema();

    // override SchemaBase virtuals.
    WANDELBOTSNOVASCHEMA_API
    const TfType &_GetTfType() const override;

public:
    // --------------------------------------------------------------------- //
    // ENABLED 
    // --------------------------------------------------------------------- //
    /// Defines if the motion group should connect once the simulation is running.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool wandelbots:nova:motionGroup:enabled = 1` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetEnabledAttr() const;

    /// See GetEnabledAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateEnabledAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // CELL 
    // --------------------------------------------------------------------- //
    /// Defines the cell of the motion group.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `string wandelbots:nova:motionGroup:cell = ""` |
    /// | C++ Type | std::string |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->String |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetCellAttr() const;

    /// See GetCellAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateCellAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // CONTROLLER 
    // --------------------------------------------------------------------- //
    /// Defines the controller identifier from the api.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `string wandelbots:nova:motionGroup:controller = ""` |
    /// | C++ Type | std::string |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->String |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetControllerAttr() const;

    /// See GetControllerAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateControllerAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // MOTIONGROUP 
    // --------------------------------------------------------------------- //
    /// Defines the motionGroup identifier from the api.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `string wandelbots:nova:motionGroup:motionGroup = ""` |
    /// | C++ Type | std::string |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->String |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetMotionGroupAttr() const;

    /// See GetMotionGroupAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateMotionGroupAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // HOST 
    // --------------------------------------------------------------------- //
    /// Defines the host of the motion group. E.g. abc.instance.wandelbots.com or 127.0.0.1.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `string wandelbots:nova:motionGroup:host = ""` |
    /// | C++ Type | std::string |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->String |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetHostAttr() const;

    /// See GetHostAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateHostAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // SECURE 
    // --------------------------------------------------------------------- //
    /// Defines wether the connection to the motion group api needs to use a secure connection.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool wandelbots:nova:motionGroup:secure = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetSecureAttr() const;

    /// See GetSecureAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateSecureAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // RESPONSERATE 
    // --------------------------------------------------------------------- //
    /// Defines the motion group stream message/update delay.
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uint wandelbots:nova:motionGroup:responseRate = 32` |
    /// | C++ Type | unsigned int |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->UInt |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetResponseRateAttr() const;

    /// See GetResponseRateAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateResponseRateAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // --------------------------------------------------------------------- //
    // EXTERNALJOINTSTREAM 
    // --------------------------------------------------------------------- //
    /// Defines wether the stream should be operated as externalJointStream to stay in sync with the motion state receiver (e.g. the simulation).
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `bool wandelbots:nova:motionGroup:externalJointStream = 0` |
    /// | C++ Type | bool |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Bool |
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute GetExternalJointStreamAttr() const;

    /// See GetExternalJointStreamAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    WANDELBOTSNOVASCHEMA_API
    UsdAttribute CreateExternalJointStreamAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // ===================================================================== //
    // Feel free to add custom code below this line, it will be preserved by 
    // the code generator. 
    //
    // Just remember to: 
    //  - Close the class declaration with }; 
    //  - Close the namespace with PXR_NAMESPACE_CLOSE_SCOPE
    //  - Close the include guard with #endif
    // ===================================================================== //
    // --(BEGIN CUSTOM CODE)--
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
