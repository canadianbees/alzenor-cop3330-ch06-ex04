/*
 *  UCF COP3330 Fall 2021 Chapter 06 Exercise 04 Solution
 *  Copyright 2021 Celina Alzenor
*/

#ifndef ALZENOR_COP3330_CH06_EX04_NAME_VALUE_H
#define ALZENOR_COP3330_CH06_EX04_NAME_VALUE_H


#include <utility>

#include "std_lib_facilities.h"

using namespace std;

class Name_value {

private:
    int score{};
    string name;
public:

    //function prototypes
    Name_value(string x, int y);
    void setInfo(string title, int n);

    //getters
    string getName()
    {
        return name;
    };
    int getScore()
    {
        return score;
    };
};

#endif //ALZENOR_COP3330_CH06_EX04_NAME_VALUE_H
