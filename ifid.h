//
//  ifid.h
//  pipeline
//
//  Created by Jae Won Hyun on 11/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef ifid_h
#define ifid_h



class ifid{
public:
    ifid();
    void setinst(int);
    int getinst();
private:
    int inst = 0;
};

#endif /* ifid_h */
