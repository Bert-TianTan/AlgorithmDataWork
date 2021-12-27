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
         // 寻找元素 arr[i] 合适的插入位置
        for(int j = i; j > 0; j--){
            if(datas[j] < datas[j-1]){
                int temp = datas[j];
                datas[j] = datas[j-1];
                datas[j-1] = temp;
            }
            else {
                break;
            }
            printArray(i);
        }

    }
    for(unsigned int i = 0; i < sizeof (datas)/sizeof (datas[0]); i++){
        printf("%d ", datas[i]);
    }
    printf("\n");
}

/**
 * 交换的位置少
 * @brief insertion_sort_high_v2
 * @param data
 * @param eleNum
 */
void insertion_sort_high_v2(int data[], int eleNum){
    if(eleNum < 1){
        return;
    }

    for(int i = 1; i <eleNum; ++i){
        int value = data[i];
        int j = i - 1;
        //查找插入的位置
        for(;j>=0; --j){
            if(data[j] > value){
                //数据移动
                data[j+1] = data[j];
            }
            else {
                //data[j]右边（j+1）的数据肯定比当前元素大
                break;
            }
        }
        //最后插入数据
        data[j+1] = value;
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
//        insertion_sort();
        insertion_sort_high_v2(datas, dataLen);
        for(int j = 1; j > 0; j--){
            printf("#############################\n");
        }
    }
}
