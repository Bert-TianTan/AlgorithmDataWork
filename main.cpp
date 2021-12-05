#include <iostream>

#include "./code/user_virtual/testmultivirtual.h"

#include "./code/system_learn/strtod_stol_test.h"


#include <cstring>
#include <stdio.h>
#include <stdlib.h>



//////////////////////////////操作符重载以及模板函数的使用 START ////////////////////////////////////
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



//////////////////////////////操作符重载以及模板函数的使用 END ////////////////////////////////////

int main()
{

    TestMultiVirtual testMultiVirtual;
    testMultiVirtual = TestMultiVirtual();

    testMultiVirtual.sayHelloWorld();

    cout << "Hello World!" << endl;

    const char* data = "123455";

//    cout << strlen(data) <<endl;

    print_stod_stol();


    //运算符重写 函数对象
    Money datas;
    cout << "operator = " << datas(5) << endl;

    cout << "operator sum2= " << sum2(datas, 2, 6) << endl;


    cout << "sum template  = "<<sum(negate<double>(), 4, 6) << endl;



    return 0;
}

