#pragma once

struct students
{
    char name[40];
    int g1, g2, g3, g4, g5;
    bool isContract;
};

students *readFile();
int fileGetNumberOfLines();
void writeToFile(students *students);
