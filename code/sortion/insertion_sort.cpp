#include "insertion_sort.h"
#include "stdio.h"

int datas[] = {9, 2, 3, 4, 1, 8, 11, 7, 5};

unsigned dataLen = sizeof (datas)/sizeof (datas[0]);


void printArray(int index){
    printf("\n");
    printf("#############################\n");
    printf("number %d, data:", index);
    for(unsigned int k = 0; k < sizeof (datas)/sizeof (datas[0]); k++){
        printf("%d ", datas[k]);
    }
    printf("\n");
    printf("#############################\n");
}

void insertion_sort(){
    printf("data array length = %d \n", dataLen);
    for(unsigned int i = 1; i < sizeof (datas)/sizeof (datas[0]); i++){
        for(int j = i; j > 0; j--){
            if(datas[j] < datas[j-1]){
                int temp = datas[j];
                datas[j] = datas[j-1];
                datas[j-1] = temp;
            }
            printArray(i);
        }

    }
    for(unsigned int i = 0; i < sizeof (datas)/sizeof (datas[0]); i++){
        printf("%d ", datas[i]);
    }
    printf("\n");
}





void shell_sort(){

}

namespace Sortion {
    void sortSample(){
        insertion_sort();
    }
}
