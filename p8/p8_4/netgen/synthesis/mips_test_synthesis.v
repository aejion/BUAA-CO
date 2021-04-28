////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: mips_test_synthesis.v
// /___/   /\     Timestamp: Sun Dec 22 16:10:13 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim mips_test.ngc mips_test_synthesis.v 
// Device	: xc6slx100-2-fgg676
// Input file	: mips_test.ngc
// Output file	: G:\cpu\p8_4\netgen\synthesis\mips_test_synthesis.v
// # of Modules	: 1
// Design Name	: mips_test
// Xilinx        : G:\ISE\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module mips_test (
)/* synthesis syn_black_box syn_noprune=1 */;
  
  // synthesis translate_off
  
  wire N1;
  wire clk;
  wire \uut/clk2 ;
  wire \uut/clk ;
  wire \uut/clkclk/clkfbout_buf ;
  wire \uut/clkclk/clkout1 ;
  wire \uut/clkclk/clkout0 ;
  wire \uut/clkclk/clkfbout ;
  wire \uut/clkclk/clkin1 ;
  wire temp1;
  wire \NLW_uut/clkclk/pll_base_inst_CLKOUT3_UNCONNECTED ;
  wire \NLW_uut/clkclk/pll_base_inst_CLKOUT4_UNCONNECTED ;
  wire \NLW_uut/clkclk/pll_base_inst_CLKOUT5_UNCONNECTED ;
  wire \NLW_uut/clkclk/pll_base_inst_CLKOUT2_UNCONNECTED ;
  wire \NLW_uut/clkclk/pll_base_inst_LOCKED_UNCONNECTED ;
  wire \NLW_uut/Wra_rxd_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<31>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<30>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<29>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<28>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<27>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<26>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<25>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<24>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<23>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<22>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<21>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<20>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<19>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<18>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<17>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<16>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<15>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<14>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<13>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<12>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<11>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<10>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<9>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<8>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<7>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<6>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<5>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<4>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<3>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<2>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<1>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_addr<0>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<31>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<30>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<29>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<28>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<27>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<26>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<25>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<24>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<23>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<22>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<21>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<20>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<19>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<18>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<17>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<16>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<15>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<14>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<13>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<12>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<11>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<10>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<9>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<8>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<7>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<6>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<5>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<4>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<3>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<2>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<1>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_F_instr<0>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<31>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<30>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<29>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<28>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<27>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<26>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<25>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<24>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<23>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<22>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<21>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<20>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<19>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<18>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<17>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<16>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<15>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<14>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<13>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<12>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<11>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<10>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<9>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<8>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<7>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<6>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<5>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<4>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<3>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<2>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<1>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_addr<0>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<31>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<30>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<29>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<28>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<27>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<26>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<25>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<24>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<23>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<22>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<21>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<20>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<19>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<18>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<17>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<16>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<15>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<14>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<13>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<12>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<11>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<10>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<9>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<8>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<7>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<6>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<5>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<4>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<3>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<2>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<1>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WData<0>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<31>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<30>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<29>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<28>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<27>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<26>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<25>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<24>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<23>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<22>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<21>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<20>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<19>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<18>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<17>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<16>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<15>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<14>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<13>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<12>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<11>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<10>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<9>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<8>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<7>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<6>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<5>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<4>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<3>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<2>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<1>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RData<0>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<7>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<6>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<5>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<4>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<3>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<2>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<1>_UNCONNECTED ;
  wire \NLW_uut/Wra_txd_buffer<0>_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_WE_UNCONNECTED ;
  wire \NLW_uut/Wra_user_M_RE_UNCONNECTED ;
  wire \NLW_uut/Wra_TxD_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<31>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<30>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<29>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<28>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<27>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<26>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<25>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<24>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<23>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<22>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<21>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<20>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<19>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<18>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<17>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<16>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<15>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<14>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<13>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<12>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<11>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<10>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<9>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<8>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<7>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<6>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<5>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<4>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<3>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<2>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<1>_UNCONNECTED ;
  wire \NLW_uut/cpu1/IM1/IP_IM_douta<0>_UNCONNECTED ;
  wire [31 : 0] \uut/DM_WD ;
  VCC   XST_VCC (
    .P(temp1)
  );
  GND   XST_GND (
    .G(N1)
  );
  BUFG   \uut/clkclk/clkout2_buf  (
    .O(\uut/clk2 ),
    .I(\uut/clkclk/clkout1 )
  );
  BUFG   \uut/clkclk/clkout1_buf  (
    .O(\uut/clk ),
    .I(\uut/clkclk/clkout0 )
  );
  BUFG   \uut/clkclk/clkf_buf  (
    .O(\uut/clkclk/clkfbout_buf ),
    .I(\uut/clkclk/clkfbout )
  );
  IBUFG #(
    .CAPACITANCE ( "DONT_CARE" ),
    .IBUF_DELAY_VALUE ( "0" ),
    .IBUF_LOW_PWR ( "TRUE" ),
    .IOSTANDARD ( "DEFAULT" ))
  \uut/clkclk/clkin1_buf  (
    .I(clk),
    .O(\uut/clkclk/clkin1 )
  );
  INV   clk_INV_0 (
    .I(clk),
    .O(clk)
  );
  PLL_BASE #(
    .BANDWIDTH ( "OPTIMIZED" ),
    .CLK_FEEDBACK ( "CLKFBOUT" ),
    .COMPENSATION ( "SYSTEM_SYNCHRONOUS" ),
    .RESET_ON_LOSS_OF_LOCK ( "FALSE" ),
    .CLKFBOUT_MULT ( 16 ),
    .CLKOUT0_DIVIDE ( 40 ),
    .CLKOUT1_DIVIDE ( 20 ),
    .CLKOUT2_DIVIDE ( 1 ),
    .CLKOUT3_DIVIDE ( 1 ),
    .CLKOUT4_DIVIDE ( 1 ),
    .CLKOUT5_DIVIDE ( 1 ),
    .DIVCLK_DIVIDE ( 1 ),
    .CLKFBOUT_PHASE ( 0.000000 ),
    .CLKIN_PERIOD ( 40.000000 ),
    .CLKOUT0_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT0_PHASE ( 0.000000 ),
    .CLKOUT1_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT1_PHASE ( 0.000000 ),
    .CLKOUT2_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT2_PHASE ( 0.000000 ),
    .CLKOUT3_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT3_PHASE ( 0.000000 ),
    .CLKOUT4_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT4_PHASE ( 0.000000 ),
    .CLKOUT5_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT5_PHASE ( 0.000000 ),
    .REF_JITTER ( 0.010000 ))
  \uut/clkclk/pll_base_inst  (
    .CLKIN(\uut/clkclk/clkin1 ),
    .CLKFBIN(\uut/clkclk/clkfbout_buf ),
    .CLKOUT1(\uut/clkclk/clkout1 ),
    .CLKOUT0(\uut/clkclk/clkout0 ),
    .CLKFBOUT(\uut/clkclk/clkfbout ),
    .RST(N1),
    .CLKOUT3(\NLW_uut/clkclk/pll_base_inst_CLKOUT3_UNCONNECTED ),
    .CLKOUT4(\NLW_uut/clkclk/pll_base_inst_CLKOUT4_UNCONNECTED ),
    .CLKOUT5(\NLW_uut/clkclk/pll_base_inst_CLKOUT5_UNCONNECTED ),
    .CLKOUT2(\NLW_uut/clkclk/pll_base_inst_CLKOUT2_UNCONNECTED ),
    .LOCKED(\NLW_uut/clkclk/pll_base_inst_LOCKED_UNCONNECTED )
  );
  wrapper   \uut/Wra  (
    .clk(\uut/clk ),
    .reset(temp1),
    .M_WE(N1),
    .M_RE(N1),
    .rxd(\NLW_uut/Wra_rxd_UNCONNECTED ),
    .user_M_WE(\NLW_uut/Wra_user_M_WE_UNCONNECTED ),
    .user_M_RE(\NLW_uut/Wra_user_M_RE_UNCONNECTED ),
    .TxD(\NLW_uut/Wra_TxD_UNCONNECTED ),
    .F_addr({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .F_instr({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .M_addr({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .M_WData({\uut/DM_WD [31], \uut/DM_WD [30], \uut/DM_WD [29], \uut/DM_WD [28], \uut/DM_WD [27], \uut/DM_WD [26], \uut/DM_WD [25], \uut/DM_WD [24], 
\uut/DM_WD [23], \uut/DM_WD [22], \uut/DM_WD [21], \uut/DM_WD [20], \uut/DM_WD [19], \uut/DM_WD [18], \uut/DM_WD [17], \uut/DM_WD [16], 
\uut/DM_WD [15], \uut/DM_WD [14], \uut/DM_WD [13], \uut/DM_WD [12], \uut/DM_WD [11], \uut/DM_WD [10], \uut/DM_WD [9], \uut/DM_WD [8], \uut/DM_WD [7], 
\uut/DM_WD [6], \uut/DM_WD [5], \uut/DM_WD [4], \uut/DM_WD [3], \uut/DM_WD [2], \uut/DM_WD [1], \uut/DM_WD [0]}),
    .M_RData({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .user_F_addr({\NLW_uut/Wra_user_F_addr<31>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<30>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<29>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<28>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<27>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<26>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<25>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<24>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<23>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<22>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<21>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<20>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<19>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<18>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<17>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<16>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<15>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<14>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<13>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<12>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<11>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<10>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<9>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<8>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<7>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<6>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<5>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<4>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<3>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<2>_UNCONNECTED , 
\NLW_uut/Wra_user_F_addr<1>_UNCONNECTED , \NLW_uut/Wra_user_F_addr<0>_UNCONNECTED }),
    .user_F_instr({\NLW_uut/Wra_user_F_instr<31>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<30>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<29>_UNCONNECTED 
, \NLW_uut/Wra_user_F_instr<28>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<27>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<26>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<25>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<24>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<23>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<22>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<21>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<20>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<19>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<18>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<17>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<16>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<15>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<14>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<13>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<12>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<11>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<10>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<9>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<8>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<7>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<6>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<5>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<4>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<3>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<2>_UNCONNECTED , 
\NLW_uut/Wra_user_F_instr<1>_UNCONNECTED , \NLW_uut/Wra_user_F_instr<0>_UNCONNECTED }),
    .user_M_addr({\NLW_uut/Wra_user_M_addr<31>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<30>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<29>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<28>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<27>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<26>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<25>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<24>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<23>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<22>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<21>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<20>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<19>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<18>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<17>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<16>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<15>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<14>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<13>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<12>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<11>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<10>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<9>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<8>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<7>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<6>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<5>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<4>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<3>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<2>_UNCONNECTED , 
\NLW_uut/Wra_user_M_addr<1>_UNCONNECTED , \NLW_uut/Wra_user_M_addr<0>_UNCONNECTED }),
    .user_M_WData({\NLW_uut/Wra_user_M_WData<31>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<30>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<29>_UNCONNECTED 
, \NLW_uut/Wra_user_M_WData<28>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<27>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<26>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<25>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<24>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<23>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<22>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<21>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<20>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<19>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<18>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<17>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<16>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<15>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<14>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<13>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<12>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<11>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<10>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<9>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<8>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<7>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<6>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<5>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<4>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<3>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<2>_UNCONNECTED , 
\NLW_uut/Wra_user_M_WData<1>_UNCONNECTED , \NLW_uut/Wra_user_M_WData<0>_UNCONNECTED }),
    .user_M_RData({\NLW_uut/Wra_user_M_RData<31>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<30>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<29>_UNCONNECTED 
, \NLW_uut/Wra_user_M_RData<28>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<27>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<26>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<25>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<24>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<23>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<22>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<21>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<20>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<19>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<18>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<17>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<16>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<15>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<14>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<13>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<12>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<11>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<10>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<9>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<8>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<7>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<6>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<5>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<4>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<3>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<2>_UNCONNECTED , 
\NLW_uut/Wra_user_M_RData<1>_UNCONNECTED , \NLW_uut/Wra_user_M_RData<0>_UNCONNECTED }),
    .txd_buffer({\NLW_uut/Wra_txd_buffer<7>_UNCONNECTED , \NLW_uut/Wra_txd_buffer<6>_UNCONNECTED , \NLW_uut/Wra_txd_buffer<5>_UNCONNECTED , 
\NLW_uut/Wra_txd_buffer<4>_UNCONNECTED , \NLW_uut/Wra_txd_buffer<3>_UNCONNECTED , \NLW_uut/Wra_txd_buffer<2>_UNCONNECTED , 
\NLW_uut/Wra_txd_buffer<1>_UNCONNECTED , \NLW_uut/Wra_txd_buffer<0>_UNCONNECTED })
  );
  DMM   \uut/cpu1/DM1/IP_DM  (
    .clka(\uut/clk2 ),
    .wea({N1, N1, N1, N1}),
    .addra({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .dina({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .douta({\uut/DM_WD [31], \uut/DM_WD [30], \uut/DM_WD [29], \uut/DM_WD [28], \uut/DM_WD [27], \uut/DM_WD [26], \uut/DM_WD [25], \uut/DM_WD [24], 
\uut/DM_WD [23], \uut/DM_WD [22], \uut/DM_WD [21], \uut/DM_WD [20], \uut/DM_WD [19], \uut/DM_WD [18], \uut/DM_WD [17], \uut/DM_WD [16], 
\uut/DM_WD [15], \uut/DM_WD [14], \uut/DM_WD [13], \uut/DM_WD [12], \uut/DM_WD [11], \uut/DM_WD [10], \uut/DM_WD [9], \uut/DM_WD [8], \uut/DM_WD [7], 
\uut/DM_WD [6], \uut/DM_WD [5], \uut/DM_WD [4], \uut/DM_WD [3], \uut/DM_WD [2], \uut/DM_WD [1], \uut/DM_WD [0]})
  );
  IMM   \uut/cpu1/IM1/IP_IM  (
    .clka(\uut/clk2 ),
    .wea({N1, N1, N1, N1}),
    .addra({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .dina({N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1, N1}),
    .douta({\NLW_uut/cpu1/IM1/IP_IM_douta<31>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<30>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<29>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<28>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<27>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<26>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<25>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<24>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<23>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<22>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<21>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<20>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<19>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<18>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<17>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<16>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<15>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<14>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<13>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<12>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<11>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<10>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<9>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<8>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<7>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<6>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<5>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<4>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<3>_UNCONNECTED , 
\NLW_uut/cpu1/IM1/IP_IM_douta<2>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<1>_UNCONNECTED , \NLW_uut/cpu1/IM1/IP_IM_douta<0>_UNCONNECTED })
  );

// synthesis translate_on

endmodule

// synthesis translate_off

`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

// synthesis translate_on
