#include <iostream>

#include "./code/user_virtual/testmultivirtual.h"

using namespace std;

int main()
{

    TestMultiVirtual testMultiVirtual;
    testMultiVirtual = TestMultiVirtual();

    testMultiVirtual.sayHelloWorld();

    cout << "Hello World!" << endl;

    return 0;
}

