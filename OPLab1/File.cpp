//
//  File.cpp
//  OPLab1
//
//  Created by dsadas asdasd on 3/5/19.
//  Copyright © 2019 dsadas asdasd. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "Header.h"


students *readFile() {
    students* item = new students[5];
    
    item[0].name = "Ivanov";
    item[0].g1 = 1;
    item[0].g2 = 3;
    item[0].g3 = 4;
    item[0].g4 = 2;
    item[0].g5 = 2;
    item[0].isContract = true;
    
    
    item[0].name = "Bersh";
    item[0].g1 = 1;
    item[0].g2 = 4;
    item[0].g3 = 8;
    item[0].g4 = 2;
    item[0].g5 = 2;
    item[0].isContract = false;
    
    
    item[0].name = "PPPP";
    item[0].g1 = 6;
    item[0].g2 = 4;
    item[0].g3 = 3;
    item[0].g4 = 8;
    item[0].g5 = 9;
    item[0].isContract = false;
    
    
    item[0].name = "UUUU";
    item[0].g1 = 1;
    item[0].g2 = 1;
    item[0].g3 = 3;
    item[0].g4 = 3;
    item[0].g5 = 2;
    item[0].isContract = true;
    
    
    item[0].name = "DDDD";
    item[0].g1 = 1;
    item[0].g2 = 2;
    item[0].g3 = 4;
    item[0].g4 = 2;
    item[0].g5 = 5;
    item[0].isContract = false;
    return item;
}
