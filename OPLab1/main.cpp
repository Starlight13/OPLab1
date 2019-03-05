#include <iostream>
#include "Header.h"
using namespace std;

int main(){
    students *students = readFile();
    budget(students);
    sort(students);
    scholarship(students);
    
    return 0;
}


