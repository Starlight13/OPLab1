#include <stdio.h>
#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;

int budget(students *array, int numberOfStudents ){
    int notContract = 0;
    for(int i = 0; i < numberOfStudents; i++){
        if(array[i].isContract == false){
            array[i].avg = (array[i].g1+array[i].g2+array[i].g3+array[i].g4+array[i].g5)/5;
            notContract += 1;
        }
        else{
            array[i].avg = 0;
        }
    }
    return notContract;
}

void sort(students *array, int numberOfStudents){
    students temp;
    for (int i = 1; i < numberOfStudents; i++){
        temp = array[i];
        int j = i-1;
        while (j >= 0 && array[j].avg < temp.avg) {
            array[j+1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}

void scholarship(students *array, int notContracts){
    int num = notContracts*0.4;
    for(int i = 0; i < num; i++){
        cout << array[i].name << " " << array[i].g1 << " " << array[i].g2 << " " << array[i].g3 << " " << array[i].g4 << " " << array[i].g5 << " Avarage: " << array[i].avg << endl;
    }
    cout << "Minimum avarage: " << array[num-1].avg;
}
