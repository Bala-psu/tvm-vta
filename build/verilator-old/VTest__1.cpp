// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "VTest.h"
#include "VTest__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTest::_sequent__TOP__4(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_sequent__TOP__4\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp276[3];
    WData/*95:0*/ __Vtemp278[3];
    // Body
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
    __Vtemp276[1U] = (IData)((((QData)((IData)(((0xff000000U 
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
    __Vtemp276[2U] = (IData)(((((QData)((IData)(((0xff000000U 
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
    __Vtemp278[1U] = (IData)((((QData)((IData)(((0xff000000U 
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
    __Vtemp278[2U] = (IData)(((((QData)((IData)(((0xff000000U 
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
            ? __Vtemp276[1U] : __Vtemp278[1U]);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[3U] 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG)
            ? __Vtemp276[2U] : __Vtemp278[2U]);
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
}

VL_INLINE_OPT void VTest::_sequent__TOP__5(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_sequent__TOP__5\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_wait;
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_exit;
    // Body
    if (VL_UNLIKELY((1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fexit)))) {
        VL_FINISH_MT("/home/balas/tvm-vta/build/chisel/VTASimDPI.v", 74, "");
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Freset))) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fwait = 0U;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fexit = 0U;
    } else {
        vlTOPp->__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI_TOP(__Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_wait, __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_exit);
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fwait 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_wait;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fexit 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI__0__sim_exit;
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__wait_reg 
        = ((~ ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Freset))) 
           & (1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Fwait)));
    vlTOPp->sim_wait = vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__wait_reg;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT_____05Freset 
        = vlTOPp->reset;
}

VL_INLINE_OPT void VTest::_combo__TOP__7(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_combo__TOP__7\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VTest::_eval(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_eval\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__17(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1__18(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2__19(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3__20(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4__21(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5__22(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6__23(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7__24(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8__25(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9__26(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10__27(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11__28(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12__29(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13__30(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14__31(vlSymsp);
        vlSymsp->TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15._sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15__32(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->sim_clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__sim_clock)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__sim_clock = vlTOPp->sim_clock;
}

VL_INLINE_OPT QData VTest::_change_request(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_change_request\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTest::_change_request_1(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_change_request_1\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((sim_clock & 0xfeU))) {
        Verilated::overWidthError("sim_clock");}
}
#endif  // VL_DEBUG
