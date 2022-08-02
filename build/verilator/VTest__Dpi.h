// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at /home/balas/tvm-vta/build/chisel/VTAHostDPI.v:36:32
    extern void VTAHostDPI(unsigned char* req_valid, unsigned char* req_opcode, unsigned char* req_addr, unsigned int* req_value, unsigned char req_deq, unsigned char resp_valid, unsigned int resp_value);
    // DPI import at /home/balas/tvm-vta/build/chisel/VTAMemDPI.v:45:32
    extern void VTAMemDPI(unsigned char rd_req_valid, unsigned char rd_req_len, unsigned char rd_req_id, unsigned long long rd_req_addr, unsigned char wr_req_valid, unsigned char wr_req_len, unsigned long long wr_req_addr, unsigned char wr_valid, const svOpenArrayHandle wr_value, unsigned long long wr_strb, unsigned char* rd_valid, unsigned char* rd_id, const svOpenArrayHandle rd_value, unsigned char rd_ready);
    // DPI import at /home/balas/tvm-vta/build/chisel/VTASimDPI.v:27:32
    extern void VTASimDPI(unsigned char* sim_wait, unsigned char* sim_exit);
    
#ifdef __cplusplus
}
#endif
