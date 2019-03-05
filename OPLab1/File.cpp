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

using namespace std;

int fileGetNumberOfLines() {
    char *fileName = "students.csv";
    int numberOfLines = 0;
    ifstream myfile (fileName);
    if (myfile.is_open()) {
        myfile >> numberOfLines;
        myfile.close();
    }
    return numberOfLines;
}

students *readFile() {
    char *fileName = "students.csv";
    int numberOfLines = fileGetNumberOfLines();
    string line;
    char contract[4];
    
    students* item = new students[numberOfLines];
    
    ifstream myfile (fileName);
    
    if (myfile.is_open()) {
        getline (myfile, line);
        for (int i = 0; i < numberOfLines; i++) {
            getline (myfile, line);
            sscanf(line.c_str(), "%[^,],%i,%i,%i,%i,%i,%[^,]", item[i].name, &item[i].g1, &item[i].g2, &item[i].g3, &item[i].g4, &item[i].g5, contract);
            item[i].isContract = (strcmp(contract, "TRUE") == 0 ? true : false);
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
