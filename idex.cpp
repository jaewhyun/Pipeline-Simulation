//
//  idex.cpp
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <stdio.h>
#include "idex.h"

idex::idex()
{
    
}

void idex::setreadreg1(int sreg1)
{
    ReadReg1 = sreg1;
}

int idex::getreadreg1()
{
    return ReadReg1;
}

int idex::getreadreg2()
{
    return ReadReg2;
}

void idex::setreadreg2(int sreg2)
{
    ReadReg2 = sreg2;
}

void idex::seoffset(short offset)
{
    SEOffset = offset;
}


int idex::getoffset()
{
    return SEOffset;
}

void idex::writereg2016(int register2)
{
    WriteReg_20_16 = register2;
}

int idex::getwritereg2016()
{
    return WriteReg_20_16;
}

void idex::writereg1511(int register3)
{
    WriteReg_15_11 = register3;
}

int idex::getwritereg1511()
{
    return WriteReg_15_11;
}

void idex::setfunction(int functioninput)
{
    function = functioninput;
}

int idex::getfunction()
{
    return function;
}

void idex::setregdst(int regdst)
{
    RegDst = regdst;
}

int idex::getregdst()
{
    return RegDst;
}

void idex::setalusrc(int alusrc)
{
    ALUSrc = alusrc;
}

int idex::getalusrc()
{
    return ALUSrc;
}

void idex::setaluop(int aluop)
{
    ALUOp = aluop;
}

int idex::getaluop()
{
    return ALUOp;
}

void idex::setmemread(int memread)
{
    MemRead = memread;
}

int idex::getmemread()
{
    return MemRead;
}

void idex::setmemwrite(int memwrite)
{
    MemWrite = memwrite;
}

int idex::getmemwrite()
{
    return MemWrite;
}

void idex::setmemtoreg(int memtoreg)
{
    MemToReg = memtoreg;
}

int idex::getmemtoreg()
{
    return MemToReg;
}

void idex::setregwrite(int regwrite)
{
    RegWrite = regwrite;
}

int idex::getregwrite()
{
    return RegWrite;
}
