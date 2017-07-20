//
//  main.cpp
//  pipeline
//
//  Created by Jae Won Hyun on 11/12/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <iostream>
#include "pipeline.h"
#include "ifid.h"
#include "idex.h"
#include "exmem.h"
#include "memwb.h"

using namespace std;

int main()
{
    int instructioncache[12];
    
    instructioncache[0] = 0xa1020000;
    instructioncache[1] = 0x810AFFFC;
    instructioncache[2] = 0x00831820;
    instructioncache[3] = 0x01263820;
    instructioncache[4] = 0x01224820;
    instructioncache[5] = 0x81180000;
    instructioncache[6] = 0x81510010;
    instructioncache[7] = 0x00624022; // a nop use just to allow the "real" instructions finish in the pipeline
    instructioncache[8] = 0x00000000; // a nop use just to allow the "real" instructions finish in the pipeline
    instructioncache[9] = 0x00000000; // a nop use just to allow the "real" instructions finish in the pipeline
    instructioncache[10] = 0x00000000; // a nop use just to allow the "real" instructions finish in the pipeline
    instructioncache[11] = 0x00000000; // a nop use just to allow the "real" instructions finish in the pipeline
    
    
    pipeline pipelinereg;
    
    int instruction;
    for(int i = 0; i <12; i++)
    {
        cout << "\nClock Cycle: " << i + 1 << "\n";
        instruction = instructioncache[i];
        pipelinereg.if_stage(instruction);
        pipelinereg.id_stage();
        pipelinereg.ex_stage();
        pipelinereg.mem_stage();
        pipelinereg.wb_stage();
        pipelinereg.print_out_everything();
        pipelinereg.copy_write_to_read();
    }
    
}
