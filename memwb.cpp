//
//  memwb.cpp
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <stdio.h>
#include "memwb.h"

memwb::memwb()
{
    
}

void memwb::setlwdatavalue(int lwdata)
{
    LWDataValue = lwdata;
}

int  memwb::getlwdatavalue()
{
    return LWDataValue;
}

void memwb::setaluresult(int exmemreadaluresult)
{
    ALUResult = exmemreadaluresult;
}

int memwb::getaluresult()
{
    return ALUResult;
}

void memwb::setwriteregnum(int exmemreadwriteregnum)
{
    WriteRegNum = exmemreadwriteregnum;
}

int memwb::getwriteregnum()
{
    return WriteRegNum;
}

void memwb::setmemtoreg(int memtoreg)
{
    MemToReg = memtoreg;
}

void memwb::setregwrite(int regwrite)
{
    RegWrite = regwrite;
}

int memwb::getmemtoreg()
{
    return MemToReg;
}

int memwb::getregwrite()
{
    return RegWrite;
}
