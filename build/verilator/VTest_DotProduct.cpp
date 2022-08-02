// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "VTest_DotProduct.h"
#include "VTest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__17(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_0__17\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[3U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1__18(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_1__18\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[4U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[5U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[6U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[7U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2__19(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_2__19\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[8U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[9U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xaU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xbU] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3__20(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_3__20\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xcU] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xdU] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xeU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0xfU] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4__21(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_4__21\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x10U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x11U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x12U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x13U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5__22(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_5__22\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x14U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x15U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x16U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x17U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6__23(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_6__23\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x18U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x19U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1aU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1bU] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7__24(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_7__24\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1cU] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1dU] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1eU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x1fU] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8__25(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_8__25\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x20U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x21U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x22U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x23U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9__26(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_9__26\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x24U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x25U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x26U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x27U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10__27(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_10__27\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x28U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x29U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2aU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2bU] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11__28(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_11__28\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2cU] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2dU] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2eU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x2fU] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12__29(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_12__29\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x30U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x31U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x32U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x33U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13__30(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_13__30\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x34U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x35U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x36U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x37U] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14__31(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_14__31\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x38U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x39U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3aU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU]);
    this->__PVT__m_13__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU] 
                                            << 0x18U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU] 
                                              >> 8U)));
    this->__PVT__m_14__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU] 
                                              >> 0x10U)));
    this->__PVT__m_15__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3bU] 
                                              >> 0x18U)));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}

VL_INLINE_OPT void VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15__32(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTest_DotProduct::_sequent__TOP__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__dot_0_15__32\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__m_0__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U]);
    this->__PVT__m_1__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[0U] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U]);
    this->__PVT__m_5__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[1U] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U]);
    this->__PVT__m_9__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rA = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[2U] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rA = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U]);
    this->__PVT__m_13__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rA = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_24[3U] 
                                           >> 0x18U));
    this->__PVT__m_0__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU]);
    this->__PVT__m_1__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU] 
                                             >> 8U)));
    this->__PVT__m_2__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU] 
                                             >> 0x10U)));
    this->__PVT__m_3__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3cU] 
                                           >> 0x18U)));
    this->__PVT__m_4__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU]);
    this->__PVT__m_5__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU] 
                                             >> 8U)));
    this->__PVT__m_6__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU] 
                                           << 0x10U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU] 
                                             >> 0x10U)));
    this->__PVT__m_7__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU] 
                                           << 8U) | 
                                          (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3dU] 
                                           >> 0x18U)));
    this->__PVT__m_8__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU]);
    this->__PVT__m_9__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU] 
                                           << 0x18U) 
                                          | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU] 
                                             >> 8U)));
    this->__PVT__m_10__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU] 
                                            << 0x10U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU] 
                                              >> 0x10U)));
    this->__PVT__m_11__DOT__rB = (0xffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU] 
                                            << 8U) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3eU] 
                                              >> 0x18U)));
    this->__PVT__m_12__DOT__rB = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU]);
    this->__PVT__m_13__DOT__rB = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU] 
                                           >> 8U));
    this->__PVT__m_14__DOT__rB = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU] 
                                           >> 0x10U));
    this->__PVT__m_15__DOT__rB = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_84[0x3fU] 
                                           >> 0x18U));
    this->__PVT__a_2_0__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_4__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_4__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_5__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_5__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_6__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_6__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_7__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_7__DOT__mult))))))));
    this->__PVT__a_2_0__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_0__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_0__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_1__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_1__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_2__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_2__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_3__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_3__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rB = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_12__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_12__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_13__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_13__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_14__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_14__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_15__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_15__DOT__mult))))))));
    this->__PVT__a_2_1__DOT__rA = (0x7ffffU & (VL_EXTENDS_II(19,18, 
                                                             (0x3ffffU 
                                                              & (VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_8__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_8__DOT__mult))) 
                                                                 + 
                                                                 VL_EXTENDS_II(18,17, 
                                                                               ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_9__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_9__DOT__mult)))))) 
                                               + VL_EXTENDS_II(19,18, 
                                                               (0x3ffffU 
                                                                & (VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_10__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_10__DOT__mult))) 
                                                                   + 
                                                                   VL_EXTENDS_II(18,17, 
                                                                                ((0x10000U 
                                                                                & ((IData)(this->__PVT__m_11__DOT__mult) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__m_11__DOT__mult))))))));
    this->__PVT__m_0__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_0__DOT__rB)))));
    this->__PVT__m_1__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_1__DOT__rB)))));
    this->__PVT__m_2__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_2__DOT__rB)))));
    this->__PVT__m_3__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_3__DOT__rB)))));
    this->__PVT__m_4__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_4__DOT__rB)))));
    this->__PVT__m_5__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_5__DOT__rB)))));
    this->__PVT__m_6__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_6__DOT__rB)))));
    this->__PVT__m_7__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_7__DOT__rB)))));
    this->__PVT__m_8__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_8__DOT__rB)))));
    this->__PVT__m_9__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rA))), 
                                                         (0xffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_9__DOT__rB)))));
    this->__PVT__m_10__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_10__DOT__rB)))));
    this->__PVT__m_11__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_11__DOT__rB)))));
    this->__PVT__m_12__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_12__DOT__rB)))));
    this->__PVT__m_13__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_13__DOT__rB)))));
    this->__PVT__m_14__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_14__DOT__rB)))));
    this->__PVT__m_15__DOT__mult = (0xffffU & VL_MULS_III(16,16,16, 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rA))), 
                                                          (0xffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(this->__PVT__m_15__DOT__rB)))));
}
