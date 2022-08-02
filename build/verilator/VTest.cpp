// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "VTest.h"
#include "VTest__Syms.h"

#include "verilated_dpi.h"

//==========

void VTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTest::eval\n"); );
    VTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/balas/tvm-vta/build/chisel/Test.DefaultAcxConfig.sv", 24556, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTest::_eval_initial_loop(VTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/balas/tvm-vta/build/chisel/Test.DefaultAcxConfig.sv", 24556, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTest::__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI_TOP(CData/*7:0*/(&  sim_wait), CData/*7:0*/(&  sim_exit)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_sim__DOT__sim__DOT__VTASimDPI_TOP\n"); );
    // Body
    unsigned char sim_wait__Vcvt;
    unsigned char sim_exit__Vcvt;
    VTASimDPI(&sim_wait__Vcvt, &sim_exit__Vcvt);
    sim_wait = (0xffU & sim_wait__Vcvt);
    sim_exit = (0xffU & sim_exit__Vcvt);
}

VL_INLINE_OPT void VTest::__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI_TOP(CData/*7:0*/(&  req_valid), CData/*7:0*/(&  req_opcode), CData/*7:0*/(&  req_addr), IData/*31:0*/(&  req_value), const CData/*7:0*/ req_deq, const CData/*7:0*/ resp_valid, const IData/*31:0*/ resp_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI_TOP\n"); );
    // Body
    unsigned char req_valid__Vcvt;
    unsigned char req_opcode__Vcvt;
    unsigned char req_addr__Vcvt;
    unsigned int req_value__Vcvt;
    unsigned char req_deq__Vcvt;
    req_deq__Vcvt = req_deq;
    unsigned char resp_valid__Vcvt;
    resp_valid__Vcvt = resp_valid;
    unsigned int resp_value__Vcvt;
    resp_value__Vcvt = resp_value;
    VTAHostDPI(&req_valid__Vcvt, &req_opcode__Vcvt, &req_addr__Vcvt, &req_value__Vcvt, req_deq__Vcvt, resp_valid__Vcvt, resp_value__Vcvt);
    req_valid = (0xffU & req_valid__Vcvt);
    req_opcode = (0xffU & req_opcode__Vcvt);
    req_addr = (0xffU & req_addr__Vcvt);
    req_value = req_value__Vcvt;
}

VL_INLINE_OPT void VTest::__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2_TOP(const CData/*7:0*/ rd_req_valid, const CData/*7:0*/ rd_req_len, const CData/*7:0*/ rd_req_id, const QData/*63:0*/ rd_req_addr, const CData/*7:0*/ wr_req_valid, const CData/*7:0*/ wr_req_len, const QData/*63:0*/ wr_req_addr, const CData/*7:0*/ wr_valid, const QData/*63:0*/(&  wr_value)[1], const QData/*63:0*/ wr_strb, CData/*7:0*/(&  rd_valid), CData/*7:0*/(&  rd_id), QData/*63:0*/(&  rd_value)[1], const CData/*7:0*/ rd_ready) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2_TOP\n"); );
    // Body
    unsigned char rd_req_valid__Vcvt;
    rd_req_valid__Vcvt = rd_req_valid;
    unsigned char rd_req_len__Vcvt;
    rd_req_len__Vcvt = rd_req_len;
    unsigned char rd_req_id__Vcvt;
    rd_req_id__Vcvt = rd_req_id;
    unsigned long long rd_req_addr__Vcvt;
    rd_req_addr__Vcvt = rd_req_addr;
    unsigned char wr_req_valid__Vcvt;
    wr_req_valid__Vcvt = wr_req_valid;
    unsigned char wr_req_len__Vcvt;
    wr_req_len__Vcvt = wr_req_len;
    unsigned long long wr_req_addr__Vcvt;
    wr_req_addr__Vcvt = wr_req_addr;
    unsigned char wr_valid__Vcvt;
    wr_valid__Vcvt = wr_valid;
    static const VerilatedVarProps wr_value__Vopenprops(VLVT_UINT64, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 0, 0);
    VerilatedDpiOpenVar wr_value__Vopenarray (&wr_value__Vopenprops, &wr_value);
    unsigned long long wr_strb__Vcvt;
    wr_strb__Vcvt = wr_strb;
    unsigned char rd_valid__Vcvt;
    unsigned char rd_id__Vcvt;
    static const VerilatedVarProps rd_value__Vopenprops(VLVT_UINT64, VLVD_OUT|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 0, 0);
    VerilatedDpiOpenVar rd_value__Vopenarray (&rd_value__Vopenprops, &rd_value);
    unsigned char rd_ready__Vcvt;
    rd_ready__Vcvt = rd_ready;
    VTAMemDPI(rd_req_valid__Vcvt, rd_req_len__Vcvt, rd_req_id__Vcvt, rd_req_addr__Vcvt, wr_req_valid__Vcvt, wr_req_len__Vcvt, wr_req_addr__Vcvt, wr_valid__Vcvt, &wr_value__Vopenarray, wr_strb__Vcvt, &rd_valid__Vcvt, &rd_id__Vcvt, &rd_value__Vopenarray, rd_ready__Vcvt);
    rd_valid = (0xffU & rd_valid__Vcvt);
    rd_id = (0xffU & rd_id__Vcvt);
}

