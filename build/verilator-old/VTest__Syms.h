// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTEST__SYMS_H_
#define _VTEST__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VTest.h"
#include "VTest_DotProduct.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTest__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTest*                         TOPp;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8;
    VTest_DotProduct               TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9;
    
    // CREATORS
    VTest__Syms(VTest* topp, const char* namep);
    ~VTest__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
