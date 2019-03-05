#include <stdio.h>
#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;

void budget(students *array){
    for(int i = 0; i < 5; i++){
        if(array[i].isContract == false){
            array[i].avg = (array[i].g1+array[i].g2+array[i].g3+array[i].g4+array[i].g5)/5;
        }
        else{
            array[i].avg = 0;
        }
    }
}

void sort(students *array){
    students temp;
    for (int i = 1; i < 5; i++){
        temp = array[i];
        int j = i-1;
        while (j >= 0 && array[j].avg < temp.avg) {
            array[j+1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}

void scholarship(students *array){
    int num = 5*0.4;
    for(int i = 0; i < num; i++){
        cout << array[i].name << " " << array[i].g1 << " " << array[i].g2 << " " << array[i].g3 << " " << array[i].g4 << " " << array[i].g5 << " Avarage: " << array[i].avg << endl;
    }
    cout << array[num-1].avg;
}