VL_INLINE_OPT void VTest::_sequent__TOP__2(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_sequent__TOP__2\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_valid;
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_opcode;
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_addr;
    CData/*7:0*/ __Vdlyvdim0__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0;
    CData/*7:0*/ __Vdlyvval__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0;
    CData/*1:0*/ __Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0;
    CData/*7:0*/ __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt;
    CData/*7:0*/ __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt;
    CData/*1:0*/ __Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0;
    CData/*0:0*/ __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0;
    SData/*10:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0;
    SData/*10:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0;
    SData/*9:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0;
    SData/*9:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0;
    SData/*9:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0;
    SData/*9:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0;
    SData/*10:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0;
    SData/*10:0*/ __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0;
    IData/*31:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_value;
    IData/*31:0*/ __Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0;
    QData/*63:0*/ __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0;
    // Body
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0 = 0U;
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__rstate 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__wstate 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate;
    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state;
    __Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0 = 0U;
    __Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead)) 
                                 | (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- Cannot have deq with first read as queue output is not valid yet\n    at SyncQueue.scala:406 assert(!firstRead || !do_deq, \"-F- Cannot have deq with first read as queue output is not valid yet\")\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead)) 
                                 | (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- Cannot have deq with first read as queue output is not valid yet\n    at SyncQueue.scala:406 assert(!firstRead || !do_deq, \"-F- Cannot have deq with first read as queue output is not valid yet\")\n");
    }
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_tag__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 
        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len__v0 = 0U;
    __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)) 
                                 | (0U < (3U & vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- Expecting some elements to read\n    at TensorLoadWideVME.scala:367 assert(!io.vmeData.valid || readNb > 0.U,\"-F- Expecting some elements to read\")\n");
    }
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0 = 0U;
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0 = 0U;
    __Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state;
    __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt;
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0 = 0U;
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0 = 0U;
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0 = 0U;
    __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__wstate 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY(((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
                       & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0x80U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:192 assert(countNext < entries.U)\n");
    }
    if (VL_UNLIKELY(((((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1)))) 
                       & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T)) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:195 assert(countNext > 0.U)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (
                                                   (0U 
                                                    != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
                                                        & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:204 assert(io.deq.valid === buffer.io.deq.valid)\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ (((0x80U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
                                  == (1U & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)))) 
                                 | (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:205 assert(io.enq.ready === buffer.io.enq.ready || memoryQueue.io.enq.ready)\n");
    }
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx;
    if (VL_UNLIKELY((((((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
                        & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start)) 
                       & ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                        << 0x11U) | 
                                       (0x1fffeU & 
                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                         >> 0xfU)))) 
                          < (0x1ffU & (((IData)(0x800U) 
                                        - (0x7ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                       >> 3U)))) & 
                      (~ (IData)(vlTOPp->reset))) & 
                     (0U >= (0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          << 0x11U) 
                                         | (0x1fffeU 
                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                               >> 0xfU)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorStoreNarrowVME.scala:101 assert(xsize > 0.U)\n");
    }
    if (VL_UNLIKELY((((((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
                        & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start)) 
                       & ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                        << 0x11U) | 
                                       (0x1fffeU & 
                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                         >> 0xfU)))) 
                          >= (0x1ffU & (((IData)(0x800U) 
                                         - (0x7ffU 
                                            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                        >> 3U)))) & 
                      (~ (IData)(vlTOPp->reset))) & 
                     ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                    << 0x11U) | (0x1fffeU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                    >> 0xfU)))) 
                      < (0x1ffU & (((IData)(0x800U) 
                                    - (0x7ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))) 
                                   >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorStoreNarrowVME.scala:106 assert(xsize >= xfer_init_pulses)\n");
    }
    if (VL_UNLIKELY((((((((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
                              & (1U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                             & (2U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                            & (3U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)) 
                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
                        & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_19))) 
                       & ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                        << 0x11U) | 
                                       (0x1fffeU & 
                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                         >> 0xfU)))) 
                          < (0x1ffU & (((IData)(0x800U) 
                                        - (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                       >> 3U)))) & 
                      (~ (IData)(vlTOPp->reset))) & 
                     (0U >= (0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                          << 0x11U) 
                                         | (0x1fffeU 
                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                               >> 0xfU)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorStoreNarrowVME.scala:137 assert(xsize > 0.U)\n");
    }
    if (VL_UNLIKELY((((((((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
                              & (1U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                             & (2U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                            & (3U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)) 
                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
                        & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_19))) 
                       & ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                        << 0x11U) | 
                                       (0x1fffeU & 
                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                         >> 0xfU)))) 
                          >= (0x1ffU & (((IData)(0x800U) 
                                         - (0x7ffU 
                                            & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                        >> 3U)))) & 
                      (~ (IData)(vlTOPp->reset))) & 
                     ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                    << 0x11U) | (0x1fffeU 
                                                 & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                    >> 0xfU)))) 
                      < (0x1ffU & (((IData)(0x800U) 
                                    - (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr)) 
                                   >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorStoreNarrowVME.scala:142 assert(xsize >= xfer_stride_pulses)\n");
    }
    if (VL_UNLIKELY(((((((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
                             & (1U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                            & (2U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                           & (3U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                          & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)) 
                        & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
                       & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                          < (0x1ffU & (((IData)(0x800U) 
                                        - (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                       >> 3U)))) & 
                      (~ (IData)(vlTOPp->reset))) & 
                     (0U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorStoreNarrowVME.scala:150 assert(xrem > 0.U)\n");
    }
    if (VL_UNLIKELY(((((((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
                             & (1U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                            & (2U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                           & (3U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                          & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) 
                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_ack)) 
                        & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
                       & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                          >= (0x1ffU & (((IData)(0x800U) 
                                         - (0x7ffU 
                                            & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                        >> 3U)))) & 
                      (~ (IData)(vlTOPp->reset))) & 
                     ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem) 
                      < (0x1ffU & (((IData)(0x800U) 
                                    - (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr)) 
                                   >> 3U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorStoreNarrowVME.scala:158 assert(xrem >= xfer_split_pulses)\n");
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freset))) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_valid = 0U;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_opcode = 0U;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_addr = 0U;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_value = 0U;
    } else {
        vlTOPp->__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI_TOP(__Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_valid, __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_opcode, __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_addr, __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_value, 
                                                                                (((1U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)) 
                                                                                & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate))) 
                                                                                | ((3U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)) 
                                                                                & (0U 
                                                                                == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate)))), (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate), vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rdata);
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_valid 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_valid;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_opcode 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_opcode;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_addr 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_addr;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_value 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT__VTAHostDPI__1__req_value;
    }
    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state)) 
                                 | ((0x1fffeU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                  << 0x11U) 
                                                 | (0x1fffeU 
                                                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                       >> 0xfU)))) 
                                    >= vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadNarrowVME.scala:627 assert(!io.isBusy || blocksReadSize >= blocksReadNb)// define how many block to read at this cycle\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid)) 
                                 | ((0xff8U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                                               << 3U)) 
                                    <= (0xfffU & ((IData)(0x800U) 
                                                  - 
                                                  (0x7ffU 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- inp DRAM page alignment failure. DRAM address + len overlaps mp.lenBits*memBlockSize alignment %x %x\n    at TensorLoadNarrowVME.scala:733 assert(!io.vmeCmd.valid || ((readLen << log2Ceil(mp.dataBits/8)) <= (maxTrBytes - rdCmdExtAddr %% maxTrBytes)),\n",
                   32,vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr,
                   9,(0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10));
    }
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)) 
                                 | ((0x1fffe0U & ((
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                   << 0x15U) 
                                                  | (0x1fffe0U 
                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                        >> 0xbU)))) 
                                    >= vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadNarrowVME.scala:627 assert(!io.isBusy || blocksReadSize >= blocksReadNb)// define how many block to read at this cycle\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid)) 
                                 | ((0xff8U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                                               << 3U)) 
                                    <= (0xfffU & ((IData)(0x800U) 
                                                  - 
                                                  (0x7ffU 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- wgt DRAM page alignment failure. DRAM address + len overlaps mp.lenBits*memBlockSize alignment %x %x\n    at TensorLoadNarrowVME.scala:733 assert(!io.vmeCmd.valid || ((readLen << log2Ceil(mp.dataBits/8)) <= (maxTrBytes - rdCmdExtAddr %% maxTrBytes)),\n",
                   32,vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr,
                   9,(0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10));
    }
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((((~ ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
                                       & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)))) 
                                   | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isLoad)) 
                                  | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isCompute)) 
                                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isStore))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- Fetch: Unknown instruction type\n    at FetchVME64.scala:161 assert(!(inst_q.io.deq.valid & state === sDrain) || dec.io.isLoad || dec.io.isCompute || dec.io.isStore,\n");
    }
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__availableEntries 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries;
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (2U 
                                                   < 
                                                   (1U 
                                                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- Expecting the number of tensors to skip in CL\n    at TensorLoadWideVME.scala:563 assert(rd1stPulseOffsetBytes >> log2Ceil(elemBytes) <= tp.clSizeRatio.U,\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (2U 
                                                   < 
                                                   (1U 
                                                    & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
                                                        + 
                                                        (0x3fffcU 
                                                         & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                             << 0x12U) 
                                                            | (0x3fffcU 
                                                               & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                                  >> 0xeU))))) 
                                                       >> 2U)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- Expecting the number of active tensors in CL\n    at TensorLoadWideVME.scala:574 assert(rdLastPulseBytes >> log2Ceil(elemBytes) <= (clBytes/elemBytes).U,\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state)) 
                                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineClNb) 
                                    >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadWideVME.scala:641 assert(!io.isBusy || rdLineClNb >= clReadIdx)// define how many cachelines to read at this cycle\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_vmeCmd_valid)) 
                                 | ((0xff8U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18) 
                                               << 3U)) 
                                    <= (0xfffU & ((IData)(0x800U) 
                                                  - 
                                                  (0x7ffU 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- uop DRAM page alignment failure. DRAM address + len overlaps mp.lenBits*memBlockSize alignment %x %x\n    at TensorLoadWideVME.scala:717 assert(!io.vmeCmd.valid || ((rdLen << log2Ceil(clBytes)) <= maxTrBytes - rdLineAddr %% maxTrBytes),\n",
                   32,vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr,
                   9,(0x1ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18)));
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
                       & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0x200U <= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:192 assert(countNext < entries.U)\n");
    }
    if (VL_UNLIKELY(((((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1)))) 
                       & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T)) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:195 assert(countNext > 0.U)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (
                                                   (0U 
                                                    != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
                                                        & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:204 assert(io.deq.valid === buffer.io.deq.valid)\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ (((0x200U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
                                  == (1U & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)))) 
                                 | (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at SyncQueue.scala:205 assert(io.enq.ready === buffer.io.enq.ready || memoryQueue.io.enq.ready)\n");
    }
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3__v0 = 0U;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6__v0 = 0U;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx;
    if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)) 
                         & (~ (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T)) 
                               & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))))) 
                        & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T_1) 
                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)))) 
                       & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T))) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadWideVME.scala:140 assert(clInFlight > 0.U)\n");
    }
    if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start)) 
                         & (~ (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T)) 
                               & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))))) 
                        & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_1) 
                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe)))) 
                       & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T))) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadNarrowVME.scala:95 assert(blocksInFlight > 0.U)\n");
    }
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)) 
                                 | ((0x7fff8U & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                  << 0x13U) 
                                                 | (0x7fff8U 
                                                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                       >> 0xdU)))) 
                                    >= vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadNarrowVME.scala:627 assert(!io.isBusy || blocksReadSize >= blocksReadNb)// define how many block to read at this cycle\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd_io_vmeCmd_valid)) 
                                 | ((0xff8U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                                               << 3U)) 
                                    <= (0xfffU & ((IData)(0x800U) 
                                                  - 
                                                  (0x7ffU 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr)))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: -F- acc DRAM page alignment failure. DRAM address + len overlaps mp.lenBits*memBlockSize alignment %x %x\n    at TensorLoadNarrowVME.scala:733 assert(!io.vmeCmd.valid || ((readLen << log2Ceil(mp.dataBits/8)) <= (maxTrBytes - rdCmdExtAddr %% maxTrBytes)),\n",
                   32,vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr,
                   9,(0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10));
    }
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset;
    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state;
    vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)) 
                                 | (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid) 
                                       | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_src_valid))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Compute.scala:129 assert(!tensorGemm.io.uop.idx.valid || !tensorAlu.io.uop.idx.valid)\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v) 
                                     & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid) 
                                        & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG))))) 
                                 | (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Compute.scala:203 assert(!tensorGemm.io.out.wr(idx).valid || !tensorAlu.io.out.wr(idx).valid)\n");
    }
    if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start)) 
                         & (~ (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T)) 
                               & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) 
                        & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_1) 
                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe)))) 
                       & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T))) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadNarrowVME.scala:95 assert(blocksInFlight > 0.U)\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((0x80U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
                                 | (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_0_data_valid)))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at VME.scala:300 assert(io.vme.rd(i).data.ready || ~io.vme.rd(i).data.valid)\n");
    }
    if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)) 
                         & (~ (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T)) 
                               & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe))))) 
                        & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_1) 
                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))) 
                       & (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T))) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorLoadNarrowVME.scala:95 assert(blocksInFlight > 0.U)\n");
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx 
        = (0x7ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_14));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx 
        = (0x3ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_14));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdx 
        = (0x7ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_14));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___GEN_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___GEN_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__ilen 
        = (0xffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_41));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__rdDataElemDestIdxNext 
        = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_9);
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_valid) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0 
            = (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[3U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[2U])));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_bits_idx;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_valid) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0 
            = (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0[0U])));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_bits_idx;
    }
    if ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rMask))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0_rdataVec_MPORT_addr_pipe_0 
            = (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_bits) 
                         >> 1U));
    }
    if ((2U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rMask))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1_rdataVec_MPORT_1_addr_pipe_0 
            = (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_bits) 
                         >> 1U));
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rdata_r 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_valid)
            ? (3U & ((IData)(1U) << (1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_bits))))
            : 0U);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_23);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_23);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddrRowBegin 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_23);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_nxt 
        = (0x7ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_69));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__rvalid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___dramLineIdx_T_1;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start)) 
                                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___GEN_0)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start)) 
                                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___GEN_0)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start)) 
                                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___GEN_0)));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx = 0U;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_nxt 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_79);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isAlu));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__rstate = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate) {
            if (vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate) {
                if ((2U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__rstate = 0U;
                }
            }
        } else {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__rstate 
                = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___GEN_7;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__wstate = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate))) {
            if ((3U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__wstate = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate))) {
                if ((4U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__wstate = 2U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__wstate 
                        = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___GEN_2;
                }
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
                = (0xfffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx) 
                             + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
        } else {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdDestBlockIdxNext_T_3;
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
                = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx) 
                              + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
        } else {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdDestBlockIdxNext_T_3;
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdStartIdxValid) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__startIssueCmdRead) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
                = (0x3fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx) 
                              + (0x1ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10)));
        } else {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdxNext 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___rdCmdDestBlockIdxNext_T_3;
            }
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__s1_launch 
        = (1U & ((~ (IData)(vlTOPp->reset)) & vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_21));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_21));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__newReadRow 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_21));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_enq;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataReadyPipe 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataReadyPipe 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataReadyPipe 
        = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)) 
                                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_0)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_last_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi_io_axi_r_bits_last));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_11));
    if (vlTOPp->reset) {
        __Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state))) {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__start) {
                __Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state 
                    = (((0U == (1U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                        & (0U == (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0x10U)))))
                        ? 1U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___GEN_0));
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state))) {
                __Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state = 0U;
            } else {
                if ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state))) {
                    __Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___GEN_3;
                }
            }
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_6));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_6));
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[0U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[1U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[2U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[3U];
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_deq))) {
            vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__maybe_full 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_enq;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_6));
    if (vlTOPp->reset) {
        __Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)) 
             & (0x10U > vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter))) {
            __Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___counter_T_1;
        } else {
            if ((1U & (~ ((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)) 
                          & (0x10U == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter))))) {
                __Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_enq;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0_MPORT_2_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_inp_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1_MPORT_3_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_inp_rd_0_idx_bits;
    }
    if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___xcnt_T_1;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2_MPORT_34_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1_MPORT_33_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13_MPORT_45_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10_MPORT_42_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7_MPORT_39_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4_MPORT_36_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12_MPORT_44_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9_MPORT_41_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6_MPORT_38_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3_MPORT_35_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8_MPORT_40_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5_MPORT_37_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14_MPORT_46_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11_MPORT_43_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15_MPORT_47_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16_MPORT_48_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17_MPORT_49_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18_MPORT_50_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19_MPORT_51_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20_MPORT_52_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21_MPORT_53_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22_MPORT_54_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23_MPORT_55_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0_MPORT_32_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24_MPORT_56_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25_MPORT_57_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26_MPORT_58_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27_MPORT_59_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28_MPORT_60_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29_MPORT_61_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30_MPORT_62_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31_MPORT_63_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_wgt_rd_0_idx_bits;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT__io_deq_v));
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_enq_valid))) {
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_tag__v0 = 1U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___T_5) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
                = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data;
        }
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len__v0 
            = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_18) 
                        - (IData)(1U)));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdDestBlockIdx;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag__v0 = 1U;
    }
    if (((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
         | (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0_MPORT_1_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur;
    }
    if (((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
         | (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1_MPORT_1_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len__v0 
            = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                        - (IData)(1U)));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len__v0 
            = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                        - (IData)(1U)));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len__v0 
            = (0xffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_10 
                        - (IData)(1U)));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len__v0 = 1U;
    }
    if (vlTOPp->reset) {
        __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt = 0U;
    } else {
        if ((((~ ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                   >> 5U) & (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)) 
                             | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state))))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1_io_swait)) 
             & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt)))) {
            __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___cnt_T_3;
        } else {
            if (((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                    >> 5U) & (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
                               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)) 
                              | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)))) 
                  & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1_io_swait))) 
                 & (0xffU != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt)))) {
                __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___cnt_T_1;
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_start_REG) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_deq) {
            vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___value_T_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_deq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___value_T_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__stutter = 0U;
    } else {
        if ((1U & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG))))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__stutter 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_3;
        }
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U];
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr__v0 = 1U;
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData_io_col) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_start_REG) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx = 0U;
        }
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_enq_valid))) {
        __Vdlyvval__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__firstPostn)
                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready)
                    ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__firstPostn)
                    : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready)
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__firstPostn)
                        : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready)
                            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__firstPostn)
                            : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready)
                                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__firstPostn)
                                : 0U)))));
        __Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0 = 1U;
        __Vdlyvdim0__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0 
            = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        __Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state))) {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__start) {
                __Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state 
                    = ((((0U == (0x100U ^ (0x387U & 
                                           vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                         | (0U == (0x80U ^ (0x387U 
                                            & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U])))) 
                        & (0U == (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0x10U)))))
                        ? 1U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT___GEN_0));
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state))) {
                __Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state = 0U;
            } else {
                if ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state))) {
                    __Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT___GEN_3;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt = 0U;
    } else {
        if ((((~ ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                   >> 6U) & (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state)) 
                              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__done)) 
                             | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state))))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0_io_swait)) 
             & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt)))) {
            __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___cnt_T_3;
        } else {
            if (((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                    >> 6U) & (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state)) 
                               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__done)) 
                              | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state)))) 
                  & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0_io_swait))) 
                 & (0xffU != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt)))) {
                __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___cnt_T_1;
            }
        }
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0xfU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0xeU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0xdU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((5U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        __Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0 = 1U;
        __Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((7U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((9U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0xaU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0xbU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0xcU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x10U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x11U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x12U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x13U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x14U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x15U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x16U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x17U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x18U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x19U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x1aU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x1bU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x1cU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x1dU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x1eU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((0x1fU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
            | ((8U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col)) 
               & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__wdataTensInstr_0
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : 0U);
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt = 0U;
        } else {
            if (((2U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate)) 
                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_mem_w_valid))) {
                vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt 
                    = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___wr_cnt_T_1;
            }
        }
    }
    if (((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready)
                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr
               [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr
                       [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready)
                                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr
                               [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready)
                                        ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr
                                       [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready)
                                                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr
                                               [0U]
                                                : 0U)))));
        vlTOPp->__Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr__v0 
            = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len__v0 
            = (QData)((IData)(((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready)
                                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len
                               [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready)
                                        ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len
                                       [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready)
                                                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len
                                               [0U]
                                                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready)
                                                    ? 
                                                   vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len
                                                   [0U]
                                                    : 
                                                   ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready)
                                                     ? 
                                                    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len
                                                    [0U]
                                                     : 0U)))))));
        vlTOPp->__Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len__v0 
            = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value 
                = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap_1)
                    ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_3));
        }
    }
    if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___ycnt_T_1;
        }
    }
    if (((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_13))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___tag_T_1;
        }
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_39) 
         | (((3U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
             & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_13)))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_13))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___set_T_1;
        }
    }
    if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes 
            = (0xfffU & ((IData)(0x800U) - (0x7ffU 
                                            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr))));
    } else {
        if ((1U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
            if ((2U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
                if ((3U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_28;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
                if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state = 2U;
                }
            } else {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state 
                    = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_8)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_31));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__wstate = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__wstate = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
                if ((1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__wstate = 2U;
                }
            } else {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__wstate 
                    = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___GEN_52)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___GEN_54));
            }
        }
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_st_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U];
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_15 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_15);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_14 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_14);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_13 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_13);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_12 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_12);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_11 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_11);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_10 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_10);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_9 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_9);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_8 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_8);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_7 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_7);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_6 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_6);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_1);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_5 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_5);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_2 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_2);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_3);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_0);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__last_acc_write_0_4 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)
            ? 0U : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0__DOT__add_0_4);
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___any_cmd_ready_T_3) 
         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready)
                ? 0U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready)
                         ? 1U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready)
                                  ? 2U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready)
                                           ? 3U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready)
                                                    ? 4U
                                                    : 0U)))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id__v0 
            = ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))
                ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___bitPostn_T_13));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___any_cmd_ready_T_3) 
         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_deq_ready)
                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_tag
               [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_deq_ready)
                        ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag
                       [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2_io_deq_ready)
                                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag
                               [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3_io_deq_ready)
                                        ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag
                                       [0U] : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4_io_deq_ready)
                                                ? vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag
                                               [0U]
                                                : 0U)))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag__v0 
            = ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))
                ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___bitPostn_T_13));
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7_MPORT_15_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4_MPORT_12_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1_MPORT_9_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6_MPORT_14_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3_MPORT_11_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2_MPORT_10_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0_MPORT_8_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5_MPORT_13_addr_pipe_0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1)));
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_start_REG) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
                = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
                               << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
                                            >> 0xaU)));
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                 < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x10U))) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & ((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                          & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock))) 
                         & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)))
                         ? (((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3))
                             ? ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7)
                             : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11)
                         : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)
                             ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock)
                                 ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24
                                 : ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))
                                     ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                                     : 0U)) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24)));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                 < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x10U))) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1)));
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_start_REG) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
                = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
                               << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
                                            >> 0xaU)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_deq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___value_T_3;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & ((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                          & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock))) 
                         & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)))
                         ? (((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3))
                             ? ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7)
                             : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11)
                         : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)
                             ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock)
                                 ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24
                                 : ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))
                                     ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                                     : 0U)) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24)));
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[0U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][0U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[0U]);
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[1U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][1U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[1U]);
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[2U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][2U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[2U]);
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[3U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][3U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_enq_bits[3U]);
        if ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value))) {
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[0U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[0U];
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[1U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[1U];
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[2U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[2U];
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[3U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[3U];
            vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1)));
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
                = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                               << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                            >> 0xaU)));
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_bits_idx_REG 
        = ((~ (IData)(vlTOPp->reset)) & (0U == (2U 
                                                ^ (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (0U == (2U 
                                                ^ (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_REG 
        = ((~ (IData)(vlTOPp->reset)) & (0U == (2U 
                                                ^ (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (0U == (2U 
                                                ^ (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG 
        = ((~ (IData)(vlTOPp->reset)) & (0U == (2U 
                                                ^ (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__outDataBits_0_REG 
        = ((~ (IData)(vlTOPp->reset)) & (0U == (2U 
                                                ^ (7U 
                                                   & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt = 0U;
    } else {
        if ((((~ ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                   >> 6U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___inst_q_io_deq_ready_T_3))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s_io_swait)) 
             & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt)))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT___cnt_T_3;
        } else {
            if (((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                    >> 6U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___inst_q_io_deq_ready_T_3)) 
                  & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s_io_swait))) 
                 & (0xffU != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt)))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT___cnt_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt = 0U;
    } else {
        if ((((~ ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                   >> 5U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___inst_q_io_deq_ready_T_3))) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s_io_swait)) 
             & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt)))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT___cnt_T_3;
        } else {
            if (((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                    >> 5U) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___inst_q_io_deq_ready_T_3)) 
                  & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s_io_swait))) 
                 & (0xffU != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt)))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT___cnt_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state))) {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__start) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state 
                    = ((((0U == (0x180U ^ (0x387U & 
                                           vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                         | (0U == (0x387U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
                        & (0U == (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                              << 0x10U) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                >> 0x10U)))))
                        ? 1U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___GEN_0));
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state = 0U;
            } else {
                if ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___GEN_3;
                }
            }
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & ((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) 
                          & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock))) 
                         & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)))
                         ? (((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3))
                             ? ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7)
                             : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11)
                         : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)
                             ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock)
                                 ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24
                                 : ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))
                                     ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                                     : 0U)) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_inp_i 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_i;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_wgt_i 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_i;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_bits_REG 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT__io_deq_b;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r3 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r2;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r3;
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
                 < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x10U))) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride)))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___currentRowIdx_T_1;
        }
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_ld_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[0U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[1U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[2U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U];
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[3U] 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U];
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag__v0 
            = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdxValid)
                  ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__startIssueCmdRead)
                      ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx)
                      : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdDestElemIdxNext))
                  : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdDestElemIdxNext)) 
                << 4U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmd1stPluseOffsetTensNb) 
                           << 2U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx) 
                                      == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___T_28))
                                      ? ((0U == (1U 
                                                 & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
                                                     + 
                                                     (0x3fffcU 
                                                      & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                          << 0x12U) 
                                                         | (0x3fffcU 
                                                            & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                               >> 0xeU))))) 
                                                    >> 2U)))
                                          ? 2U : (1U 
                                                  & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
                                                      + 
                                                      (0x3fffcU 
                                                       & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                           << 0x12U) 
                                                          | (0x3fffcU 
                                                             & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                                                >> 0xeU))))) 
                                                     >> 2U)))
                                      : 2U)));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag__v0 = 1U;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_addr_pipe_0 
        = (0xfU & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_addr_pipe_0 
        = (0xfU & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_2_data_bits_data_REG;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_3_data_bits_data_REG;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_4_data_bits_data_REG;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_v 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_start_REG) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx = 0U;
        }
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
             ? (3U & ((IData)(1U) << (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestIdx_T_1)))
             : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid) 
                & (0U != (((IData)(1U) << (1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_0_T_1))) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wmask))))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state)
                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
                    ? 0U : (((1U & ((IData)(1U) << 
                                    (1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_0_T_1))))
                              ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_data_REG)
                              : 0U) | ((2U & ((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_0_T_1))))
                                        ? (IData)((vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_data_REG 
                                                   >> 0x20U))
                                        : 0U))) : 0U);
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state)
                ? (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
                              ? (0x3ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestIdx_T_1 
                                           >> 1U)) : 
                             (0x3ffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4 
                                         >> 1U) + ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcOffset_0_T) 
                                                   < 
                                                   (1U 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4))))))
                : 0U);
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
         & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
             ? (1U & (((IData)(1U) << (1U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestIdx_T_1)) 
                      >> 1U)) : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid) 
                                 & (0U != (((IData)(1U) 
                                            << (1U 
                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_1_T_1))) 
                                           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wmask))))))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state)
                ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
                    ? 0U : (((1U & ((IData)(1U) << 
                                    (1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_1_T_1))))
                              ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_data_REG)
                              : 0U) | ((2U & ((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcIdx_1_T_1))))
                                        ? (IData)((vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_data_REG 
                                                   >> 0x20U))
                                        : 0U))) : 0U);
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state)
                ? (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid)
                              ? (0x3ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestIdx_T_1 
                                           >> 1U)) : 
                             (0x3ffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4 
                                         >> 1U) + (
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___srcOffset_0_T))) 
                                                   < 
                                                   (1U 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4))))))
                : 0U);
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len = VL_ULL(0);
    } else {
        if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___T_4) {
            if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready) {
                vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len 
                    = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len_io_deq_bits_MPORT_data;
            }
        } else {
            if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate) {
                if (((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid) 
                     & (VL_ULL(0) != vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len))) {
                    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len 
                        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___ar_len_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate = 0U;
    } else {
        if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate) {
            if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate) {
                if (((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid) 
                     & (VL_ULL(1) == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len))) {
                    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate = 0U;
                }
            }
        } else {
            vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_2;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_b 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_bits;
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr__v0 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__raddr;
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr__v0 = 1U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext 
            = (1U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5)
                      ? ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag)
                      : ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext))));
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__availableEntries = 0xffffU;
    } else {
        if (((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi_io_axi_r_bits_last) 
             & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__availableEntries 
                = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___availableEntriesNext_T;
        } else {
            if (((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
                   & (((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full) 
                         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full)) 
                        | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full)) 
                       | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full)) 
                      | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full))) 
                  & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T)))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__availableEntries 
                    = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__newEntry;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value 
                = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap_1)
                    ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_3));
        }
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((5U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xaU]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[5U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[4U]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((7U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xfU])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xeU]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[9U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[8U]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[2U]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0U]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[7U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[6U]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
          ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid) 
             | ((6U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData_io_col)) 
                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))
          : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid))) {
        vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__wdataTensInstr_0
                : (((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xdU])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___wdataDirect_T[0xcU]))));
        vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6__v0 
            = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state)
                ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__waddrTensInstrTmp)
                : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx));
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__valid 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3;
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[1U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[2U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[3U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[4U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[5U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[6U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[7U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[8U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[9U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xaU];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xbU];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xcU];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xdU];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xeU];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rA 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xfU];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
             & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                 < (0xfU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                            >> 0x10U))) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride)))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_0__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_0);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_1__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_1);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_2__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_2);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_3__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_3);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_4__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_4);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_5__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_5);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_6__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_6);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_7__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_7);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_8__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_8);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_9__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_9);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_10__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_10);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_11__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_11);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_12__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_12);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_13__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_13);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_14__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_14);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT__f_15__DOT__rB 
            = ((0x8000U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U])
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__tensorImm_data_bits_0_0
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_15);
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_b 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_b;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext 
                = (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                              >> 5U));
        } else {
            if ((0x1fU == (0x1fU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5)
                                     ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag
                                     : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext))))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___rdDataDestIdxNext_T_1;
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestRowOffset_T_1)));
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_start_REG) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset 
                = (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
                               << 0x16U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
                                            >> 0xaU)));
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx 
        = (0xffffffU & ((((((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
                           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe))) 
                          & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock))) 
                         & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)))
                         ? (((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
                             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpNarwLineEnd_T_3))
                             ? ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_7)
                             : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11)
                         : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__incrementRow)
                             ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpNewFillBlock)
                                 ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24
                                 : ((3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))
                                     ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpTopLastIdx_T_1)
                                     : 0U)) : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_24)));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state = 0U;
    } else {
        if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state = 1U;
        } else {
            if (((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_last))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state = 2U;
            } else {
                if (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state)) 
                     & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight)))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight = 0U;
        } else {
            if ((1U & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4))))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight 
                    = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid)
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___inflight_T_1)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___GEN_7));
            }
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T_7)) 
                       & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid)) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0xfU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorAlu.scala:233 assert(inflight =/= ((1<<inflightBits)-1).U)\n");
    }
    if (VL_UNLIKELY((((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T_7)) 
                        & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid))) 
                       & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4)) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorAlu.scala:236 assert(inflight =/= 0.U)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT___T_5))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorAlu.scala:240 assert(inflight === 0.U)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid) 
                                                   != 
                                                   ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) 
                                                    | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r3)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorAlu.scala:284 assert(io.acc.rd(idx).data.valid === (valid_r3 || src_valid_r3))\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3)) 
                                 | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorAlu.scala:336 assert(!valid_r3 || io.acc.rd(idx).data.valid)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (
                                                   (0xffffU 
                                                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT___io_acc_y_data_valid_T)) 
                                                   != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorAlu.scala:359 assert(alu.io.acc_y.data.valid === valid_r4)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (
                                                   (0xffffU 
                                                    == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu__DOT___io_acc_y_data_valid_T)) 
                                                   != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorAlu.scala:372 assert(alu.io.out.data.valid === valid_r4)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__bypass_dst)))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Bypass required on dst_idx read TensorAlu.dst_idx_r3: Reg[UInt] RAW with write TensorAlu.dst_idx_r4: Reg[UInt]\n\n    at TensorAlu.scala:390 assert(!bypass_dst, s\"Bypass required on dst_idx read $dst_idx_r3 RAW with write $dst_idx_r4\\n\")\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__bypass_src)))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Bypass required on src_idx read TensorAlu.src_idx_r3: Reg[UInt] RAW with write TensorAlu.dst_idx_r4: Reg[UInt]\n\n    at TensorAlu.scala:391 assert(!bypass_src, s\"Bypass required on src_idx read $src_idx_r3 RAW with write $dst_idx_r4\\n\")\n");
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext 
            = (7U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5)
                      ? ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag)
                      : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___rdDataDestColNext_T_3)));
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state = 0U;
    } else {
        if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state = 1U;
        } else {
            if (((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state = 2U;
            } else {
                if (((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                     & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight)))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state = 0U;
                }
            }
        }
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_1 
            = (0x3ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         >> 0x16U));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_wgt_0 
            = (0x3ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         >> 0xcU));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_1 
            = (0x7ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                         >> 1U));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_inp_0 
            = (0x7ffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          << 0xaU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      >> 0x16U)));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_1 
            = (0x7ffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                          << 0x15U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                       >> 0xbU)));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_acc_0 
            = (0x7ffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U]);
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_empty_0 
            = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                     >> 0x1fU));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_1 
            = (0x3fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                           << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                       >> 0x11U)));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_lp_0 
            = (0x3fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                           << 0x1dU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                        >> 3U)));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_end 
            = (0x3fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                       >> 0x15U)));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_uop_begin 
            = (0x1fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0x18U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                        >> 8U)));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset 
            = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                     >> 7U));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_next 
            = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                     >> 6U));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_push_prev 
            = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                     >> 5U));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_next 
            = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                     >> 4U));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_pop_prev 
            = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                     >> 3U));
    }
    if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_op 
            = (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((1U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                                 | (0U == ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[0U] 
                                              ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[1U] 
                                                ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U])) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[2U] 
                                               ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U])) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[3U] 
                                              ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:585 assert(state =/= sRun  || capture_dec.asUInt === io.dec.asUInt)\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                           & (~ ((2U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state)) 
                                 | (0U == ((((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[0U] 
                                              ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]) 
                                             | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[1U] 
                                                ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U])) 
                                            | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[2U] 
                                               ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U])) 
                                           | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_8[3U] 
                                              ^ vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:586 assert(state =/= sWait || capture_dec.asUInt === io.dec.asUInt)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (
                                                   ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rvalid) 
                                                    & (0U 
                                                       == 
                                                       (2U 
                                                        ^ 
                                                        (7U 
                                                         & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))) 
                                                   != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:596 assert(delayedUopData.valid === delayed_valid)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__rvalid) 
                                                   != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_uop_valid))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:621 assert(io.inp.rd(0).data.valid === delayed_uop_valid)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__rvalid) 
                                                   != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_uop_valid))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:630 assert(io.wgt.rd(idx).data.valid === ShiftRegister(delayed_uop_valid, scratchpadReadLatency))\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid) 
                                                   != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:651 assert(io.acc.rd(idx).data.valid === wrpipe(idx).io.deq.valid)\n");
    }
    if (VL_UNLIKELY(((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_39)) 
                       & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0xfU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:656 assert(inflight =/= ((1<<inflightBits)-1).U)\n");
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_uop_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid));
    if (VL_UNLIKELY((((((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_39)) 
                        & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running))) 
                       & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v)) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:659 assert(inflight =/= 0.U)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T) 
                      & (~ (IData)(vlTOPp->reset))) 
                     & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:663 assert(inflight === 0.U)\n");
    }
    if (VL_UNLIKELY(((~ (IData)(vlTOPp->reset)) & (
                                                   ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid) 
                                                    | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)) 
                                                   != 
                                                   ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v) 
                                                    | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TensorGemm.scala:704 assert(mvc(idx1).io.acc_o.data.valid === (wrpipe(idx1).io.deq.valid | mvc(idx1).io.valid_reset))\n");
    }
    if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[0U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][0U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U]);
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[1U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][1U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U]);
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[2U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][2U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U]);
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[3U] 
            = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0][3U]
                : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U]);
        if ((2U >= (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value))) {
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[0U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[0U];
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[1U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[1U];
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[2U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[2U];
            vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[3U] 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT____Vlvbound2[3U];
            vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value;
        }
    }
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1__v0;
    }
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0__v0;
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter 
        = __Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state 
        = __Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt 
        = __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt;
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_0__v0;
    }
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__tensorFile_1__v0;
    }
    if (__Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id[__Vdlyvdim0__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0] 
            = __Vdlyvval__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id__v0;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state 
        = __Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__state;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt 
        = __Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt;
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_15__v0;
    }
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_14__v0;
    }
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_13__v0;
    }
    if (__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5[__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0] 
            = __Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_5__v0;
    }
}

