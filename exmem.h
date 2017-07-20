//
//  exmem.h
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef exmem_h
#define exmem_h

class exmem{
public:
    exmem();
    void setaluresult(int);
    int getaluresult();
    void setswvalue(int);
    int getswvalue();
    void setwriteregnum(int);
    int getwriteregnum();
    
    void setmemread(int);
    void setmemwrite(int);
    void setmemtoreg(int);
    void setregwrite(int);
    int getmemread();
    int getmemwrite();
    int getmemtoreg();
    int getregwrite();

    
private:
    int ALUResult = 0;
    int SWValue = 0;
    int WriteRegNum = 0;
    
    // control
    int MemRead = 0;
    int MemWrite = 0;
    int MemToReg = 0;
    int RegWrite = 0;
};
#endif /* exmem_h */
