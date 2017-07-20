//
//  exmem.cpp
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <stdio.h>
#include "exmem.h"

exmem::exmem()
{
    
}

void exmem::setaluresult(int aluresult)
{
    ALUResult = aluresult;
}

int exmem::getaluresult()
{
    return ALUResult;
}

void exmem::setswvalue(int idexreadreg2value)
{
    SWValue = idexreadreg2value;
}

int exmem::getswvalue()
{
    return SWValue;
}

void exmem::setwriteregnum(int idexreadwritereg2016)
{
    WriteRegNum = idexreadwritereg2016;
}

int exmem::getwriteregnum()
{
    return WriteRegNum;
}

void exmem::setmemread(int memread)
{
    MemRead = memread;
}

void exmem::setmemwrite(int memwrite)
{
    MemWrite = memwrite;
}

void exmem::setmemtoreg(int memtoreg)
{
    MemToReg = memtoreg;
}

void exmem::setregwrite(int regwrite)
{
    RegWrite = regwrite;
}

int exmem::getmemread()
{
    return MemRead;
}

int exmem::getmemwrite()
{
    return MemWrite;
}

int exmem::getmemtoreg()
{
    return MemToReg;
}

int exmem::getregwrite()
{
    return RegWrite;
}
