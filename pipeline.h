//
//  pipeline.h
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef pipeline_h
#define pipeline_h

#include "ifid.h"
#include "idex.h"
#include "exmem.h"
#include "memwb.h"

class pipeline{
public:
    static const int mainmemory = 2048;
    int Main_Mem[mainmemory];
    int Regs[32];
    
    pipeline();
    
    ifid ifidwrite;
    ifid ifidread;
    idex idexread;
    idex idexwrite;
    exmem exmemread;
    exmem exmemwrite;
    memwb memwbread;
    memwb memwbwrite;
    
    // id_stage
    void setreg1value(int);
    void setreg1(int);
    int getreg1();
    void setreg2(int);
    int getreg2();
    void setreg3(int);
    int getreg3();
    int getreg1value();
    void setreg2value(int);
    int getreg2value();
    
    // 
    
    void if_stage(int);
    void id_stage();
    void ex_stage();
    void mem_stage();
    void wb_stage();
    void print_out_everything();
    void copy_write_to_read();
private:


};
#endif /* pipeline_h */
