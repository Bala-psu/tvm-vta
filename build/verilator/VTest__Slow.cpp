// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "VTest.h"
#include "VTest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VTest) {
    VTest__Syms* __restrict vlSymsp = __VlSymsp = new VTest__Syms(this, name());
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14, VTest_DotProduct);
    VL_CELL(__PVT__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15, VTest_DotProduct);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTest::__Vconfigure(VTest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VTest::~VTest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VTest::_initial__TOP__1(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_initial__TOP__1\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*127:0*/ __Vtemp2[4];
    // Body
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__rdDataElemDestIdxNext 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_0 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_1 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_2 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_2;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_3 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_4 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_4;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_5 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_5;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_6 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_6;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_7 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_7;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_8 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_8;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_9 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_9;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_10 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_10 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_10;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_11 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_11;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_12 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_12 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_12;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_13 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_13 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_13;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_14 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_14;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_15 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_15 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___RAND_15;
    VL_RAND_RESET_W(128, __Vtemp1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[0U] 
        = __Vtemp1[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[1U] 
        = __Vtemp1[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[2U] 
        = __Vtemp1[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[3U] 
        = __Vtemp1[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_v 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_b 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT___RAND_1);
    VL_RAND_RESET_W(128, __Vtemp2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[0U] 
        = __Vtemp2[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[1U] 
        = __Vtemp2[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[2U] 
        = __Vtemp2[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[3U] 
        = __Vtemp2[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT__io_deq_v 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT__io_deq_b 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x80U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x7fU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x7fU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x7fU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x7fU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[3U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0 
        = (0x7fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x200U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar)][3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_0[3U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0 
        = (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext 
        = (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_bits_idx_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT____Vlvbound1 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT____Vlvbound1;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT____Vlvbound2 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT____Vlvbound2;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT____Vlvbound3 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT____Vlvbound3;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
        = (0xffffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT____Vlvbound1 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT____Vlvbound1;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT____Vlvbound2 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT____Vlvbound2;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT____Vlvbound3 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT____Vlvbound3;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT____Vlvbound1 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT____Vlvbound1;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT____Vlvbound2 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT____Vlvbound2;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT____Vlvbound3 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT____Vlvbound3;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT____Vlvbound1 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT____Vlvbound1;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT____Vlvbound2 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT____Vlvbound2;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT____Vlvbound3 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT____Vlvbound3;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
        = (0x1ffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_4;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = (0xfffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
        = (0xfffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_4;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = (0xfffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
        = (0x7fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
        = (0x7ffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_4;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = (0xfffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___RAND_8);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar)) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len[(0xffU 
                                                                                & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar)] 
            = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_0;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar);
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar)) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr[(0xffU 
                                                                                & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar)] 
            = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_1;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar);
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x100U, vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar)) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id[(0xffU 
                                                                                & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar)] 
            = (0xffU & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_2);
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__initvar);
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value 
        = (0xffU & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_3);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value 
        = (0xffU & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_4);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x200U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar)][0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar)][1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar)][2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar)][3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_0[3U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value 
        = (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value 
        = (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_b 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x200U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar)][0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar)][1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar)][2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[(0x1ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar)][3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_0[3U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value 
        = (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value 
        = (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[0U][3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[1U][3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_0[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[2U][3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound3[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_0;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_3;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0_rdataVec_MPORT_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1_rdataVec_MPORT_1_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rdata_r 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rvalid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_b 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__s1_launch 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__raddr 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_4;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_6 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__lsb 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___RAND_6;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT____Vlvbound1 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT____Vlvbound1;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT____Vlvbound2 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT____Vlvbound2;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT____Vlvbound3 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_tag[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT____Vlvbound3;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value 
        = (0x7fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1 
        = (0x7fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value 
        = (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1 
        = (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_0;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_3 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_3;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0_MPORT_2_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1_MPORT_3_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight 
        = (0xfffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_8 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_8;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_10 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_10);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataReadyPipe 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_12[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_13 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_start_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_13);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__rvalid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___RAND_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx 
        = (0x7fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_2;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
        = (0xfffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdDestElemIdxNext 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_0;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_3 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_3;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_6 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_6;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_9 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_9;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_12 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_12;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_15 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_15;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_18 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_18;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_21 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_21;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_24 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_24;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_27 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_27;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_30 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_30;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_33 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_33;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_36 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_36;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_39 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_39;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_42 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_42;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_45 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_45;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_48 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_48;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_51 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_51;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_54 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_54;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_57 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_57;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_60 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_60;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_63 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_63;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_66 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_66;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_69 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_69;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_72 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_72;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_75 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_75;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_78 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_78;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_81 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_81;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_84 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_84;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_87 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_87;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_90 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_90;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_93 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31[(0x3ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_93;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0_MPORT_32_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1_MPORT_33_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2_MPORT_34_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3_MPORT_35_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4_MPORT_36_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_17 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5_MPORT_37_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_17);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_20 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6_MPORT_38_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_20);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_23 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7_MPORT_39_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_23);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_26 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8_MPORT_40_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_26);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_29 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9_MPORT_41_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_29);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_32 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10_MPORT_42_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_35 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11_MPORT_43_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_35);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_38 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12_MPORT_44_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_38);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_41 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13_MPORT_45_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_41);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_44 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14_MPORT_46_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_44);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_47 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15_MPORT_47_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_47);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_50 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16_MPORT_48_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_50);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_53 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17_MPORT_49_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_53);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_56 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18_MPORT_50_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_56);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_59 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19_MPORT_51_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_59);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_62 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20_MPORT_52_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_62);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_65 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21_MPORT_53_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_65);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_68 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22_MPORT_54_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_68);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_71 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23_MPORT_55_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_71);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_74 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24_MPORT_56_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_74);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_77 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25_MPORT_57_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_77);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_80 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26_MPORT_58_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_80);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_83 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27_MPORT_59_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_83);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_86 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28_MPORT_60_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_86);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_89 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29_MPORT_61_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_89);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_92 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30_MPORT_62_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_92);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_95 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31_MPORT_63_addr_pipe_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_95);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_96 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_96);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_97 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight 
        = (0x7fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_97);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_98 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_98;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_99 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_99);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_100 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_100);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_101 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataReadyPipe 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_101);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_102[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_103 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_start_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_103);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_104 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__rvalid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___RAND_104);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_0;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_3 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_3;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_6 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_6;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_9 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_9;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_12 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_12;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_15 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_15;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_18 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_18;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_21 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_21;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0_MPORT_8_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1_MPORT_9_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2_MPORT_10_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3_MPORT_11_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4_MPORT_12_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_17 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5_MPORT_13_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_17);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_20 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6_MPORT_14_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_20);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_23 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7_MPORT_15_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_23);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_24 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_24);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_25 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_25);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_26 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_26;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_27 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_27);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_28 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_28);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_29 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataReadyPipe 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_29);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_30[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_31 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_start_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_31);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_32 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__rvalid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___RAND_32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__finish 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__cycle_cnt 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___RAND_0;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__acc_wr_count 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___RAND_1;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight 
        = (0xfU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r1 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r2 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r1 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r2 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r3 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r1 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_10 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r1 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_10);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_12 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r2 
        = (0x3fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_13 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r3 
        = (0x3fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_13);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r2 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_15 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r3 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_15);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_16 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_16);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_17 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_bits_REG 
        = (0x3fffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_17);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_18 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_0 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_18;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_19 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_1 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_19;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_20 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_2 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_20;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_21 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_3 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_21;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_22 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_4 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_22;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_23 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_5 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_23;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_24 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_6 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_24;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_25 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_7 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_25;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_26 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_8 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_26;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_27 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_9 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_27;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_28 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_10 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_28;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_29 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_11 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_29;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_30 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_12 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_30;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_31 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_13 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_31;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_32 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_14 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_32;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_33 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_15 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_33;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_34 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___RAND_34);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_v 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_b 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_bits 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_v 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_b 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_bits 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_valid_1 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_bits_1 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT___RAND_5);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr 
        = (0xffU & vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___RAND_0);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___RAND_1;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state 
        = (7U & vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rdata 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_3;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_4;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_1 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_5;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_6;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_3 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_7;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_4 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_8;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_5 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_9;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_10 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_6 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_10;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_7 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_11;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_12 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_8 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_12;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_13 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_9 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___RAND_13;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_acc_i 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_inp_i 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_wgt_i 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight 
        = (0xfU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_1 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_0 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_1 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_10 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_1 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_10);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_12 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_empty_0 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_13 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_1 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_13);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_0 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_15 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_end 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_15);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_16 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_begin 
        = (0x1fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_16);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_17 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_17);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_18 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_next 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_18);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_19 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_prev 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_19);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_20 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_next 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_20);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_21 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_prev 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_21);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_22 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_op 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_22);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_23 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_uop_valid 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_23);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_24 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_24);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_25 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_bits_REG 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_25);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_26 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___RAND_26);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__stutter 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_i 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_i 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_o 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_o 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___RAND_8);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_0;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_addr 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_1;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_id 
        = (0xffU & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_2);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate 
        = (1U & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_3);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_len 
        = (0xffU & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_4);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_addr 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_5;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate 
        = (3U & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_6);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_7;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__io_dpi_req_aw_valid_REG 
        = (1U & vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[0U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[1U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[2U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[3U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[4U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[5U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[6U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[7U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[8U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[9U] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[0xaU] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[0xbU] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[0xcU] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[0xdU] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[0xeU] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[0xfU] 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[0U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[1U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[2U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[3U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[4U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[5U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[6U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[7U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[8U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[9U] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[0xaU] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[0xbU] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[0xcU] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[0xdU] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[0xeU] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[0xfU] 
        = (0x1fffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_addr_pipe_0 
        = (0xfU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_addr_pipe_0 
        = (0xfU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_8 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_bits_data_REG 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_8;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_10 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_data_REG 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_10;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_last_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_11);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_12 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_2_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_12);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_13 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_2_data_bits_data_REG 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_13;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_3_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_14);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_15 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_3_data_bits_data_REG 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_15;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_16 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_4_data_valid_REG 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_16);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_17 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_4_data_bits_data_REG 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_17;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_18 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_18);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_19 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_addr 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_19;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_20 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate 
        = (3U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_20);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_21 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___RAND_21);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_0 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running 
        = (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_1 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_i 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_3 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_i 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_4 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_i 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_o 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_o 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_o 
        = (0x3ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx 
        = (0x3fffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_0;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_3 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x800U, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar)) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1[(0x7ffU 
                                                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar)] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_3;
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar 
            = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__initvar);
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_2 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0_MPORT_1_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_5 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1_MPORT_1_addr_pipe_0 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_6 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_6;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_7 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_nxt 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_7;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_8 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_9 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_10 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_10);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_11 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_12 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_13 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_13);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_14 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_14;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_15 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state 
        = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_15);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_16 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_16);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_17 
        = VL_RANDOM_I(32);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_nxt 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___RAND_17);
}

void VTest::_settle__TOP__6(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_settle__TOP__6\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp470[3];
    WData/*95:0*/ __Vtemp472[3];
    // Body
    vlTOPp->sim_wait = vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__wait_reg;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_0 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_1 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_2 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_3 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_4 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_5 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_6 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_7 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_8 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_9 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_10 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_11 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15 
        = ((0xffe00000U & ((- (IData)((1U & ((VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rB)))) 
                                              + VL_EXTENDS_II(21,20, 
                                                              (0xfffffU 
                                                               & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rA) 
                                                                  + 
                                                                  VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rB))))) 
                                             >> 0x14U)))) 
                           << 0x15U)) | (0x1fffffU 
                                         & (VL_EXTENDS_II(21,20, 
                                                          (0xfffffU 
                                                           & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rA) 
                                                              + 
                                                              VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_0__DOT__rB)))) 
                                            + VL_EXTENDS_II(21,20, 
                                                            (0xfffffU 
                                                             & (VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rA) 
                                                                + 
                                                                VL_EXTENDS_II(20,19, vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15.__PVT__a_2_1__DOT__rB)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___rdDataDestColNext_T_3 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT___io_acc_y_data_valid_T 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__valid) 
            << 0xfU) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__valid) 
                         << 0xeU) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__valid) 
                                      << 0xdU) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__valid) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__valid) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__valid) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__valid) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__valid) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__valid) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__valid) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__valid) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__valid) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__valid) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__valid) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__valid) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__valid))))))))))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_3 
        = (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext) 
                     - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___rdDataDestIdxNext_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___rdDataDestColNext_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT___cnt_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT___cnt_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___cnt_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___cnt_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestIdx_T_1 
        = (0xffffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                        + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___value_T_3 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len_io_deq_bits_MPORT_data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len
        [vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value];
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr
        [vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value];
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id
        [vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value];
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___value_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___value_T_3 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value][0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value][1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value][2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value][3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___value_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_b) 
             == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_b)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_v));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap_1 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[0U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][0U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[0U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[1U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][1U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[1U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[2U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][2U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[3U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][3U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[3U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___value_T_3 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value][0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value][1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value][2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram
        [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value][3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___value_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap_1 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[0U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][0U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[0U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[1U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][1U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[1U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[2U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][2U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
        = ((3U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___RAND_1[3U]
            : ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value][3U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vxrand1[3U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
        = (((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rdata_r))
             ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0
            [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0_rdataVec_MPORT_addr_pipe_0]
             : 0U) | ((2U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rdata_r))
                       ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1
                      [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1_rdataVec_MPORT_1_addr_pipe_0]
                       : 0U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___clInFlight_T_7 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight) 
                     - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___raddr_T_1 
        = ((IData)(0x800U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__raddr);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_enq_valid 
        = ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vme_select 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)
            ? 0U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)
                     ? 1U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)
                              ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)
                                       ? 3U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)
                                                ? 4U
                                                : 5U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_3 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0_MPORT_2_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0_MPORT_2_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1_MPORT_3_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1_MPORT_3_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext)) 
                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext) 
                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                       != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___blocksInFlight_T_7 
        = (0xfffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight) 
                     - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataReadyPipe));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                        >> 0x18U) - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7 
        = (0xffffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                        + (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                       << 0x10U) | 
                                      (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
                                       >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_2 
        = ((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                           >> 0x18U))) & (0U != (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                    >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd 
        = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
              == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                           >> 0x18U) - (IData)(1U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                               >> 0x10U)) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                               >> 0x18U)) + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
                                                >> 0x10U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___dramLineIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmd1stPluseOffsetTensNb 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx))
            ? (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
                     >> 2U)) : 0U);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0_MPORT_32_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0_MPORT_32_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1_MPORT_33_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1_MPORT_33_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2_MPORT_34_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2_MPORT_34_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3_MPORT_35_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3_MPORT_35_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4_MPORT_36_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4_MPORT_36_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5_MPORT_37_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5_MPORT_37_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6_MPORT_38_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6_MPORT_38_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7_MPORT_39_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7_MPORT_39_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8_MPORT_40_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8_MPORT_40_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9_MPORT_41_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9_MPORT_41_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10_MPORT_42_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10_MPORT_42_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11_MPORT_43_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11_MPORT_43_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12_MPORT_44_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12_MPORT_44_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13_MPORT_45_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13_MPORT_45_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14_MPORT_46_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14_MPORT_46_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15_MPORT_47_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15_MPORT_47_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16_MPORT_48_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16_MPORT_48_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17_MPORT_49_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17_MPORT_49_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18_MPORT_50_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18_MPORT_50_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19_MPORT_51_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19_MPORT_51_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20_MPORT_52_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20_MPORT_52_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21_MPORT_53_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21_MPORT_53_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22_MPORT_54_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22_MPORT_54_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23_MPORT_55_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23_MPORT_55_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24_MPORT_56_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24_MPORT_56_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25_MPORT_57_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25_MPORT_57_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26_MPORT_58_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26_MPORT_58_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27_MPORT_59_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27_MPORT_59_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28_MPORT_60_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28_MPORT_60_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29_MPORT_61_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29_MPORT_61_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30_MPORT_62_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30_MPORT_62_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31_MPORT_63_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31_MPORT_63_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___blocksInFlight_T_7 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight) 
                      - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext)) 
                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext) 
                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                       != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataReadyPipe));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                        >> 0x18U) - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7 
        = (0xffffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                        + (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                       << 0x10U) | 
                                      (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
                                       >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_2 
        = ((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                           >> 0x18U))) & (0U != (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                    >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd 
        = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
              == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                           >> 0x18U) - (IData)(1U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                               >> 0x10U)) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                               >> 0x18U)) + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
                                                >> 0x10U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__rvalid) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid_REG));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__rvalid) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid_REG));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext)) 
                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext) 
                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                       != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___blocksInFlight_T_7 
        = (0x3fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight) 
                      - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataReadyPipe));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0_MPORT_8_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[1U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0_MPORT_8_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[2U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1_MPORT_9_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[3U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1_MPORT_9_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[4U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2_MPORT_10_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[5U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2_MPORT_10_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[6U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3_MPORT_11_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[7U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3_MPORT_11_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[8U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4_MPORT_12_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[9U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4_MPORT_12_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xaU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5_MPORT_13_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xbU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5_MPORT_13_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xcU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6_MPORT_14_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xdU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6_MPORT_14_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xeU] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7
                  [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7_MPORT_15_addr_pipe_0]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xfU] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7
                   [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7_MPORT_15_addr_pipe_0] 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                        >> 0x18U) - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7 
        = (0xffffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                        + (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                       << 0x10U) | 
                                      (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
                                       >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_2 
        = ((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                           >> 0x18U))) & (0U != (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                    >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd 
        = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
              == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                           >> 0x18U) - (IData)(1U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                               >> 0x10U)) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                               >> 0x18U)) + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
                                                >> 0x10U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___cycle_cnt_T_1 
        = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__cycle_cnt);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___acc_wr_count_T_1 
        = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__acc_wr_count);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_bits_idx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_bits_idx_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_b)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_b)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__bypass_dst 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4) 
              == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r3)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__bypass_src 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r3) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4) 
              == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T 
        = (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T_5 
        = (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___inflight_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___GEN_7 
        = (0xfU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight) 
                       - (IData)(1U)) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate)
            ? 0U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___GEN_7 
        = ((1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___GEN_9 
        = ((3U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
            ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate))
                ? 4U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
            : ((4U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
                ? ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate))
                    ? 5U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
                : ((5U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
                    ? ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate))
                        ? 0U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
                    : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))));
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___GEN_2 
        = ((5U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate));
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6 
        = ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate)) 
           & (4U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__pulse 
        = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__s1_launch))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_valid_REG)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_valid_REG));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_REG)
                      ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_bits_REG)
                      : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_bits_REG));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[0U] 
        = (IData)((((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_empty_0)) 
                    << 0x3fU) | (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_1)) 
                                  << 0x31U) | (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_0)) 
                                                << 0x23U) 
                                               | (((QData)((IData)(
                                                                   (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_end) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_begin) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_next) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_prev) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_next) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_prev))))))))) 
                                                   << 3U) 
                                                  | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_op)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_empty_0)) 
                     << 0x3fU) | (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_1)) 
                                   << 0x31U) | (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_0)) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_end) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_begin) 
                                                                         << 5U) 
                                                                        | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset) 
                                                                            << 4U) 
                                                                           | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_next) 
                                                                               << 3U) 
                                                                              | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_prev) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_next) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_prev))))))))) 
                                                    << 3U) 
                                                   | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_op)))))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[2U] 
        = (IData)((((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_1)) 
                    << 0x36U) | (((QData)((IData)((
                                                   ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_0) 
                                                    << 0x16U) 
                                                   | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_1) 
                                                       << 0xbU) 
                                                      | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_0))))) 
                                  << 0x16U) | (QData)((IData)(
                                                              (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_1) 
                                                                << 0xbU) 
                                                               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_0)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_1)) 
                     << 0x36U) | (((QData)((IData)(
                                                   (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_0) 
                                                     << 0x16U) 
                                                    | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_1) 
                                                        << 0xbU) 
                                                       | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_0))))) 
                                   << 0x16U) | (QData)((IData)(
                                                               (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_1) 
                                                                 << 0xbU) 
                                                                | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_0)))))) 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T 
        = (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___inflight_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___GEN_27 
        = (0xfU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight) 
                       - (IData)(1U)) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___cnt_i_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___uop_idx_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___T_4 
        = (1U & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___counter_T_1 
        = ((IData)(1U) + vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___ar_len_T_1 
        = (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len 
           - VL_ULL(1));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi_io_axi_r_bits_last 
        = ((VL_ULL(0) == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[0U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__lsb);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[1U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__lsb 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[2U] 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_bits_data_REG);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[3U] 
        = (IData)((vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_bits_data_REG 
                   >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___wr_cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_22 
        = ((3U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))
            ? ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))
                ? 0U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))
            : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___GEN_54 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))
            ? ((3U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))
                ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate));
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_data_ready 
        = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate)) 
           & (2U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate)) 
           & (3U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag
        [vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_addr_pipe_0];
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___availableEntriesNext_T 
        = (((IData)(vlTOPp->reset) ? 0U : (((0xfU == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                            << 0xfU) 
                                           | (((0xeU 
                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                               << 0xeU) 
                                              | (((0xdU 
                                                   == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                  << 0xdU) 
                                                 | (((0xcU 
                                                      == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                     << 0xcU) 
                                                    | (((0xbU 
                                                         == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                        << 0xbU) 
                                                       | (((0xaU 
                                                            == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                           << 0xaU) 
                                                          | (((9U 
                                                               == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                              << 9U) 
                                                             | (((8U 
                                                                  == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                 << 8U) 
                                                                | (((7U 
                                                                     == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                    << 7U) 
                                                                   | (((6U 
                                                                        == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                       << 6U) 
                                                                      | (((5U 
                                                                           == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                          << 5U) 
                                                                         | (((4U 
                                                                              == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                             << 4U) 
                                                                            | (((3U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                                << 3U) 
                                                                               | (((2U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id)))))))))))))))))) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_1 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 1U) & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_2 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 2U) & (~ (IData)((0U != (3U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_3 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 3U) & (~ (IData)((0U != (7U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_4 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 4U) & (~ (IData)((0U != (0xfU 
                                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_5 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 5U) & (~ (IData)((0U != (0x1fU 
                                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_6 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 6U) & (~ (IData)((0U != (0x3fU 
                                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_7 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 7U) & (~ (IData)((0U != (0x7fU 
                                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_8 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 8U) & (~ (IData)((0U != (0xffU 
                                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_9 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 9U) & (~ (IData)((0U != (0x1ffU 
                                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_10 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 0xaU) & (~ (IData)((0U != (0x3ffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_11 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 0xbU) & (~ (IData)((0U != (0x7ffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_12 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 0xcU) & (~ (IData)((0U != (0xfffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_13 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 0xdU) & (~ (IData)((0U != (0x1fffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_14 
        = (1U & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                  >> 0xeU) & (~ (IData)((0U != (0x3fffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id
        [vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_addr_pipe_0];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___cnt_i_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___cnt_o_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___uop_idx_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_39 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___set_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_13 
        = (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___tag_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Fwr_value[0U] 
        = ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag))
            ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1_MPORT_1_addr_pipe_0]
                : VL_ULL(0)) : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))
                                 ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0
                                [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0_MPORT_1_addr_pipe_0]
                                 : VL_ULL(0)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___xcnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___ycnt_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_39 
        = (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T_32 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate)) 
           & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___GEN_52 
        = ((((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
             & (2U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt) 
               == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len)))
            ? 3U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate));
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_mem_w_valid 
        = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate)) 
           & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__maybe_full));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__dec_io_isStore 
        = ((0U == (1U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
           & (0U != (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr 
        = ((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_8)) 
           | (VL_ULL(0xffffffff) & ((QData)((IData)(
                                                    ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                      << 6U) 
                                                     | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                        >> 0x1aU)))) 
                                    << 4U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___raddr_cur_T_3 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_nxt) 
                      + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                       >> 0x10U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_19 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
           == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                          - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_nxt 
           + (0xffff0U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          << 4U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__empty 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_val_inst 
        = ((0U == (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
           | ((0U == (0x80U ^ (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
              | ((0U == (0x100U ^ (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                 | ((0U == (0x180U ^ (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                    | ((0U == (1U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                       | ((0U == (2U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                          | ((0U == (3U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                             | ((0U == ((4U ^ (7U & 
                                               vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                        | (0x7000U 
                                           & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))) 
                                | ((0U == ((4U ^ (7U 
                                                  & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                           | (0x1000U 
                                              ^ (0x7000U 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])))) 
                                   | ((0U == ((4U ^ 
                                               (7U 
                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                              | (0x2000U 
                                                 ^ 
                                                 (0x7000U 
                                                  & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])))) 
                                      | (0U == ((4U 
                                                 ^ 
                                                 (7U 
                                                  & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                                | (0x3000U 
                                                   ^ 
                                                   (0x7000U 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))))))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_op_type 
        = ((0U == (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))
            ? 2U : ((0U == (0x80U ^ (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
                     ? 0U : ((0U == (0x100U ^ (0x387U 
                                               & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
                              ? 0U : ((0U == (0x180U 
                                              ^ (0x387U 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
                                       ? 2U : ((0U 
                                                == 
                                                (1U 
                                                 ^ 
                                                 (7U 
                                                  & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
                                                ? 1U
                                                : (
                                                   (0U 
                                                    == 
                                                    (2U 
                                                     ^ 
                                                     (7U 
                                                      & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
                                                    ? 2U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      ^ 
                                                      (7U 
                                                       & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
                                                     ? 2U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((4U 
                                                        ^ 
                                                        (7U 
                                                         & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                                       | (0x7000U 
                                                          & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])))
                                                      ? 2U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       ((4U 
                                                         ^ 
                                                         (7U 
                                                          & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                                        | (0x1000U 
                                                           ^ 
                                                           (0x7000U 
                                                            & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))
                                                       ? 2U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        ((4U 
                                                          ^ 
                                                          (7U 
                                                           & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                                         | (0x2000U 
                                                            ^ 
                                                            (0x7000U 
                                                             & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))
                                                        ? 2U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         ((4U 
                                                           ^ 
                                                           (7U 
                                                            & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                                                          | (0x3000U 
                                                             ^ 
                                                             (0x7000U 
                                                              & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))
                                                         ? 2U
                                                         : 5U)))))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
           + (0xffff0U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          << 4U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
           + (0xffff00U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                           << 8U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__dec_io_isWeight 
        = ((0U == (0x80U ^ (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
           & (0U != (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__dec_io_isInput 
        = ((0U == (0x100U ^ (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
           & (0U != (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained 
        = (0x1ffffU & ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     << 0x11U) | (0x1fffeU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                     >> 0xfU)))) 
                       - vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained 
        = (0x1fffffU & ((0x1fffe0U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       << 0x15U) | 
                                      (0x1fffe0U & 
                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                        >> 0xbU)))) 
                        - vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
             >= (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         >> 0x10U))) & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                                        < (0xffffU 
                                           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              + (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    >> 0x10U)))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
             >= (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         >> 0x10U))) & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                                        < (0xffffU 
                                           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              + (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    >> 0x10U)))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr 
        = ((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_5)) 
           | (VL_ULL(0xffffffff) & ((QData)((IData)(
                                                    ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                      << 6U) 
                                                     | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                        >> 0x1aU)))) 
                                    << 4U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr 
        = ((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_6)) 
           | (VL_ULL(0xffffffff) & ((QData)((IData)(
                                                    ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                      << 6U) 
                                                     | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                        >> 0x1aU)))) 
                                    << 8U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__empty 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0 
        = ((0x80000000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
            ? (0xffff0000U | (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                         >> 0x10U)))
            : (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          >> 0x10U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__xferElemInitAddr 
        = (vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_4 
           | (0xfffffffcU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 8U) | (0xfcU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                 >> 0x18U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextLineBeginElemAddr 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
           + (0x3fffcU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          << 2U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                        >> 0x18U) - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7 
        = (0xffffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                        + (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       << 0x10U) | 
                                      (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                       >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___acc_i_T_1 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_i) 
                     + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         << 0x15U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      >> 0xbU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___inp_i_T_1 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_i) 
                     + (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                        >> 1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___wgt_i_T_1 
        = (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_i) 
                     + (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                        >> 0x16U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_tmp 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_o) 
                     + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_tmp 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_o) 
                     + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         << 0xaU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     >> 0x16U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_tmp 
        = (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_o) 
                     + (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                        >> 0xcU)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___dst_i_T_1 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_i) 
                     + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         << 0x15U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      >> 0xbU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___src_i_T_1 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_i) 
                     + (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                        >> 1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_7 
        = (0x3fffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
                       != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                        << 0x1dU) | 
                                       (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                        >> 3U)) - (IData)(1U))))
                       ? ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o))
                       : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_10 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
            != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             << 0x1dU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                          >> 3U)) - (IData)(1U))))
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_bits 
        = (0x7ffU & ((0U == (2U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
                      ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx)
                      : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_tmp 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_o) 
                     + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_tmp 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_o) 
                     + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         << 0xaU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     >> 0x16U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_2 
        = ((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                           >> 0x18U))) & (0U != (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr 
        = ((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_7)) 
           | (VL_ULL(0xffffffff) & ((QData)((IData)(
                                                    ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                      << 6U) 
                                                     | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                        >> 0x1aU)))) 
                                    << 6U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
           + (0x3fffc0U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                           << 6U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd 
        = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
              == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                           >> 0x18U) - (IData)(1U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                               >> 0x10U)) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U]));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isAlu 
        = ((((0U == ((4U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                     | (0x7000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))) 
             | (0U == ((4U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                       | (0x1000U ^ (0x7000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))) 
            | (0U == ((4U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                      | (0x2000U ^ (0x7000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))) 
           | (0U == ((4U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
                     | (0x3000U ^ (0x7000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained 
        = (0x7ffffU & ((0x7fff8U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     << 0x13U) | (0x7fff8U 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                     >> 0xdU)))) 
                       - vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__start 
        = (((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
            & ((~ (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                   >> 4U)) | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt)))) 
           & ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
              & ((~ (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                     >> 3U)) | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadAcc 
        = ((0U == (0x180U ^ (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
           & (0U != (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadUop 
        = ((0U == (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])) 
           & (0U != (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdStartIdxValid_T_5 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
             >= (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         >> 0x10U))) & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
                                        < (0xffffU 
                                           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              + (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    >> 0x10U)))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance 
        = (1U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                  >> 0xfU) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__stutter)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1 
        = (0xffffU & ((0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                               >> 0x18U)) + ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0x10U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
             >= (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         >> 0x10U))) & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                                        < (0xffffU 
                                           & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              + (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    >> 0x10U)))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineClNb_T_1 
        = (0x3ffffU & ((0x3fffcU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     << 0x12U) | (0x3fffcU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                     >> 0xeU)))) 
                       + (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode 
        = (((3U == (7U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          >> 0xcU))) & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                        >> 0x1fU)) ? 4U
            : (7U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                     >> 0xcU)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) 
           & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
               == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                            >> 0x15U)) 
                              - (IData)(1U)))) & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                                                   == 
                                                   (0x3fffU 
                                                    & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                         << 0xfU) 
                                                        | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                           >> 0x11U)) 
                                                       - (IData)(1U)))) 
                                                  & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                                                     == 
                                                     (0x3fffU 
                                                      & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                           << 0x1dU) 
                                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                             >> 3U)) 
                                                         - (IData)(1U)))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_offset 
        = ((0x1ff800U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
                         >> 0xbU)) | (0x7ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
                                                >> 0xbU)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_inp_rd_0_idx_bits 
        = (0x7ffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
                      >> 0xbU) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_inp_i)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits 
        = (0x3ffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
                      >> 0x16U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_wgt_i)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid 
        = (1U & ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match) 
                     & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full)))) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match))
             ? 0x80U : 0U) | (0x7fU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value) 
                                       - (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid 
        = (1U & ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match) 
                     & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full)))) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match))
             ? 0x200U : 0U) | (0x1ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value) 
                                         - (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData_io_col 
        = (1U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5)
                  ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag
                  : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___GEN_12 
        = (0xfffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe)
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5)
                            ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                               >> 1U) : (0xffffU & 
                                         ((1U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5)
                                                  ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag
                                                  : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)))
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext))
                                           : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid 
        = (((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4 
        = (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                            >> 0x18U))) & (0U == (0xfU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                     >> 0x1cU))))
            ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                     ? 3U : (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                              >> 0x18U))) 
                              & (0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                >> 0x1cU))))
                              ? 4U : ((0U != (0xfU 
                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                 >> 0x14U)))
                                       ? 5U : 0U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1) 
                      + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                 >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col 
        = (0x1fU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5)
                     ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag
                     : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid 
        = (((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4 
        = (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                            >> 0x18U))) & (0U == (0xfU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                     >> 0x1cU))))
            ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                     ? 3U : (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                              >> 0x18U))) 
                              & (0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                >> 0x1cU))))
                              ? 4U : ((0U != (0xfU 
                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                 >> 0x14U)))
                                       ? 5U : 0U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1) 
                      + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                 >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_valid_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v) 
               & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid) 
                  & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG))))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col 
        = (7U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5)
                  ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag
                  : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___GEN_12 
        = (0x3ffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe)
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5)
                            ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                               >> 3U) : (0xffffU & 
                                         ((7U == (7U 
                                                  & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5)
                                                      ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag
                                                      : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext))))
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext))
                                           : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid 
        = (((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_0
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_1
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[1U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_2 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_2
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[2U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_3
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[3U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_4 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_4
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[4U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_5 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_5
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[5U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_6 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_6
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[6U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_7 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_7
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[7U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_8 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_8
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[8U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_9 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_9
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[9U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_10 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_10
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xaU]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_11 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_11
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xbU]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_12 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_12
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xcU]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_13 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_13
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xdU]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_14 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_14
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xeU]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_15 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_15
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xfU]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4 
        = (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                            >> 0x18U))) & (0U == (0xfU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                     >> 0x1cU))))
            ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                     ? 3U : (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                              >> 0x18U))) 
                              & (0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                >> 0x1cU))))
                              ? 4U : ((0U != (0xfU 
                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                 >> 0x14U)))
                                       ? 5U : 0U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1) 
                      + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                 >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_42 
        = (VL_ULL(0x1ffffffff) & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                   ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__pulse)
                                       ? ((VL_ULL(0x100) 
                                           > (VL_ULL(0x1ffffffff) 
                                              & (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2)) 
                                                  << 1U) 
                                                 - VL_ULL(1))))
                                           ? VL_ULL(0)
                                           : ((((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2)) 
                                                << 1U) 
                                               - VL_ULL(1)) 
                                              - VL_ULL(0x100)))
                                       : (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)))
                                   : (QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                       ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                         ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                          ? 
                                                         ((0U 
                                                           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))
                                                           ? 
                                                          ((0U 
                                                            == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                                                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem
                                                            : 
                                                           ((0x100U 
                                                             > vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                                                             ? 0U
                                                             : 
                                                            (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem 
                                                             - (IData)(0x100U))))
                                                           : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                                                          : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_40 
        = (VL_ULL(0x1ffffffff) & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                   ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__pulse)
                                       ? ((VL_ULL(0x100) 
                                           > (VL_ULL(0x1ffffffff) 
                                              & (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2)) 
                                                  << 1U) 
                                                 - VL_ULL(1))))
                                           ? (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2)) 
                                               << 1U) 
                                              - VL_ULL(1))
                                           : VL_ULL(0xff))
                                       : (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen)))
                                   : (QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                       ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                         ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen)
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                                          ? 
                                                         ((0U 
                                                           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))
                                                           ? 
                                                          ((0U 
                                                            == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                                                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen)
                                                            : 
                                                           ((0x100U 
                                                             > vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                                                             ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem
                                                             : 0xffU))
                                                           : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen))
                                                          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen)))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_41 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__pulse)
                ? ((VL_ULL(0x100) > (VL_ULL(0x1ffffffff) 
                                     & (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2)) 
                                         << 1U) - VL_ULL(1))))
                    ? (QData)((IData)((VL_ULL(0xffffffff) 
                                       & ((((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2)) 
                                            << 1U) 
                                           - VL_ULL(1)) 
                                          >> 1U))))
                    : VL_ULL(0x7f)) : (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen)))
            : (QData)((IData)(((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen)
                                : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                    ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen)
                                    : ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen)
                                        : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                                            ? ((0U 
                                                == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))
                                                ? (
                                                   (0U 
                                                    == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                                                    ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen)
                                                    : 
                                                   ((0x100U 
                                                     > vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                                                     ? 
                                                    (0x7fffffffU 
                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem 
                                                        >> 1U))
                                                     : 0x7fU))
                                                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen))
                                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi_io_axi_r_bits_last) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_data_ready) 
           & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_8 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_data_ready)
            ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt) 
                == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))
                ? 4U : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag))
                         ? 3U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_31 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? 2U : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                     ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)
                         ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                             ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
                                 == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                - (IData)(1U))))
                                 ? 0U : 1U) : 1U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                     : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wrMaskLast 
        = (((1U < (3U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data)) 
            << 1U) | (0U < (3U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___wrMask1st_T_6 
        = (((1U < (3U & ((IData)(2U) - (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
                                        >> 2U)))) << 1U) 
           | (0U < (3U & ((IData)(2U) - (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
                                         >> 2U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___T_5 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext)) 
                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext) 
                    & (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
                       != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__newEntry 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
           & (~ ((0x8000U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries) 
                             & ((~ (IData)((0U != (0x7fffU 
                                                   & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))))) 
                                << 0xfU))) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_14) 
                                               << 0xeU) 
                                              | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_13) 
                                                  << 0xdU) 
                                                 | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_12) 
                                                     << 0xcU) 
                                                    | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_11) 
                                                        << 0xbU) 
                                                       | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_10) 
                                                           << 0xaU) 
                                                          | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_9) 
                                                              << 9U) 
                                                             | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_8) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_7) 
                                                                    << 7U) 
                                                                   | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_6) 
                                                                       << 6U) 
                                                                      | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_5) 
                                                                          << 5U) 
                                                                         | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_4) 
                                                                             << 4U) 
                                                                            | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_3) 
                                                                                << 3U) 
                                                                               | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_1) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries)))))))))))))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___bitPostn_T_13 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_1)
            ? 1U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_2)
                     ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_3)
                              ? 3U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_4)
                                       ? 4U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_5)
                                                ? 5U
                                                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_6)
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_7)
                                                     ? 7U
                                                     : 
                                                    ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_8)
                                                      ? 8U
                                                      : 
                                                     ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_9)
                                                       ? 9U
                                                       : 
                                                      ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_10)
                                                        ? 0xaU
                                                        : 
                                                       ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_11)
                                                         ? 0xbU
                                                         : 
                                                        ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_12)
                                                          ? 0xcU
                                                          : 
                                                         ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_13)
                                                           ? 0xdU
                                                           : 
                                                          ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__oneHotIdx_14)
                                                            ? 0xeU
                                                            : 0xfU))))))))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_0_data_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_valid_REG) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data))) 
           & (0x80U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_valid_REG) 
           & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_20 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_mem_w_valid) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt) 
               == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len)))
            ? 3U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_2 
        = ((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)) 
             & (VL_ULL(0) != vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len_io_deq_bits_MPORT_data)) 
            & (0x10U == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter)) 
           | (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready 
        = (((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)) 
            & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate))) 
           & (0x10U == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__dec_io_isStore)
            ? 2U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_28 
        = ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)
                ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                    ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
                        == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                       - (IData)(1U))))
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes
                        : (0xfffU & ((IData)(0x800U) 
                                     - (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr))))
                    : (0xfffU & ((IData)(0x800U) - 
                                 (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr))))
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes)
            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_34 
        = (0x1ffffU & ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                        : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)
                                ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                                    ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
                                        == (0xffffU 
                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                               - (IData)(1U))))
                                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                                        : (((0x1fffeU 
                                             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x11U) 
                                                | (0x1fffeU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xfU)))) 
                                            < (0x1ffU 
                                               & (((IData)(0x800U) 
                                                   - 
                                                   (0x7ffU 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                  >> 3U)))
                                            ? 0U : 
                                           ((0x1fffeU 
                                             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x11U) 
                                                | (0x1fffeU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xfU)))) 
                                            - (0x1ffU 
                                               & (((IData)(0x800U) 
                                                   - 
                                                   (0x7ffU 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                  >> 3U)))))
                                    : (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                        < (0x1ffU & 
                                           (((IData)(0x800U) 
                                             - (0x7ffU 
                                                & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                            >> 3U)))
                                        ? 0U : (0xffffU 
                                                & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                                   - 
                                                   (0x1ffU 
                                                    & (((IData)(0x800U) 
                                                        - 
                                                        (0x7ffU 
                                                         & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                                       >> 3U))))))
                                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_33 
        = (0x1ffffU & ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                        : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)
                                ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                                    ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
                                        == (0xffffU 
                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                               - (IData)(1U))))
                                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                                        : (((0x1fffeU 
                                             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x11U) 
                                                | (0x1fffeU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xfU)))) 
                                            < (0x1ffU 
                                               & (((IData)(0x800U) 
                                                   - 
                                                   (0x7ffU 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                  >> 3U)))
                                            ? ((0x1fffeU 
                                                & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    << 0x11U) 
                                                   | (0x1fffeU 
                                                      & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                         >> 0xfU)))) 
                                               - (IData)(1U))
                                            : (0x1ffU 
                                               & ((0x1ffU 
                                                   & (((IData)(0x800U) 
                                                       - 
                                                       (0x7ffU 
                                                        & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                                      >> 3U)) 
                                                  - (IData)(1U)))))
                                    : (0xffffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                                   < 
                                                   (0x1ffU 
                                                    & (((IData)(0x800U) 
                                                        - 
                                                        (0x7ffU 
                                                         & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                                       >> 3U)))
                                                   ? 
                                                  ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                                                   - (IData)(1U))
                                                   : 
                                                  (0x1ffU 
                                                   & ((0x1ffU 
                                                       & (((IData)(0x800U) 
                                                           - 
                                                           (0x7ffU 
                                                            & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                                          >> 3U)) 
                                                      - (IData)(1U))))))
                                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__start 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__empty)) 
                 & ((~ (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                        >> 3U)) | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isLoad 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_val_inst) 
           & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_op_type)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isStore 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_val_inst) 
           & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_op_type)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isCompute 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_val_inst) 
           & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_op_type)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT___GEN_0 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__dec_io_isInput) 
            | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__dec_io_isWeight))
            ? 2U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__done 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__dec_io_isInput)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__loadDone) 
               & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))
            : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__loadDone) 
               & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow)
            ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained 
                < (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                : (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) : ((0x100U > vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained)
                                          ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                                          : 0x100U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow)
            ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained 
                < (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                : (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) : ((0x100U > vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained)
                                          ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                                          : 0x100U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__start 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__empty)) 
                 & ((~ (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                        >> 4U)) | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_8 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
            != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             << 0x1dU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                          >> 3U)) - (IData)(1U))))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_tmp)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_o));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_11 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
            != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             << 0x1dU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                          >> 3U)) - (IData)(1U))))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_tmp)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_i));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_9 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
            != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             << 0x1dU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                          >> 3U)) - (IData)(1U))))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_tmp)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_o));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_12 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
            != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             << 0x1dU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                          >> 3U)) - (IData)(1U))))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_tmp)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_i));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4 
        = (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x18U))) & (0U == (0xfU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                     >> 0x1cU))))
            ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                     ? 3U : (((0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              >> 0x18U))) 
                              & (0U != (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                >> 0x1cU))))
                              ? 4U : ((0U != (0xfU 
                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 >> 0x14U)))
                                       ? 5U : 0U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow)
            ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained 
                < (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                : (0x1ffU & (((IData)(0x800U) - (0x7ffU 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)) 
                             >> 3U))) : ((0x100U > vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained)
                                          ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksRemained
                                          : 0x100U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__start));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__start)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadUop));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type 
        = (((IData)((0U == (3U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))) 
            << 4U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isAlu) 
                       << 3U) | (((IData)((0U == (2U 
                                                  ^ 
                                                  (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))) 
                                  << 2U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadAcc) 
                                             << 1U) 
                                            | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadUop)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdxValid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_3 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
            & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance))) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
                  & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__stutter)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_src_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_last 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) 
              & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                  == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                   << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                               >> 0x15U)) 
                                 - (IData)(1U)))) & 
                 (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                   == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                    << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                >> 0x11U)) 
                                  - (IData)(1U)))) 
                  & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o) 
                     == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1) 
                      + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 >> 0x1cU))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdStartIdxValid_T_5) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb 
        = (0x7fffU & ((0U == (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineClNb_T_1))
                       ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineClNb_T_1 
                          >> 3U) : ((IData)(1U) + (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineClNb_T_1 
                                                   >> 3U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
            ? VL_SHIFTRS_III(32,32,5, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA, 
                             (0x1fU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB))
            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
                   + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                    ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA)
                    : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA, vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA
                            : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB)
                        : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___GEN_1 
        = (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG)) 
           | ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last)) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__wdataTensInstr_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
            ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_data);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__waddrTensInstrTmp 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
                      ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                         + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                      : (0xfffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5)
                                      ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                                         >> 1U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                      + ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                         - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_40 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                           - (IData)(1U)))) & (((((
                                                   (4U 
                                                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                                                   | (3U 
                                                      == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                                                     == 
                                                     (0xffffU 
                                                      & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                                                         - (IData)(1U))))) 
                                                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
                                                & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                                               | (5U 
                                                  == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                          - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
            ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_data);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp 
        = (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
                      ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                         + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                      : (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5)
                                     ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                                        >> 5U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                      + ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                         - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_40 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                           - (IData)(1U)))) & (((((
                                                   (4U 
                                                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                                                   | (3U 
                                                      == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                                                     == 
                                                     (0xffffU 
                                                      & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                                                         - (IData)(1U))))) 
                                                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
                                                & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                                               | (5U 
                                                  == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                          - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
            ? VL_ULL(0) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_data);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
                      ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                         + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                      : (0x3ffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5)
                                      ? (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                                         >> 3U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_0 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_1 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_1 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_2 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_2 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_3 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_4 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_4 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_4);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_5 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_5 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_6 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_6 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_7 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_7 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_8 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_8 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_9 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_9 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_10 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_10 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_10);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_11 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_11 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_12 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_12 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_13 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_13 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_14 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_14 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_15 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_15 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                      + ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                         - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_40 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                           - (IData)(1U)))) & (((((
                                                   (4U 
                                                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                                                   | (3U 
                                                      == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                                                     == 
                                                     (0xffffU 
                                                      & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                                                         - (IData)(1U))))) 
                                                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
                                                & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                                               | (5U 
                                                  == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                          - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready 
        = ((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
             & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vme_select))) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready 
        = ((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
             & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vme_select))) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready 
        = ((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
             & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vme_select))) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready 
        = ((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
             & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vme_select))) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready 
        = ((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
             & (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vme_select))) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_19));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt) 
                == (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))))) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
              != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             - (IData)(1U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wrMask1st 
        = ((2U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___wrMask1st_T_6) 
                  << 1U)) | (1U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___wrMask1st_T_6) 
                                   >> 1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4 
        = (0x1ffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___T_5)
                        ? (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
                           >> 4U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__rdDataElemDestIdxNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__firstPostn 
        = ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___bitPostn_T_13));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_8 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_0_data_valid)
            ? 3U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_27 
        = ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_0_data_valid)
                ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext) 
                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen))
                    ? 4U : 2U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
            : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))
                    ? ((0U == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem)
                        ? 0U : 1U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_0_data_valid) 
           & (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid 
        = (((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__isFirstPulse 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___T_5));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready) 
           & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s_io_swait 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
            >> 3U) & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__start)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__start)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__dec_io_isStore));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_ld_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isLoad) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_st_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isStore) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isCompute) 
            << 2U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isStore) 
                       << 1U) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isLoad)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_co_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isCompute) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__done)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_deq 
        = ((((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__done)) 
            | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__empty)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___blocksInFlight_T_1 
        = (0xfffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight) 
                     + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdDestBlockIdxNext_T_3 
        = (0xfffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext) 
                     + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
        = (0x1ffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
                       + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___blocksInFlight_T_1 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight) 
                      + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdDestBlockIdxNext_T_3 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext) 
                      + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
        = (0x1fffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
                        + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead 
        = ((0U == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead 
        = ((0U == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s_io_swait 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
            >> 4U) & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__start)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__start)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__dec_io_isInput));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__start)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__dec_io_isWeight));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___blocksInFlight_T_1 
        = (0x3fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight) 
                      + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdDestBlockIdxNext_T_3 
        = (0x3fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext) 
                      + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
        = (0x7ffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
                       + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0_io_swait 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
            >> 3U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1_io_swait 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
            >> 4U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isLoadAcc));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___GEN_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__loadDone) 
                  & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___GEN_0 
        = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
            ? 2U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__startIssueCmdRead 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdxValid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T_7 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_valid 
        = ((0U == (2U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)
            : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_src_valid)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_5 
        = (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG)) 
           | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
               & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance)))
               ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running)
               : (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) 
                   & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance))
                   ? ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_last)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running))
                   : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done 
        = ((0x10U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type)) 
           | ((8U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
               ? ((~ ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG))) 
                  & ((~ ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_last))) 
                     & ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                        & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight)))))
               : ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
                   ? ((~ ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) 
                      & ((~ ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last))) 
                         & ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight)))))
                   : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type))
                       ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__loadDone) 
                          & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))
                       : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_type)) 
                          & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__loadDone) 
                             & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                      + ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                         - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_40 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                           - (IData)(1U)))) & (((((
                                                   (4U 
                                                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                                                   | (3U 
                                                      == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
                                                     == 
                                                     (0xffffU 
                                                      & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                                                         - (IData)(1U))))) 
                                                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
                                                & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) 
                                               | (5U 
                                                  == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
           == (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_3) 
                          - (IData)(1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead 
        = ((0U == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb) 
                      - (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9 
        = (VL_ULL(0x7fffffffffffffff) & ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_opcode))
                                          ? ((((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA))) 
                                             << (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB))))
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_7)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0_io_rd_en 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0_io_rd_en 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow 
        = ((((((((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                 | (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                | (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
               | (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3)) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
            & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
           | (5U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_23 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe)) 
             & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                            >> 0x10U) - (IData)(1U))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_53 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe)) 
             & (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xffffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                          >> 0x14U))) 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow 
        = ((((((((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                 | (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                | (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
               | (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3)) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
            & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
           | (5U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_23 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe)) 
             & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                            >> 0x10U) - (IData)(1U))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_53 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe)) 
             & (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xffffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                          >> 0x14U))) 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow 
        = ((((((((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                 | (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                | (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
               | (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3)) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
            & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
           | (5U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_23 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)) 
             & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                            >> 0x10U) - (IData)(1U))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_53 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)) 
             & (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xffffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                          >> 0x14U))) 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___any_cmd_ready_T_3 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready)) 
            | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready)) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_enq_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready)
             ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)
             : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready)
                 ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)
                 : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready)
                     ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)
                     : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready)
                         ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)
                         : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready) 
                            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)))))) 
           & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_deq 
        = ((((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)) 
            | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__empty)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_79 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr
            : (QData)((IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
                                & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)))
                                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_nxt
                                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_nxt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_68 
        = (0xffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                       ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                        >> 0xaU)) : 
                      ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42) 
                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))) 
                        & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag)))
                        ? (0x7ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur)))
                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___raddr_cur_T_3)
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_69 
        = (0xffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                       ? ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                        >> 0xaU)) : 
                      ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42) 
                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))) 
                        & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag)))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_nxt)
                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___raddr_cur_T_3)
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_nxt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_78 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr
            : (QData)((IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
                                & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)))
                                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr
                                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid 
        = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T 
        = ((0x80U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcOffset_0_T 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__isFirstPulse)
            ? (3U & (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
                     >> 2U)) : 0U);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wmask 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)
            ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__isFirstPulse) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_last_REG))
                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wrMask1st) 
                   & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wrMaskLast))
                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__isFirstPulse)
                    ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wrMask1st)
                    : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_last_REG)
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wrMaskLast)
                        : 3U))) : 0U);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_45 
        = (0x1ffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start)
                            ? (((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x11U) 
                                             | (0x1fffeU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                   >> 0xfU)))) 
                                < (0x1ffU & (((IData)(0x800U) 
                                              - (0x7ffU 
                                                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                             >> 3U)))
                                ? ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                 << 0x11U) 
                                                | (0x1fffeU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xfU)))) 
                                   - (IData)(1U)) : 
                               (0x1ffU & ((0x1ffU & 
                                           (((IData)(0x800U) 
                                             - (0x7ffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                            >> 3U)) 
                                          - (IData)(1U))))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))
                        : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_33))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_46 
        = (0x1ffffU & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start)
                            ? (((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x11U) 
                                             | (0x1fffeU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                   >> 0xfU)))) 
                                < (0x1ffU & (((IData)(0x800U) 
                                              - (0x7ffU 
                                                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                             >> 3U)))
                                ? 0U : ((0x1fffeU & 
                                         ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                           << 0x11U) 
                                          | (0x1fffeU 
                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0xfU)))) 
                                        - (0x1ffU & 
                                           (((IData)(0x800U) 
                                             - (0x7ffU 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                            >> 3U))))
                            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))
                        : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                            : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_34))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_ld_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_st_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_deq_ready 
        = ((((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel))
              ? (0x200U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))
              : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel))
                  ? (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__full))
                  : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel)) 
                     & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__full))))) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T 
        = ((0x200U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_co_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid 
        = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_co_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead)
                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                   << 1U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
             == (0x1ffffU & ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                           << 0x11U) 
                                          | (0x1fffeU 
                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0xfU)))) 
                             - (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)))) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
               != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead)
                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                   << 5U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
             == (0x1fffffU & ((0x1fffe0U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                             << 0x15U) 
                                            | (0x1fffe0U 
                                               & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                  >> 0xbU)))) 
                              - (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)))) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
               != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___GEN_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__loadDone) 
                  & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___GEN_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__loadDone) 
                  & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___GEN_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) 
           | ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__loadDone) 
                  & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rMask 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_valid)
            ? (3U & ((IData)(1U) << (1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_bits))))
            : 0U);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___inst_q_io_deq_ready_T_3 
        = (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)) 
           | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_finish 
        = (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)) 
           & (0U == (3U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready 
        = (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__done)) 
           | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow 
        = ((((((((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                 | (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                | (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
               | (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3)) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNarwLineEnd)) 
            & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) 
           | (5U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_23 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)) 
             & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xfU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x10U) - (IData)(1U))))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53 
        = ((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)) 
             & (6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
               == (0xffffU & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpLastDataRow_T_1) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x14U))) 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpWideLineEnd_T_3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead)
                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                   << 3U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride 
        = (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
             == (0x7ffffU & ((0x7fff8U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                           << 0x13U) 
                                          | (0x7fff8U 
                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0xdU)))) 
                             - (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)))) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
               != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx))
            ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained) 
                < (0x1ffU & (((IData)(0x800U) - (0x7f8U 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr)) 
                             >> 3U))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained)
                : (0x1ffU & (((IData)(0x800U) - (0x7f8U 
                                                 & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr)) 
                             >> 3U))) : ((0x100U > (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained))
                                          ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clRemained)
                                          : 0x100U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_0)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[1U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_1)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[2U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_2)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[3U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_3)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[4U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_4)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[5U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_5)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[6U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_6)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[7U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_7)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[8U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_8)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[9U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_9)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xaU] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_10)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xbU] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_11)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xcU] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_12)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xdU] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_13)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xeU] 
        = (IData)((((QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                                      ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                                          ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_15)
                                      : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9)))) 
                    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                                                  ? 
                                                 ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                                                   ? 0U
                                                   : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_14)
                                                  : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xfU] 
        = (IData)(((((QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                                       ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                                           ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_15)
                                       : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9)))) 
                     << 0x20U) | (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
                                                   ? 
                                                  ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
                                                    ? 0U
                                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_14)
                                                   : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9))))) 
                   >> 0x20U));
    __Vtemp470[1U] = (IData)((((QData)((IData)(((0xff000000U 
                                                 & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_15 
                                                     + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15) 
                                                    << 0x18U)) 
                                                | ((0xff0000U 
                                                    & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_14 
                                                        + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_13 
                                                           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_12 
                                                            + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((0xff000000U 
                                                             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_11 
                                                                 + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_11) 
                                                                << 0x18U)) 
                                                            | ((0xff0000U 
                                                                & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_10 
                                                                    + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_10) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_9 
                                                                       + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_9) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_8 
                                                                        + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_8)))))))));
    __Vtemp470[2U] = (IData)(((((QData)((IData)(((0xff000000U 
                                                  & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_15 
                                                      + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_15) 
                                                     << 0x18U)) 
                                                 | ((0xff0000U 
                                                     & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_14 
                                                         + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_14) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_13 
                                                            + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_13) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_12 
                                                             + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_12))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xff000000U 
                                                              & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_11 
                                                                  + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_11) 
                                                                 << 0x18U)) 
                                                             | ((0xff0000U 
                                                                 & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_10 
                                                                     + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_10) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_9 
                                                                        + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_9) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_8 
                                                                         + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_8)))))))) 
                              >> 0x20U));
    __Vtemp472[1U] = (IData)((((QData)((IData)(((0xff000000U 
                                                 & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9) 
                                                    << 0x18U)) 
                                                | ((0xff0000U 
                                                    & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((0xff000000U 
                                                             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9) 
                                                                << 0x18U)) 
                                                            | ((0xff0000U 
                                                                & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9)))))))));
    __Vtemp472[2U] = (IData)(((((QData)((IData)(((0xff000000U 
                                                  & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__alu__DOT___io_y_T_9) 
                                                     << 0x18U)) 
                                                 | ((0xff0000U 
                                                     & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__alu__DOT___io_y_T_9) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__alu__DOT___io_y_T_9) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__alu__DOT___io_y_T_9))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xff000000U 
                                                              & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__alu__DOT___io_y_T_9) 
                                                                 << 0x18U)) 
                                                             | ((0xff0000U 
                                                                 & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__alu__DOT___io_y_T_9) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__alu__DOT___io_y_T_9) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__alu__DOT___io_y_T_9)))))))) 
                              >> 0x20U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[0U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xff000000U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_3 
                                + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_3) 
                               << 0x18U)) | ((0xff0000U 
                                              & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_2 
                                                  + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_2) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_1 
                                                     + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_1) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp 
                                                      + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_0)))))
            : ((0xff000000U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__alu__DOT___io_y_T_9) 
                               << 0x18U)) | ((0xff0000U 
                                              & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__alu__DOT___io_y_T_9) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__alu__DOT___io_y_T_9) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__alu__DOT___io_y_T_9))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[1U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? ((0xff000000U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_7 
                                + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_7) 
                               << 0x18U)) | ((0xff0000U 
                                              & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_6 
                                                  + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_6) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_5 
                                                     + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_5) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__byp_4 
                                                      + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT___GEN_4)))))
            : ((0xff000000U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__alu__DOT___io_y_T_9) 
                               << 0x18U)) | ((0xff0000U 
                                              & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__alu__DOT___io_y_T_9) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__alu__DOT___io_y_T_9) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__alu__DOT___io_y_T_9))))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[2U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? __Vtemp470[1U] : __Vtemp472[1U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[3U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? __Vtemp470[2U] : __Vtemp472[2U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_start_REG)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_23) 
              | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_40) 
                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_53))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_start_REG)
            ? ((((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                 >> 0x18U))) & (0U 
                                                != 
                                                (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                    >> 0x1cU)))) 
                & (0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                  >> 0x10U)))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                              ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                              : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                        ? ((0U != (0xfU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                      >> 0x14U)))
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_start_REG)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_23) 
              | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_40) 
                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_53))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_start_REG)
            ? ((((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                 >> 0x18U))) & (0U 
                                                != 
                                                (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                    >> 0x1cU)))) 
                & (0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                  >> 0x10U)))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                              ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                              : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                        ? ((0U != (0xfU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                      >> 0x14U)))
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_start_REG)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_23) 
              | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_40) 
                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_53))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_start_REG)
            ? ((((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                 >> 0x18U))) & (0U 
                                                != 
                                                (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                    >> 0x1cU)))) 
                & (0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                  >> 0x10U)))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                              ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                              : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                        ? ((0U != (0xfU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                      >> 0x14U)))
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx))));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full) 
              | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_0_T_1 
        = (3U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcOffset_0_T) 
                 - (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_1_T_1 
        = (3U & (((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcOffset_0_T)) 
                 - (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___rdDataElemDestIdxNext_T_2 
        = (3U & ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wmask)) 
                 + (1U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wmask) 
                          >> 1U))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_deq_ready) 
           & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_deq_ready) 
           & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full) 
              | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_21 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_14 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start)
                       ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                            << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                         >> 0xaU)) 
                          + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     >> 0x18U))) : 
                      (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
                        & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                            < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       >> 0x10U))) 
                           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                           + ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x18U))) 
                              + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                         >> 0x1cU))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_6 
        = ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
               ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
                    == (0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     << 0x11U) | (0x1fffeU 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                     >> 0xfU))))) 
                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
                      == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     - (IData)(1U))))) 
                  | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone))
               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_23 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_22 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
                                       + (0xff8U & 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                                           << 3U))))
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_21 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_14 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start)
                       ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                            << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                         >> 0xaU)) 
                          + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     >> 0x18U))) : 
                      (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
                        & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                            < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       >> 0x10U))) 
                           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                           + ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x18U))) 
                              + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                         >> 0x1cU))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_6 
        = ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
               ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
                    == (0x1fffe0U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                      << 0x15U) | (0x1fffe0U 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                      >> 0xbU))))) 
                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
                      == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     - (IData)(1U))))) 
                  | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone))
               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_23 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_22 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
                                       + (0xff8U & 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                                           << 3U))))
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready) 
           & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready) 
           & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_23) 
              | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_40) 
                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)
            ? ((((0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 >> 0x18U))) & (0U 
                                                != 
                                                (0xfU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                    >> 0x1cU)))) 
                & (0U == (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                  >> 0x10U)))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_2)
                              ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                              : 0U) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                        ? ((0U != (0xfU 
                                                   & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                      >> 0x14U)))
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx)
                                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_53)
                                            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_21 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_14 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)
                       ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                            << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                         >> 0xaU)) 
                          + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     >> 0x18U))) : 
                      (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
                        & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                            < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       >> 0x10U))) 
                           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx) 
                           + ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x18U))) 
                              + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                         >> 0x1cU))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_23 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin)
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_6 
        = ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
               ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb 
                    == (0x7fff8U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     << 0x13U) | (0x7fff8U 
                                                  & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                     >> 0xdU))))) 
                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx) 
                      == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     - (IData)(1U))))) 
                  | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone))
               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_22 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__xfer_init_addr
            : (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14)
                                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__memRow
                                    : (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
                                       + (0xff8U & 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                                           << 3U))))
                                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___clInFlight_T_1 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight) 
                     + (0x1ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineAddr_T_2 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr 
           + (0xff8U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18) 
                        << 3U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdTransactionTensNb 
        = (0x3ffU & ((0x3feU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18) 
                                << 1U)) - (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmd1stPluseOffsetTensNb)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextClIdx 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx) 
                      + (0x1ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___T_28 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb) 
                      - (0x1ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_9 
        = (0x1ffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___T_5)
                            ? ((vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
                                >> 4U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___rdDataElemDestIdxNext_T_2))
                            : (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__rdDataElemDestIdxNext) 
                                         + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___rdDataElemDestIdxNext_T_2))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__rdDataElemDestIdxNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdDestElemIdxNext_T_3 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdDestElemIdxNext) 
                     + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdTransactionTensNb)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx) 
             == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___T_28)) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx) 
               != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                              - (IData)(1U))))) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_22 
        = (0xffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)
                       ? (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                            << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                         >> 0xaU)) 
                          + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                     >> 0x18U))) : 
                      (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
                        & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
                            < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                       >> 0x10U))) 
                           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride)))
                        ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx) 
                           + ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)) 
                               + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          >> 0x18U))) 
                              + (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                         >> 0x1cU))))
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_11 
        = ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState)
               ? ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextClIdx) 
                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb)) 
                   & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx) 
                      == (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                     - (IData)(1U))))) 
                  | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone))
               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)));
}
