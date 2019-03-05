#include "Header.h"

int main(int argc, const char * argv[]) {
    students *students = readFile();
//    int i = 0;
//
//    while (i < fileGetNumberOfLines()) {
//        cout << students[i].name << " [" << students[i].g1 << "]" << "[" << students[i].g2 << "]" << "[" << students[i].g3 << "]" << "[" << students[i].g4 << "]" "[" << students[i].g5 << "]" << " | " << students[i].isContract << endl;
//        i++;
//    }
    writeToFile(students);
    
    return 0;
}


