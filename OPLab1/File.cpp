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
    } else
        cout << "Unable to open file";
    
    return item;
}

void writeToFile(students *students) {
    ofstream myfile("rating.csv");
    
    for (int i = 0; i < fileGetNumberOfLines(); i++) {
        myfile << students[i].name << "," << students[i].g1 << "," << students[i].g2 << "," << students[i].g3 << "," << students[i].g4 << "," << students[i].g5 << "," << students[i].isContract << endl;
    }
    
    myfile.close();
}
