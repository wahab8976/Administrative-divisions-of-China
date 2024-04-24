//This  file is similar to routes in NodejS backend Project

#include<iostream>
#ifndef CALCULATOR_H

#define CALCULATOR_H
class calculator{
    int num1,num2,total;
    public:
    void getNumbers();
    void ShowNumbers();
    calculator(){
        num1 =  0;
        num2  = 0;
        total = 0;
    }
};


#endif