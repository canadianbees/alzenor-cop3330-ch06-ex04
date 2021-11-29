//
// Created by calze on 11/28/2021.
//

#include "Name_value.h"

#include <utility>
using namespace std;

//constructor
Name_value::Name_value(string x, int y)
{
    setInfo(std::move(x),y);
}

//setter
void Name_value::setInfo(string a, int b)
{
    name = std::move(a);
    score = b;
}