/*
James davis and Sarah Carter
CS201
October 3rd
Group Project - main.cpp
This program will utilise and implement functions created in the header files
*/

#include "proto.h"
#include "fltk-code.hpp"

//Run fltk window creation function
int main()
{
    Fl_Window* window = CreateWindow();
    window->show();
    
    return Fl::run();
}
