//
//  fltk-code.cpp
//  groupproject
//
//  Created by Sarah Carter on 11/18/19.
//  This code creates a graphical user interface in an FLTK window so there is
//  minimal user entry, which reduces the chance for input error (e.g. misspellings).
//

#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Menu_Item.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Menu_Button.H>
#include <FL/Fl_Input_Choice.H>
#include <sstream>
#include <map>
#include <iomanip>

#include "fltk-code.hpp"
#include "proto.h"

//Declare units globally to be used in following functions
Fl_Menu_Button* cFromBut = nullptr;
Fl_Menu_Button* cToBut = nullptr;
Fl_Input_Choice* fromUnit = nullptr;
Fl_Input_Choice* toUnit = nullptr;
Fl_Input* unitQty = nullptr;
Fl_Output* result = nullptr;
Fl_Button* convert = nullptr;
Fl_Button* quit = nullptr;

unit info;

//Obtain which unit the user wants to convert from
void cFromChanged_cb(Fl_Widget* f, void* data){
    Fl_Input_Choice* fromUnit = (Fl_Input_Choice*)f;
    std::string fUn = fromUnit->value();
    std::istringstream fstr(fUn);
    fstr >> info.from;
}

//Obain which unit the user wants to convert to
void cToChanged_cb(Fl_Widget* t, void* data){
    Fl_Input_Choice* toUnit = (Fl_Input_Choice*)t;
    std::string tUn = toUnit->value();
    std::istringstream tstr(tUn);
    tstr >> info.to;
}

void formatOutput(std::ostringstream &prec, double &conversion){
    if(conversion < 0.000)
        prec << conversion;
    else
        prec << std::setprecision(3) << conversion;
    result->value((prec.str()).c_str());
}

//Create a map of all conversion units available
std::map<int, const char*> MenuItems{
    {1, "Fahrenheit"},
    {2, "Celsius"},
    {3, "Kelvin"},
    {4, "Millimeters"},
    {5, "Centimeters"},
    {6, "Meters"},
    {7, "Kilometers"},
    {8, "Inches"},
    {9, "Feet"},
    {10, "Miles"}
};

//Obtain quantity user wants to convert
void cQtyChanged_cb(Fl_Widget* q, void* data){
    Fl_Input* unitQty = (Fl_Input*)q;
    std::string qtys = unitQty->value();
    std::istringstream uqty(qtys);
    uqty >> info.qty;
}

//Run conversion functions when "Convert" button is clicked
void OnConvertClicked_cb(Fl_Widget*, void* data){
    unit* info = (unit*)data;

    std::string TempError = "Temperature Unit Error";
    std::string TempError2 = "There is nothing lower than absolute 0!";
    std::string LengthError = "Length Unit Error";

    //Get string units converted to ints
    int fromunit = UnitFromCode(*info);
    int tounit = UnitToCode(*info);

    double unitqty = (*info).qty;
    double conversion;
    std::ostringstream prec;
    
    //Make sure from and to units have been selected
    if(!fromunit || !tounit){
        result->value("Please enter units and quantity to convert.");
    }
    
    //If user is converting temperature units, make sure their temperature is not
    //below absolute zero and that both units are temperature.
    else if((fromunit < 4 && tounit > 3)){
        result->value(TempError.c_str());
    }
    else if((fromunit == 1 && unitqty < -459.67) || (fromunit == 2 && unitqty < -273.15) || (fromunit == 3 && unitqty < 0)){
        result->value(TempError2.c_str());
    }
    
    //Check that conversion units are all length
    else if ((fromunit > 3 && fromunit <= 10) && (tounit < 4 || tounit > 10)){
        result->value(LengthError.c_str());
    }
    
    else
        switch (fromunit){
            case 1:
                conversion = Fto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 2:
                conversion = Cto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 3:
                conversion = Kto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 4:
                conversion = MMto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 5:
                conversion = CMto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 6:
                conversion = Mto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 7:
                conversion = KMto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 8:
                conversion = inchto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 9:
                conversion = footto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
            case 10:
                conversion = mileto(tounit, unitqty);
                formatOutput(prec, conversion);
                break;
        }
}

//Close window when "Exit" button is clicked
void OnExitClicked_cb(Fl_Widget* w, void* data){
    if(!data) return;
    Fl_Window* win = (Fl_Window*)data;
    win->hide();
}

//Create the main program window
Fl_Window* CreateWindow(){
    Fl_Window* window = new Fl_Window(640, 270, "Unit Conversion");
    window->begin();
    
    //Create all inputs and buttons
    fromUnit = new Fl_Input_Choice(150, 70, 150, 20, "Convert From");
    toUnit = new Fl_Input_Choice(400, 70, 150, 20, "Convert To");
    cFromBut = fromUnit->menubutton();
    cToBut = toUnit->menubutton();
    unitQty = new Fl_Input(270, 110, 100, 20, "Quantity to Convert");
    convert = new Fl_Button(270, 150, 100, 20, "Convert");
    result = new Fl_Output(160, 190, 320, 20, "Result");
    quit = new Fl_Button(270, 240, 100, 20, "Exit");
    
    //Fill menu button list choices
    for (auto& item : MenuItems) {
        cFromBut->add(item.second);
        cToBut->add(item.second);
    }
    //Tie callbacks to fltk objects
    fromUnit->callback(cFromChanged_cb);
    toUnit->callback(cToChanged_cb);
    unitQty->callback(cQtyChanged_cb);
    convert->callback(OnConvertClicked_cb, (void*)&info);
    quit->callback(OnExitClicked_cb, (void*)window);
        
    window->end();
    
    return window;
}
