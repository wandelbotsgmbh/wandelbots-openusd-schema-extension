//
// Copyright 2016 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef WANDELBOTSNOVA_TOKENS_H
#define WANDELBOTSNOVA_TOKENS_H

/// \file wandelbotsNOVASchema/tokens.h

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// 
// This is an automatically generated file (by usdGenSchema.py).
// Do not hand-edit!
// 
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "pxr/pxr.h"
#include ".//api.h"
#include "pxr/base/tf/staticData.h"
#include "pxr/base/tf/token.h"
#include <vector>

PXR_NAMESPACE_OPEN_SCOPE


/// \class WandelbotsNOVATokensType
///
/// \link WandelbotsNOVATokens \endlink provides static, efficient
/// \link TfToken TfTokens\endlink for use in all public USD API.
///
/// These tokens are auto-generated from the module's schema, representing
/// property names, for when you need to fetch an attribute or relationship
/// directly by name, e.g. UsdPrim::GetAttribute(), in the most efficient
/// manner, and allow the compiler to verify that you spelled the name
/// correctly.
///
/// WandelbotsNOVATokens also contains all of the \em allowedTokens values
/// declared for schema builtin attributes of 'token' scene description type.
/// Use WandelbotsNOVATokens like so:
///
/// \code
///     gprim.GetMyTokenValuedAttr().Set(WandelbotsNOVATokens->wandelbotsNovaGhostObjectSourceTcp);
/// \endcode
struct WandelbotsNOVATokensType {
    WANDELBOTSNOVASCHEMA_API WandelbotsNOVATokensType();
    /// \brief "wandelbots:nova:ghostObject:sourceTcp"
    /// 
    /// WandelbotsNOVAGhostObjectAPI
    const TfToken wandelbotsNovaGhostObjectSourceTcp;
    /// \brief "wandelbots:nova:motionGroup:cell"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupCell;
    /// \brief "wandelbots:nova:motionGroup:controller"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupController;
    /// \brief "wandelbots:nova:motionGroup:enabled"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupEnabled;
    /// \brief "wandelbots:nova:motionGroup:externalJointStream"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupExternalJointStream;
    /// \brief "wandelbots:nova:motionGroup:host"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupHost;
    /// \brief "wandelbots:nova:motionGroup:motionGroup"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupMotionGroup;
    /// \brief "wandelbots:nova:motionGroup:responseRate"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupResponseRate;
    /// \brief "wandelbots:nova:motionGroup:secure"
    /// 
    /// WandelbotsNOVAMotionGroupAPI
    const TfToken wandelbotsNovaMotionGroupSecure;
    /// \brief "wandelbots:nova:tool:linkBody"
    /// 
    /// WandelbotsNOVAToolAPI
    const TfToken wandelbotsNovaToolLinkBody;
    /// \brief "GhostObjectAPI"
    /// 
    /// Schema identifer and family for WandelbotsNOVAGhostObjectAPI
    const TfToken GhostObjectAPI;
    /// \brief "MotionGroupAPI"
    /// 
    /// Schema identifer and family for WandelbotsNOVAMotionGroupAPI
    const TfToken MotionGroupAPI;
    /// \brief "ToolAPI"
    /// 
    /// Schema identifer and family for WandelbotsNOVAToolAPI
    const TfToken ToolAPI;
    /// \brief "ToolCenterPoint"
    /// 
    /// Schema identifer and family for WandelbotsNOVAToolCenterPoint
    const TfToken ToolCenterPoint;
    /// A vector of all of the tokens listed above.
    const std::vector<TfToken> allTokens;
};

/// \var WandelbotsNOVATokens
///
/// A global variable with static, efficient \link TfToken TfTokens\endlink
/// for use in all public USD API.  \sa WandelbotsNOVATokensType
extern WANDELBOTSNOVASCHEMA_API TfStaticData<WandelbotsNOVATokensType> WandelbotsNOVATokens;

PXR_NAMESPACE_CLOSE_SCOPE

#endif
