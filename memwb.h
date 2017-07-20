//
//  memwb.h
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef memwb_h
#define memwb_h

class memwb{
public:
    memwb();
    void setlwdatavalue(int);
    int getlwdatavalue();
    void setaluresult(int);
    int getaluresult();
    void setwriteregnum(int);
    int getwriteregnum();
    int getmemtoreg();
    int getregwrite();
    void setmemtoreg(int);
    void setregwrite(int);
    
private:
    int LWDataValue = 0;
    int ALUResult = 0;
    int WriteRegNum = 0;
    
    //control
    int MemToReg = 0;
    int RegWrite = 0;
};

#endif /* memwb_h */
