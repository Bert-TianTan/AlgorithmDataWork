#include <iostream>

#include "./code/user_virtual/testmultivirtual.h"

#include "./code/system_learn/strtod_stol_test.h"


#include <cstring>
#include <stdio.h>
#include <stdlib.h>




using namespace std;


typedef struct Money {


    double operator()(double x){
        return x*2.0;
    }

} data;





int main()
{

    TestMultiVirtual testMultiVirtual;
    testMultiVirtual = TestMultiVirtual();

    testMultiVirtual.sayHelloWorld();

    cout << "Hello World!" << endl;

    const char* data = "123455";

    cout << strlen(data) <<endl;

    print_stod_stol();

    return 0;
}

