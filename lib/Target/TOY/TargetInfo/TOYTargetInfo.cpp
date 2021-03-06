//===-- TOYTargetInfo.cpp - TOY Target Implementation -----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "TOY.h"
#include "llvm/Module.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

Target llvm::TheTOYTarget;

extern "C" void LLVMInitializeTOYTargetInfo() { 
  RegisterTarget<Triple::toy> X(TheTOYTarget, "toy", "TOY");
}
