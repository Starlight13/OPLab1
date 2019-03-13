//
//  File.cpp
//  OPLab1
//
//  Created by dsadas asdasd on 3/5/19.
//  Copyright © 2019 dsadas asdasd. All rights reserved.
//

#include <stdio.h>
#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;

int fileGetNumberOfLines() {
    char *fileName = "students.csv";
    int numberOfLines = 1;
    string line;
    ifstream myfile (fileName);
    if (myfile.is_open()) {
        while (getline (myfile, line))
            numberOfLines++;
        myfile.close();
    }
    return numberOfLines - 1;
}

students *readFile() {
    char *fileName = "students.csv";
    int numberOfLines = fileGetNumberOfLines();
    string line;
    char contract[4];
    
    students* item = new students[numberOfLines];
    
    ifstream myfile (fileName);
    if (myfile.is_open()) {
        for (int i = 0; i < numberOfLines; i++) {
            getline (myfile, line);
            
            
            int next = 1, passName = 0;
            char *ttt = new char[1];
            
            int aaai = 0;
            
            item[i].name[0] = '\0';
            for (int o = 0; o < (int)line.length(); o++) {
                if (line[o] >= 'A' && line[o] <= 'z') {
                    if (passName == 0) {
                        ttt[0] = (char)line[o];
                        strcat(item[i].name, ttt);
                    } else {
                        ttt[0] = (char)line[o];
                        strcat(contract, ttt);
                    }
                    next = 0;
                } else if (line[o] >= '0' && line[o] <= '9') {
                    if (next) {
                        item[i].g[aaai] = (line[o] - '0');
                        aaai++;
                    } else {
                        item[i].g[aaai - 1] *= 10;
                        item[i].g[aaai - 1] += (line[o] - '0');
                    }
                    next = 0;
                } else {
                    passName = 1;
                    next = 1;
                }
                item[i].gLen = aaai;
            }
            
            sscanf(line.c_str(), "%[^,],%i,%i,%i,%i,%i,%[^,]", item[i].name, &item[i].g1, &item[i].g2, &item[i].g3, &item[i].g4, &item[i].g5, contract);
            item[i].isContract = (strcmp(contract, "TRUE") == 0 ? true : false);
            
            cout << item[i].name  << " ] ";
            
            for (int p = 0; p < aaai; p++) {
                cout << item[i].g[p] << " | ";
            }
            
            cout  << " [ " << item[i].isContract << endl;
        }
        myfile.close();
    } else{
        cout << "Unable to open file\n";
        exit(1);
    }
    return item;
}

void writeToFile(students *students, int scholarship) {
    ofstream myfile("rating.csv");
    
    for (int i = 0; i < scholarship; i++) {
        myfile << students[i].name << "," << students[i].avg << endl;
    }
    
    myfile.close();
}
