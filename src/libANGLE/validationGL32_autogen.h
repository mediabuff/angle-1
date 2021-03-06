// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and wgl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL32_autogen.h:
//   Validation functions for the OpenGL 3.2 entry points.

#ifndef LIBANGLE_VALIDATION_GL32_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL32_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateMultiDrawElementsBaseVertex(Context *context,
                                         PrimitiveMode modePacked,
                                         const GLsizei *count,
                                         DrawElementsType typePacked,
                                         const void *const *indices,
                                         GLsizei drawcount,
                                         const GLint *basevertex);
bool ValidateProvokingVertex(Context *context, ProvokingVertexConvention modePacked);
bool ValidateTexImage2DMultisample(Context *context,
                                   GLenum target,
                                   GLsizei samples,
                                   GLenum internalformat,
                                   GLsizei width,
                                   GLsizei height,
                                   GLboolean fixedsamplelocations);
bool ValidateTexImage3DMultisample(Context *context,
                                   GLenum target,
                                   GLsizei samples,
                                   GLenum internalformat,
                                   GLsizei width,
                                   GLsizei height,
                                   GLsizei depth,
                                   GLboolean fixedsamplelocations);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL32_AUTOGEN_H_
