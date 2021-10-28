#ifndef TESTMULTIVIRTUAL_H
#define TESTMULTIVIRTUAL_H

#include "userone.h"
#include "usertwo.h"

class TestMultiVirtual:public UserOne, public UserTwo
{
public:
    TestMultiVirtual();
    void sayHelloWorld();
};

#endif // TESTMULTIVIRTUAL_H
