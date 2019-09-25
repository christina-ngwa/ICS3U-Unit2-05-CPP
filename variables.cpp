// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: September 2019
// This program shows how global and local variables work


#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
     // This shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
    << " + " << variableY <<  " = " << variableZ << std::endl;
}


void globalVariable() {
     // This shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
    << " + " << variableY <<  " = " << variableZ << std::endl;
}

int main() {
    // This function calls local and global
    localVariable();
    globalVariable();
}
