/*
James Davis
CS201
November 3rd
HW5 - fltk-trunc.cpp
This program will truncate user input (now with HUD! :D)
*/

/*
I need:
Label for instructions
Input box for text
Another input box for number inputs for truncate
A truncate button
A quit button
A label for output
*/

#pragma comment(lib, "fltk.lib")
#pragma comment(lib, "comctl32")

#include <iostream>
#include "truncstruct.hpp"

#include <FL/Fl_Window.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Box.H>
#include <FL/Fl.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>

//h-position, v-position, width, height

struct inout {
	std::string input1 = nullptr;
	std::string input2 = nullptr;

	std::string op = nullptr;
};

inout input1;
inout input2;
inout op;

void DefBox(Fl_Box* x)
{
	x->box(FL_UP_BOX);
	x->labelfont(FL_BOLD + FL_ITALIC);
	x->labelsize(24);
	x->labeltype(FL_SHADOW_LABEL);
}
void DefButt(Fl_Button* x)
{
	x->labelfont(FL_BOLD + FL_ITALIC);
	x->labelsize(24);
	x->labeltype(FL_SHADOW_LABEL);
}

void window_callback(Fl_Widget* widget, void*) 
{
	if (fl_ask("Do you really want to exit?"))
		((Fl_Window*)widget)->hide();
}


//WORK IN PROGRESS!!!
void callback2(Fl_Widget* widget, void*)
{
	StringInfo x = trunc8(input1);
	op << x.str << std::endl;
	op << x.len;
}




int main(int argc, char **argv)
{
	//default dimensions of objects
	const int dh = 50;
	const int dw = 200;
	const int bdh = 100;
	const int bdw = 300;


	Fl_Window* window = new Fl_Window(710, 600);
	window->callback(window_callback);
	window->begin();

	//boxes
	Fl_Box* title = new Fl_Box(10, 10, dw, dh, "FLTK Truncate");
	Fl_Box* out = new Fl_Box(500, 280, dw, dh, "Output");
	Fl_Box* in1 = new Fl_Box(500, 50, dw, dh, "Input");
	DefBox(title);
	DefBox(out);
	DefBox(in1);

	//description box
	Fl_Box* descr = new Fl_Box(10, 370, 690, 100, "Click on \"Quit\" to quit.\ntype an input into the \"Truncate\" field,\ndesired digits in the Main Input, then click \"Truncate\" to truncate the input");
	descr->box(FL_UP_BOX);
	descr->labelsize(20);
	descr->labeltype(FL_SHADOW_LABEL);

	//buttons
	Fl_Button* truncbutt = new Fl_Button(10, 170, dw, dh, "Truncate");
	Fl_Button* quitbutt = new Fl_Button(10, 300, dw, dh, "Quit");
	DefButt(truncbutt);
	DefButt(quitbutt);

	//input/output boxes
	Fl_Input* input1 = new Fl_Input(220, 30, bdw, bdh);
	Fl_Input* input2 = new Fl_Input(220, 140, bdw, bdh);

	Fl_Output* output=new Fl_Output(220, 260, bdw, bdh);

	//functionality
	quitbutt->callback(window_callback);
	truncbutt->callback(callback2);

	window->end();

	window->show(argc, argv);
	return Fl::run();
}