// Tutorial 014.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int readNumber();

void writeAnswer(int x); 

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };
    writeAnswer(x + y); 
    return 0;
}