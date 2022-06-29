#ifndef MAJOR_H
#define MAJOR_H
#include <vector>
#include <string>
#include <iostream>
#include "Base.h"
class Major :public Base
{
public:
    using Base::Base;
    void get_and_bild();
    void print_finalTree();
};
#endif