//
//  ifid.cpp
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <stdio.h>
#include "ifid.h"

ifid::ifid()
{
    
}

void ifid::setinst(int instruction)
{
    inst = instruction;
}

int ifid::getinst()
{
    return inst;
}