VL_INLINE_OPT void VTest::_sequent__TOP__3(VTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest::_sequent__TOP__3\n"); );
    VTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_valid;
    CData/*7:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_id;
    QData/*63:0*/ __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_value[1];
    // Body
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_2__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_7__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_4__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_1__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_0__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_3__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_9__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_6__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_10__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_11__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_12__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_16__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_17__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_18__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_19__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_20__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_21__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_22__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_23__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_24__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_25__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_26__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_27__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_28__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_29__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_30__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_31__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__tensorFile_8__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr__v0) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr[vlTOPp->__Vdlyvdim0__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len__v0) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len[vlTOPp->__Vdlyvdim0__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_len__v0;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state;
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0][0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0][1U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0][2U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0][3U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram__v0[3U];
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq;
        }
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_tag__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_tag[0U] = 0U;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__ram_tag__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__ram_tag__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__ram_tag__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag__v0;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem 
        = (0xffffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_46);
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freset 
        = vlTOPp->reset;
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rdata = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate)) 
             & (1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rdata 
                = ((0x24U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                    ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_9
                    : ((0x20U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                        ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_8
                        : ((0x1cU == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                            ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_7
                            : ((0x18U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                                ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_6
                                : ((0x14U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_5
                                    : ((0x10U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                                        ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_4
                                        : ((0xcU == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                                            ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_3
                                            : ((8U 
                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                                                ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2
                                                : (
                                                   (4U 
                                                    == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                                                    ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_1
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr))
                                                     ? vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0
                                                     : 0U))))))))));
        }
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][1U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][2U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][3U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][1U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][2U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][3U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[3U];
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt;
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start) 
         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__stride))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__state;
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start) 
         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__stride))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx;
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0][0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0][1U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0][2U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0][3U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__ram_tag__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__ram_addr__v0;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__availableEntries;
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1)))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_1;
            } else {
                if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T)) 
                     & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_3;
                }
            }
        }
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_5__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_2__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_7__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_4__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_1__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_0__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_3__v0;
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6__v0] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__tensorFile_6__v0;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx;
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight = 0U;
    } else {
        if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T)) 
             & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___clInFlight_T_1;
        } else {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T_1) 
                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight 
                    = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___clInFlight_T_1) 
                                 - (IData)(1U)));
            } else {
                if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state) 
                      & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___T))) 
                     & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___clInFlight_T_7;
                }
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight = 0U;
    } else {
        if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T)) 
             & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___blocksInFlight_T_1;
        } else {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T_1) 
                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight 
                    = (0xfffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___blocksInFlight_T_1) 
                                 - (IData)(1U)));
            } else {
                if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state) 
                      & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___T))) 
                     & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___blocksInFlight_T_7;
                }
            }
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__state;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__inflight;
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) 
         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__stride))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___T_14) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__blocksReadNb 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__nextBlRNb;
        }
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][1U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][2U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0][3U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][0U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[0U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][1U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[1U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][2U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[2U];
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0][3U] 
            = vlTOPp->__Vdlyvval__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram__v0[3U];
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight = 0U;
    } else {
        if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T)) 
             & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___blocksInFlight_T_1;
        } else {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T_1) 
                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight 
                    = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___blocksInFlight_T_1) 
                                  - (IData)(1U)));
            } else {
                if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state) 
                      & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___T))) 
                     & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___blocksInFlight_T_7;
                }
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight = 0U;
    } else {
        if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T)) 
             & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___blocksInFlight_T_1;
        } else {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_1) 
                 & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight 
                    = (0x3fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___blocksInFlight_T_1) 
                                  - (IData)(1U)));
            } else {
                if ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state) 
                      & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T))) 
                     & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___blocksInFlight_T_7;
                }
            }
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___dramLineIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__dramLineIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___srcRowIdx_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__srcRowIdx)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__rvalid) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_acc_rd_0_data_valid_REG));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_3;
        }
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___counter_T_1 
        = ((IData)(1U) + vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___xcnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT__io_deq_v 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__rlen 
        = (0xffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_40));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__raddr_cur 
        = (0x7ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_68));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT___cnt_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_1__DOT__cnt) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___value_T_3 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___value_T_3 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value)));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_3;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_22);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_22);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__rdCmdExtAddr 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___GEN_22);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr 
            = (0xfffffff8U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__xferElemInitAddr);
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineAddr 
                = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride)
                    ? (0xfffffff8U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextLineBeginElemAddr)
                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdLineAddr_T_2);
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT___cnt_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__s_0__DOT__cnt) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___wr_cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt)));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_enq) {
            vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___value_T_1;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap_1 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_13 
        = (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___tag_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___ycnt_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___set_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_39 
        = (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_enq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___value_T_1;
        }
    }
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_start_REG)
                                           ? ((0U != 
                                               (0xfU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                   >> 0x10U)))
                                               ? 1U
                                               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4))
                                           : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                                               ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4)
                                               : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                        >> 0x14U)))
                                                    ? 6U
                                                    : 0U)
                                                   : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___value_T_3 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_start_REG)
                                           ? ((0U != 
                                               (0xfU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                   >> 0x10U)))
                                               ? 1U
                                               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4))
                                           : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                                               ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4)
                                               : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                        >> 0x14U)))
                                                    ? 6U
                                                    : 0U)
                                                   : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15)))));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value 
                = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap)
                    ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_1));
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0_io_rd_en) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0 
            = (0x7fU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead)
                         ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)
                         : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq)
                             ? ((0x7fU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1))
                                 ? 0U : ((IData)(1U) 
                                         + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)))
                             : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1))));
    }
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__rvalid) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid_REG));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___zpDestIdx_T_1 
        = (0xffffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpDestRowOffset) 
                        + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start)
                                           ? ((0U != 
                                               (0xfU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                   >> 0x10U)))
                                               ? 1U
                                               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4))
                                           : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                                               ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4)
                                               : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                                        >> 0x14U)))
                                                    ? 6U
                                                    : 0U)
                                                   : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15)))));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__acc_idx_pipe__DOT__io_deq_b 
            = (0x7ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
                         + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_acc_i)));
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r2 
        = (0x3fffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r1) 
                        + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_offset));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r3 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r2;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__currentRowIdx));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_enq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___value_T_1;
        }
    }
    if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) 
         | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextClIdx;
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdxValid) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__startIssueCmdRead) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdDestElemIdxNext 
                = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx) 
                             + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdTransactionTensNb)));
        } else {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen_io_updateState) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdDestElemIdxNext 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___rdCmdDestElemIdxNext_T_3;
            }
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_start) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__xferElemInitAddr;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__stride) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__nextLineBeginElemAddr;
        }
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_id;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_2_data_bits_data_REG 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_3_data_bits_data_REG 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data);
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_4_data_bits_data_REG 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpRowIdx_T_1 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_bits_data_REG 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_bits_idx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_bits_idx_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_b)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4));
    if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__raddr 
            = vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_3;
    } else {
        if ((((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)) 
              & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
             & (0U != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__raddr 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___raddr_T_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))) {
            if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__pulse) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))) {
                if ((1U & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state = 2U;
                }
            } else {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state 
                    = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_8)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_27));
            }
        }
    }
    if ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__lsb 
            = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_bits_data_REG;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_2_data_valid_REG) 
                                         & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data))));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_1__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_2__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_3__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_4__DOT__do_enq;
        }
    }
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap_1 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT___currentRowIdx_T_1 
        = (0xfffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__currentRowIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_0 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_1 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_2 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_3 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_4 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[4U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_5 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[5U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_6 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[6U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_7 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[7U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_8 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[8U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_9 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[9U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_10 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xaU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_11 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xbU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_12 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xcU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_13 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xdU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_14 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xeU];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__save_src_0_15 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___T_36[0xfU];
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_b 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_bits;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___rdDataDestIdxNext_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestIdxNext)));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext 
            = (0x1fU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5)
                         ? ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag)
                         : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___rdDataDestColNext_T_3)));
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___zpColIdx_T_11 
        = (0xffffffU & ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpColIdx));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT__zpState 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_start_REG)
                                           ? ((0U != 
                                               (0xfU 
                                                & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                   >> 0x10U)))
                                               ? 1U
                                               : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4))
                                           : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_23)
                                               ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_4)
                                               : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___T_40)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0xfU 
                                                     & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
                                                        >> 0x14U)))
                                                    ? 6U
                                                    : 0U)
                                                   : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding__DOT___GEN_15)))));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu_io_start_REG 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1) 
                                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__dec_io_isAlu)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r2));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r2));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__alu_io_acc_a_data_valid_REG 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r2;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___rdDataDestColNext_T_3 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_4_data_valid_REG) 
                                         & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rvalid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop_io_uop_idx_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__rvalid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__rvalid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_bits_1) 
                                         & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_valid_1)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT___loadUop_io_start_T_1) 
                                         & (0U == (2U 
                                                   ^ 
                                                   (7U 
                                                    & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U])))));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state))) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight = 0U;
        } else {
            if ((1U & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) 
                          & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v))))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight 
                    = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___inflight_T_1)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___GEN_27));
            }
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_valid));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value 
                = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap)
                    ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_1));
        }
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0_io_rd_en) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0__DOT__mem_io_rd_data_MPORT_addr_pipe_0 
            = (0x1ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead)
                          ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)
                          : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq)
                              ? ((0x1ffU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1))
                                  ? 0U : ((IData)(1U) 
                                          + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)))
                              : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1))));
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__dec_io_isStore 
        = ((0U == (1U ^ (7U & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U]))) 
           & (0U != (0xffffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                 << 0x10U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                              >> 0x10U)))));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state;
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_3 
        = (0x3ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext) 
                     - (IData)(1U)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___clInFlight_T_7 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight) 
                     - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT___GEN_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___blocksInFlight_T_7 
        = (0xfffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight) 
                     - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT___GEN_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___blocksInFlight_T_7 
        = (0x7fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight) 
                      - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT___GEN_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___blocksInFlight_T_7 
        = (0x3fffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight) 
                      - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT___GEN_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_3 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT___value_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT___value_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__dec_io_isStore)
            ? 2U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_start_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0_io_start));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_start_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1_io_start));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq) 
                                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_1;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isLoad 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_val_inst) 
           & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_op_type)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isStore 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_val_inst) 
           & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_op_type)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isCompute 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_val_inst) 
           & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec__DOT__cs_op_type)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r2 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r1) 
                     + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT___value_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmdStartIdx 
        = (0x7ffU & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT___GEN_22));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdCmd1stPluseOffsetTensNb 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__clReadIdx))
            ? (1U & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__rdLineElemBeginAddr 
                     >> 2U)) : 0U);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___raddr_T_1 
        = ((IData)(0x800U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__raddr);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__xrem 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT___GEN_42);
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
             | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1)))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_1;
            } else {
                if (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T)) 
                     & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_3;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__do_enq) 
             != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__do_deq))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full 
                = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__finish) {
            vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 = 2U;
        } else {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
                 & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 
                    = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_1 = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_finish) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_1 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__cycle_cnt;
        } else {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
                 & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
                vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_1 
                    = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2 = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
             & (8U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_2 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_3 = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
             & (0xcU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_3 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_4 = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
             & (0x10U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_4 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_5 = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
             & (0x14U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_5 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_6 = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
             & (0x18U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_6 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_7 = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
             & (0x1cU == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_7 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_8 = 0U;
    } else {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
             & (0x20U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_8 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_9 = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_finish) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_9 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__acc_wr_count;
        } else {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___T_6) 
                 & (0x24U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr)))) {
                vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_9 
                    = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data;
            }
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_bits_data_REG 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___T_5 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext)) 
                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext) 
                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                       != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataFirePipe 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeDataReadyPipe));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_2_data_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__firstPostn 
        = ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__availableEntries))
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___bitPostn_T_13));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_bits_idx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_b)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___rdDataDestColNext_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_3_data_valid_REG) 
                                         & (3U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_start_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_start));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[0U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[1U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[2U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__fillPadding_io_inst_REG[3U] 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__bypass_src 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r3) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4) 
              == vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r3));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__bypass_dst 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r3) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4)) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r4) 
              == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r3)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_valid_REG 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r1) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_bits_REG 
        = (0x3fffffU & ((1U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r1) 
                               | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[3U] 
                                  >> 0xfU))) ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r1) 
                                                + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_offset)
                         : (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r1) 
                                      + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___T_5 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext)) 
                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext) 
                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                       != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataFirePipe 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeDataReadyPipe));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_4_data_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_valid));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_bits_1 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_bits;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___inflight_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T 
        = (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_bypass_cond 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_b) 
             == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_b)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe2__DOT__io_deq_v));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__wrap 
        = (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__deq_ptr_value));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq) 
                                         & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_1;
        }
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__empty 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__maybe_full)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isCompute) 
            << 2U) | (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isStore) 
                       << 1U) | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isLoad)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__empty 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__maybe_full)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__clInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__vmeCmd__DOT__cmdGen__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag
        [vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_addr_pipe_0];
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data 
        = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id
        [vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_addr_pipe_0];
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__blocksInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_0__DOT__tensorLoad__DOT__state));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__blocksInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__loadDone 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__blocksInFlight)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__vmeCmd__DOT__commandsDone)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc__DOT__tensorLoad__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__start 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__empty)) 
                 & ((~ (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                        >> 3U)) | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s__DOT__cnt)))));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__start 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__empty)) 
                 & ((~ (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                        >> 4U)) | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__s__DOT__cnt)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___count_T_3 
        = (0xffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext) 
                    - (IData)(1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_ld_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isLoad) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_st_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isStore) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_deq_ready 
        = ((((4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel))
              ? (0x200U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))
              : ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel))
                  ? (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__full))
                  : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__deq_sel)) 
                     & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__full))))) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_co_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__dec_io_isCompute) 
            & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext))) 
           & (4U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__state)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__finish 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_finish;
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr 
        = ((QData)((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_8)) 
           | (VL_ULL(0xffffffff) & ((QData)((IData)(
                                                    ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                      << 6U) 
                                                     | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                        >> 0x1aU)))) 
                                    << 4U)));
    if ((1U & ((~ vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0) 
               | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_finish)))) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__acc_wr_count = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__acc_wr_count 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___acc_wr_count_T_1;
        }
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__cycle_cnt 
        = ((IData)(vlTOPp->reset) ? 0U : ((1U & (vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 
                                                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_finish))))
                                           ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___cycle_cnt_T_1
                                           : 0U));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr = 0xffffU;
    } else {
        if (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate)) 
             & (3U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)))) {
            vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__waddr 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr;
        }
    }
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
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_value
        [0U];
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5 
        = (1U & ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext)) 
                 | ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext) 
                    & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag 
                       != vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLast))));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___GEN_0 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__vmeTagDecodeLastValidNext));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataValidPipe) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataReadyPipe));
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_0_data_valid 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_0_data_valid_REG) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data))) 
           & (0x80U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_rd_1_data_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_1_data_valid_REG) 
           & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_id_localTag_out_MPORT_data)));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__io_vme_rd_3_data_valid_REG 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_valid_REG)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_valid_REG));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_bits 
        = (0x7ffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_rd_0_idx_REG)
                      ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__io_acc_rd_0_idx_bits_REG)
                      : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__io_acc_rd_0_idx_bits_REG));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_valid_r1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_src_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator_io_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__src_idx_r1 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_i;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__dst_idx_r1 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_i;
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_v));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_v) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_outPipe_bits 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_b;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___GEN_27 
        = (0xfU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v)
                    ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight) 
                       - (IData)(1U)) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__inflight)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute_io_out_wr_0_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__io_out_wr_0_valid_REG)
            ? ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v) 
               & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_acc_rd_0_data_valid) 
                  & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__mvc_0_io_valid_reset_REG))))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_v));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_v) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_outPipe_bits 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_b;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT___value_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value) 
           == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__value_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__s_io_swait 
        = ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[0U] 
            >> 3U) & ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
                      & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__start)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore_io_start 
        = (((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__start)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__dec_io_isStore));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__inst_q__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_ld_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_st_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_deq_ready) 
           & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q_io_deq_ready) 
           & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T 
        = ((0x200U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_co_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0__DOT__maybe_full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__VMEcmd_Qs_0_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAcc_io_tensor_wr_0_REG)
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe_0__DOT__io_deq_v)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__valid_r4));
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__reg_0;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__wstate 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__wstate;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData_io_col 
        = (0x1fU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT___T_5)
                     ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataBitsPipe_tag
                     : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__readData__DOT__rdDataDestColNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__wrMask1st 
        = ((2U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___wrMask1st_T_6) 
                  << 1U)) | (1U & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___wrMask1st_T_6) 
                                   >> 1U)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___GEN_4 
        = (0x1ffffU & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT___T_5)
                        ? (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__vmeTag_array_client_tag_localTag_out_MPORT_data 
                           >> 4U) : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__readData__DOT__rdDataElemDestIdxNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding_io_tensorIdx_valid 
        = (((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState)) 
            & (5U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__fillPadding__DOT__zpState))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__load__DOT__tensorLoad_1__DOT__tensorLoad__DOT__vmeDataFirePipe)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___acc_wr_count_T_1 
        = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__acc_wr_count);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT___cycle_cnt_T_1 
        = ((IData)(1U) + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__ecounters__DOT__cycle_cnt);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__pulse 
        = (1U & (vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__reg_0 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__s1_launch))));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr = 0U;
    } else {
        if (((0U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_valid))) {
            vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__addr 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_addr;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data = 0U;
    } else {
        if (((0U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_valid))) {
            vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__data 
                = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_value;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))) {
            if (vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_valid) {
                vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state 
                    = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_opcode)
                        ? 3U : 1U);
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))) {
                if ((1U & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate)))) {
                    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state = 2U;
                }
            } else {
                vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state 
                    = ((2U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state))
                        ? (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___GEN_3)
                        : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___GEN_9));
            }
        }
    }
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
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid 
        = (1U & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_valid));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid = 0U;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data = VL_ULL(0);
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id = 0U;
    } else {
        vlTOPp->__Vdpiimwrap_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2_TOP(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                ((1U 
                                                                                & ((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate)) 
                                                                                & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty))))
                                                                                 ? vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len_io_deq_bits_MPORT_data
                                                                                 : vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len))), 
                                                                                ((1U 
                                                                                & ((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate)) 
                                                                                & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty))))
                                                                                 ? (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id_io_deq_bits_MPORT_data)
                                                                                 : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_id)), (QData)((IData)(
                                                                                ((1U 
                                                                                & ((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate)) 
                                                                                & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty))))
                                                                                 ? vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr_io_deq_bits_MPORT_data
                                                                                 : vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_addr))), 
                                                                                ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__io_dpi_req_aw_valid_REG) 
                                                                                & (1U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))), (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_len), (QData)((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_addr)), 
                                                                                ((2U 
                                                                                == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate)) 
                                                                                & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_mem_w_valid)), vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Fwr_value, VL_ULL(0xff), __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_valid, __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_id, __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_value, 1U);
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_valid 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_valid;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_id 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_id;
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_value[0U] 
            = __Vtask_Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT__VTAMemDPI__Vdpioc2__2__rd_value
            [0U];
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid 
            = (1U & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_valid));
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_data 
            = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_value
            [0U];
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_bits_id 
            = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Frd_id;
    }
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
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                  << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                              >> 0x15U)) 
                                - (IData)(1U))))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i 
                    = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                        != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                         << 0xfU) | 
                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                         >> 0x11U)) 
                                       - (IData)(1U))))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___cnt_i_T_1)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_10));
            }
        }
    } else {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                  << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                              >> 0x15U)) 
                                - (IData)(1U))))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_i 
                    = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                        != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                         << 0xfU) | 
                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                         >> 0x11U)) 
                                       - (IData)(1U))))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___dst_i_T_1)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_11));
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_i = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                  << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                              >> 0x15U)) 
                                - (IData)(1U))))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_i 
                    = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                        != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                         << 0xfU) | 
                                        (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                         >> 0x11U)) 
                                       - (IData)(1U))))
                        ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___src_i_T_1)
                        : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_12));
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_i = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                  << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                              >> 0x15U)) 
                                - (IData)(1U))))) {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                     == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                  >> 0x11U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_7;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_o = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                  << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                              >> 0x15U)) 
                                - (IData)(1U))))) {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                     == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                  >> 0x11U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_o 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_8;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__dst_o = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                  << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                              >> 0x15U)) 
                                - (IData)(1U))))) {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i) 
                     == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                  >> 0x11U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_o 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_9;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__src_o = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running) {
        if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__advance) {
            vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx 
                = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx) 
                    != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                     << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                 >> 0x15U)) 
                                   - (IData)(1U))))
                    ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___uop_idx_T_1)
                    : (0x1fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                   << 0x18U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                                >> 8U))));
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx 
            = (0x1fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0x18U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                        >> 8U)));
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_v 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__reset_pipe__DOT__io_deq_b 
            = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_v 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid) {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipe0__DOT__io_deq_b 
            = (0x7ffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
                         + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_acc_i)));
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___memoryQueue_io_enq_valid_T) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full) 
              | (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid 
        = ((0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_count))
            ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_deq_valid)
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch_io_inst_co_valid));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0_io_rd_en 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__fetch__DOT__fetch__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead));
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
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state 
        = vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state;
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vcr__DOT__rstate;
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
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi__DOT_____05Fwr_value[0U] 
        = ((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag))
            ? ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))
                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1
               [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_1_MPORT_1_addr_pipe_0]
                : VL_ULL(0)) : ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__set))
                                 ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0
                                [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tensorFile_0_0_MPORT_1_addr_pipe_0]
                                 : VL_ULL(0)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len_io_deq_bits_MPORT_data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len
        [vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value];
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__maybe_full)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len 
        = vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len;
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__capture_dec_reset;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad_io_tensor_rd_0_data_bits_0_0 
        = (((1U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rdata_r))
             ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0
            [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_0_rdataVec_MPORT_addr_pipe_0]
             : 0U) | ((2U & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__rdata_r))
                       ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1
                      [vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__loadUop__DOT__loadUop__DOT__tensorLoad__DOT__tensorFile_1_rdataVec_MPORT_1_addr_pipe_0]
                       : 0U));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__ram0_io_rd_en 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_deq) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__firstRead));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__memoryQueue_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer_io_enq_valid));
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
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_valid 
        = (1U & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_valid));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_addr 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_addr;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_value 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_value;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi_dpi_req_opcode 
        = (1U & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_dpi__DOT_____05Freq_opcode));
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
    vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate)
            ? 0U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT___GEN_7 
        = ((1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_host__DOT__host_axi__DOT__state)) 
           | (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vcr__DOT__rstate));
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
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_id = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate)))) {
            if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready) {
                vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_id 
                    = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id_io_deq_bits_MPORT_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_addr = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate)))) {
            if (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready) {
                vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_addr 
                    = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr_io_deq_bits_MPORT_data;
            }
        }
    }
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___ar_len_T_1 
        = (vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len 
           - VL_ULL(1));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi_io_axi_r_bits_last 
        = ((VL_ULL(0) == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__ar_len) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__io_dpi_req_aw_valid_REG 
        = (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate));
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_len = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))) {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
                vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_len 
                    = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_addr = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))) {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
                vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__aw_addr 
                    = vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_addr;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))) {
            if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
                vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))) {
                if ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate))) {
                    vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate = 2U;
                }
            } else {
                vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate 
                    = ((2U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))
                        ? (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_20)
                        : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_22));
            }
        }
    }
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__running 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___GEN_5));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___cnt_i_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__cnt_i)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT___uop_idx_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorAlu__DOT__index_generator__DOT__uop_idx)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__delayed_acc_i 
        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_i;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_id
        [vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value];
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_addr
        [vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__deq_ptr_value];
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate 
        = vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi_io_axi_r_bits_last) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_dpi_dpi_rd_valid));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate 
        = vlTOPp->__Vdly__Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate;
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__vme__DOT__wstate;
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___T_4 
        = (1U & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate)));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_2 
        = ((((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)) 
             & (VL_ULL(0) != vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__ram_len_io_deq_bits_MPORT_data)) 
            & (0x10U == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter)) 
           | (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready 
        = (((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)) 
            & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__rstate))) 
           & (0x10U == vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__counter));
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
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T_32) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_addr = 0U;
    } else {
        if (vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T_32) {
            vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_addr 
                = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur;
        }
    }
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
    vlTOPp->Test__DOT__vta_shell__DOT__vme_io_mem_w_valid 
        = ((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate)) 
           & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)));
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___cnt_i_T_1;
            } else {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i = 0U;
                }
            }
        }
    } else {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_i 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___acc_i_T_1;
            } else {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_i 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_tmp;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_i = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_i 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___inp_i_T_1;
            } else {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_i 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_tmp;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_i = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_i 
                    = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___wgt_i_T_1;
            } else {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_i 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_tmp;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_i = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___cnt_o_T_1;
                }
            }
        }
    } else {
        vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_o 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_tmp;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__acc_o = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_o 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_tmp;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__inp_o = 0U;
    }
    if (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) {
        if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
             == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                              << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                          >> 0x15U)) 
                            - (IData)(1U))))) {
            if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i) 
                 == (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                  << 0xfU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                              >> 0x11U)) 
                                - (IData)(1U))))) {
                if (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o) 
                     != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[2U] 
                                      << 0x1dU) | (
                                                   vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                                   >> 3U)) 
                                    - (IData)(1U))))) {
                    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_o 
                        = vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_tmp;
                }
            }
        }
    } else {
        vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__wgt_o = 0U;
    }
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)
            ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx) 
                != (0x3fffU & (((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                                 << 0xbU) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                             >> 0x15U)) 
                               - (IData)(1U)))) ? (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___uop_idx_T_1)
                : (0x1fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                               << 0x18U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                            >> 8U))))
            : (0x1fffU & ((vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[1U] 
                           << 0x18U) | (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ram_io_deq_bits_MPORT_data[0U] 
                                        >> 8U))));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_deq_ready) 
           & (~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__empty)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___T_32 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate)) 
           & (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_42 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_data_ready) 
           & (2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i;
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o 
        = vlTOPp->__Vdly__Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o;
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
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue__DOT__full)) 
           & (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__dpiReqQueue_io_enq_valid));
    vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT___GEN_52 
        = ((((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)) 
             & (2U == (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate))) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt) 
               == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len)))
            ? 3U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wstate));
    vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT___GEN_20 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_mem_w_valid) 
            & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_cnt) 
               == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme__DOT__wr_len)))
            ? 3U : (IData)(vlTOPp->Test__DOT__sim_shell__DOT__mod_mem__DOT__mem_axi__DOT__wstate));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen 
        = (0xffU & vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_45);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur 
        = (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_78);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done 
        = (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___T_19));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___GEN_1));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___cnt_i_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_i)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___cnt_o_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__cnt_o)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___uop_idx_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__uop_idx)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT___GEN_3 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)
            ? 0U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__do_deq 
        = ((((2U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state)) 
             & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore_io_done)) 
            | (1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__state))) 
           & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__empty)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_8 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__vme_io_vme_wr_0_data_ready)
            ? (((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt) 
                == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))
                ? 4U : ((1U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__tag))
                         ? 3U : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state)))
            : (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride 
        = ((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
             & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xcnt) 
                == (0xffU & ((IData)(1U) + (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xlen))))) 
            & (0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem))) 
           & ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__ycnt) 
              != (0xffffU & (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__inst_q__DOT__ram_io_deq_bits_MPORT_data[2U] 
                             - (IData)(1U)))));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr 
        = (vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur 
           + vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_bytes);
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT___T_39 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running) 
           & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__wrpipeNs__DOT__io_deq_v));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___GEN_78 
        = ((0U == (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__state))
            ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_init_addr
            : (QData)((IData)((((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT___stride_T_1) 
                                & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xrem)))
                                ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_split_addr
                                : ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__stride)
                                    ? vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__xfer_stride_addr
                                    : vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__store__DOT__tensorStore__DOT__tensorStore__DOT__waddr_cur)))));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT___GEN_1 
        = (((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)) 
            & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm_io_start_REG)) 
           | ((~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m_io_last)) 
              & (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__tensorGemm__DOT__m__DOT__running)));
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
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT___countNext_T_1 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready) 
           & (0U != (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__countNext)));
    vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__do_deq 
        = ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q_io_deq_ready) 
           & (~ ((IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->Test__DOT__vta_shell__DOT__core__DOT__compute__DOT__inst_q__DOT__queue__DOT__queue__DOT__buffer__DOT__maybe_full)))));
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
