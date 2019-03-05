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

int budget(students *array, int numberOfStudents);

void sort(students *array, int numberOfStudents);

void scholarship(students *array, int notContract);

#endif
