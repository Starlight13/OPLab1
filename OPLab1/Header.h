#pragma once
#ifndef Header_h
#define Header_h
#include <fstream>
#include <string>

using namespace std;

struct students
{
    char name[40];
    int g1, g2, g3, g4, g5;
    bool isContract;
    int avg;
};

students *readFile();
int fileGetNumberOfLines();
void writeToFile(students *students);

void budget(students *array);

void sort(students *array);

void scholarship(students *array);

#endif
