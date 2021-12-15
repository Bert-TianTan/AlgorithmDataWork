#include <iostream>

#include "./code/user_virtual/testmultivirtual.h"

#include "./code/system_learn/strtod_stol_test.h"


#include <cstring>
#include <stdio.h>
#include <stdlib.h>


#include "./code/data_struct/link_list/int_sll_node_list.h"


#include "./code/data_struct/link_list/doubly_linked_list.h"

////////////////////////////// START ////////////////////////////////////

using namespace std;


typedef struct Money {


    double operator()(double x){
        return x*2.0;
    }


} Money_S;


double sum2(Money_S mobj, int n, int m){
    double result = 0;
    for(int i = n; i<=m;i++){
        result+= mobj(i);
    }
    return result;
}



#include <functional>

template<class F> double sum(F f, int n, int m){

    double result = 0;
    for(int i = n; i<=m;i++){
        result+= f(i);
    }
    return result;
}


void test(){
    TestMultiVirtual testMultiVirtual;
    testMultiVirtual = TestMultiVirtual();

    testMultiVirtual.sayHelloWorld();

    cout << "Hello World!" << endl;

    const char* data = "123455";

    cout << strlen(data) <<endl;

    print_stod_stol();

    Money datas;
    cout << "operator = " << datas(5) << endl;

    cout << "operator sum2= " << sum2(datas, 2, 6) << endl;


    cout << "sum template  = "<<sum(negate<double>(), 4, 6) << endl;
}


////////////////////////////// END ////////////////////////////////////


void insertSort(int data[], int n){
    if(n < 1)
        return;
    for(int i = 1; i < n; i++){
        int j = i - 1;
        for(; j>= 0; j--){
            if(data[j] > data[i]){
                data[j+1] = data[j];
            }
            else {
                break;
            }
        }
        data[j+1] = data[i];
    }

}

int main()
{


//    LinkedSpace::testIntLinkedList();
//    Doubly_Linked_List_Space::testDoubly_Linked_List();

    int datas[] = {2, 3, 4, 0, 8, 7, 5};

    insertSort(datas, 3);
    for(int i = 0; i < sizeof (datas)/sizeof (datas[0]); i++){
        printf("index %d, value = %d\n", i, datas[i]);
    }

    return 0;

}

