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
    
    
    item[1].name = "Bersh";
    item[1].g1 = 1;
    item[1].g2 = 4;
    item[1].g3 = 8;
    item[1].g4 = 2;
    item[1].g5 = 2;
    item[1].isContract = false;
    
    
    item[2].name = "PPPP";
    item[2].g1 = 6;
    item[2].g2 = 4;
    item[2].g3 = 3;
    item[2].g4 = 8;
    item[2].g5 = 9;
    item[2].isContract = false;
    
    
    item[3].name = "UUUU";
    item[3].g1 = 1;
    item[3].g2 = 1;
    item[3].g3 = 3;
    item[3].g4 = 3;
    item[3].g5 = 2;
    item[3].isContract = true;
    
    
    item[4].name = "DDDD";
    item[4].g1 = 1;
    item[4].g2 = 2;
    item[4].g3 = 4;
    item[4].g4 = 2;
    item[4].g5 = 5;
    item[4].isContract = false;
    return item;
}
