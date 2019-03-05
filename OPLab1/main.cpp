#include <iostream>
#include "Header.h"
using namespace std;

int main(){
    students *students = readFile();
    int numberOfStudents = fileGetNumberOfLines();
    int notContracts = budget(students, numberOfStudents);
    sort(students, numberOfStudents);
    scholarship(students, notContracts);
    
    return 0;
}


