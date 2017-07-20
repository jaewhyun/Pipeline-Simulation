//
//  idex.h
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef idex_h
#define idex_h
class idex{
public:
    idex();
    void setreadreg1(int);
    int getreadreg1();
    void setreadreg2(int);
    int getreadreg2();
    void seoffset(short);
    int getoffset();
    void writereg2016(int);
    int getwritereg2016();
    void writereg1511(int);
    int getwritereg1511();
    void setopcode(int);
    int getopcode();
    void setfunction(int);
    int getfunction();

    void setregdst(int);
    void setalusrc(int);
    void setaluop(int);
    void setmemread(int);
    void setmemwrite(int);
    void setmemtoreg(int);
    void setregwrite(int);
    int getregdst();
    int getalusrc();
    int getaluop();
    int getmemread();
    int getmemwrite();
    int getmemtoreg();
    int getregwrite();

private:
    int ReadReg1 = 0;
    int ReadReg2 = 0;
    short SEOffset = 0;
    int WriteReg_20_16 = 0;
    int WriteReg_15_11 =0 ;
    int function = 0;
    
    //control
    int RegDst = 0;
    int ALUSrc = 0;
    int ALUOp = 0;
    int MemRead = 0;
    int MemWrite = 0;
    int MemToReg = 0;
    int RegWrite = 0;
};

#endif /* idex_h */
