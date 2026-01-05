//
// Copyright 2017 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef WANDELBOTSNOVASCHEMA_API_H
#define WANDELBOTSNOVASCHEMA_API_H

#include "pxr/base/arch/export.h"

#if defined(PXR_STATIC)
#   define WANDELBOTSNOVASCHEMA_API
#   define WANDELBOTSNOVASCHEMA_API_TEMPLATE_CLASS(...)
#   define WANDELBOTSNOVASCHEMA_API_TEMPLATE_STRUCT(...)
#   define WANDELBOTSNOVASCHEMA_LOCAL
#else
#   if defined(WANDELBOTSNOVASCHEMA_EXPORTS)
#       define WANDELBOTSNOVASCHEMA_API ARCH_EXPORT
#       define WANDELBOTSNOVASCHEMA_API_TEMPLATE_CLASS(...) ARCH_EXPORT_TEMPLATE(class, __VA_ARGS__)
#       define WANDELBOTSNOVASCHEMA_API_TEMPLATE_STRUCT(...) ARCH_EXPORT_TEMPLATE(struct, __VA_ARGS__)
#   else
#       define WANDELBOTSNOVASCHEMA_API ARCH_IMPORT
#       define WANDELBOTSNOVASCHEMA_API_TEMPLATE_CLASS(...) ARCH_IMPORT_TEMPLATE(class, __VA_ARGS__)
#       define WANDELBOTSNOVASCHEMA_API_TEMPLATE_STRUCT(...) ARCH_IMPORT_TEMPLATE(struct, __VA_ARGS__)
#   endif
#   define WANDELBOTSNOVASCHEMA_LOCAL ARCH_HIDDEN
#endif

#endif
