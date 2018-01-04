//
// Copyright (c) 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ReplaceVariable.h: Replace all references to a specific variable in the AST with references to
// another variable.

#ifndef COMPILER_TRANSLATOR_REPLACEVARIABLE_H_
#define COMPILER_TRANSLATOR_REPLACEVARIABLE_H_

namespace sh
{

class TIntermBlock;
class TVariable;

void ReplaceVariable(TIntermBlock *root,
                     const TVariable *toBeReplaced,
                     const TVariable *replacement);

}  // namespace sh

#endif  // COMPILER_TRANSLATOR_REPLACEVARIABLE_H_
