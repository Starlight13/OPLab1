#include <stdio.h>
#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;

int budget(students *array, int numberOfStudents){
    int notContracts = 0;
    for (int i = 0; i < numberOfStudents; i++){
        if(array[i].isContract == false) {
            int sum = 0;
            int len = array[i].gLen;
            for (int o = 0; o < len; o++)
                sum += array[i].g[o];
            array[i].avg = sum / array[i].gLen;
            notContracts += 1;
            sum = 0;
        }
        else{
            array[i].avg = 0;
        }
    }
    return notContracts;
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

