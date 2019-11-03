/*
James Davis
CS201
November 3rd
HW5 - fltk-trunc.cpp
This program will
*/

#pragma comment(lib, "fltk.lib")
#pragma comment(lib, "commct123")

#include <iostream>
#include "truncstruct.hpp"

#include <FL/Fl_Toggle_Round_Button.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Multi_Label.H>
#include <FL/Fl.H>

int main(int argc, char **argv)
{
	//default dimensions of stuff
	const int dh = 100;
	const int dw = 300;

	Fl_Window* window = new Fl_Window(dw, dh);
	window->begin();

	Fl_Box* box = new Fl_Box(20, 40, 300, 100, "Hello, World!");

	box->box(FL_UP_BOX);
	box->labelfont(FL_BOLD + FL_ITALIC);
	box->labelsize(36);
	box->labeltype(FL_SHADOW_LABEL);

	window->end();

	window->show(argc, argv);
	return Fl::run();
}