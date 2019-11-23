//
//  fltk-code.cpp
//  groupproject
//
//  Created by Sarah Carter on 11/18/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
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

#include "fltk-code.hpp"
#include "proto.h"

Fl_Menu_Button* cFromBut = nullptr;
Fl_Menu_Button* cToBut = nullptr;
Fl_Input_Choice* fromUnit = nullptr;
Fl_Input_Choice* toUnit = nullptr;
Fl_Input* unitQty = nullptr;
Fl_Output* result = nullptr;
Fl_Button* convert = nullptr;
Fl_Button* quit = nullptr;

unit info;

void cFromChanged_cb(Fl_Widget* f, void* data){
    Fl_Input_Choice* fromUnit = (Fl_Input_Choice*)f;
    std::string fUn = fromUnit->value();
    std::istringstream fstr(fUn);
    fstr >> info.from;
}

void cToChanged_cb(Fl_Widget* t, void* data){
    Fl_Input_Choice* toUnit = (Fl_Input_Choice*)t;
    std::string tUn = toUnit->value();
    std::istringstream tstr(tUn);
    tstr >> info.to;
}

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


void cQtyChanged_cb(Fl_Widget* q, void* data){
    Fl_Input* unitQty = (Fl_Input*)q;
    std::string qtys = unitQty->value();
    std::istringstream uqty(qtys);
    uqty >> info.qty;
}

void OnConvertClicked_cb(Fl_Widget*, void* data){
    unit* info = (unit*)data;
    string TempError = "Temperature Unit Error";
    string TempError2 = "There is nothing lower than absolute 0!";
    int fromunit = UnitFromCode(*info);
    int tounit = UnitToCode(*info);
    double unitqty = (*info).qty;
    double conversion;
    if(!fromunit || !tounit){
        result->value("Please enter units and quantity to convert.");
    }
    
    if((fromunit == 1 && unitqty < -459.67) || (fromunit == 2 && unitqty < -273.15)
            || (fromunit == 3 && unitqty < 0)){
        result->value(TempError2.c_str());
    }
    else if(fromunit == 1){
        conversion = Fto(tounit, unitqty);
        if(conversion == -460)
            result->value(TempError.c_str());
        else
            result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 2){
        conversion = Cto(tounit, unitqty);
        if(conversion == -460)
            result->value(TempError.c_str());
        else
            result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 3){
        conversion = Kto(tounit, unitqty);
        if(conversion == -460)
            result->value(TempError.c_str());
        else
            result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 4){
        conversion = MMto(tounit, unitqty);
        result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 5){
        conversion = CMto(tounit, unitqty);
        result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 6){
        conversion = Mto(tounit, unitqty);
        result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 7){
        conversion = KMto(tounit, unitqty);
        result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 8){
        conversion = inchto(tounit, unitqty);
        result->value(std::to_string(conversion).c_str());
    }
    else if(fromunit == 9){
        conversion = footto(tounit, unitqty);
        result->value(std::to_string(conversion).c_str());
    }
    else{
        conversion = mileto(tounit, unitqty);
        result->value(std::to_string(conversion).c_str());
    }
}

void OnExitClicked_cb(Fl_Widget* w, void* data){
    if(!data) return;
    Fl_Window* win = (Fl_Window*)data;
    win->hide();
}

Fl_Window* CreateWindow(){
    Fl_Window* window = new Fl_Window(640, 270, "Unit Conversion");
    window->begin();
    
    fromUnit = new Fl_Input_Choice(150, 70, 150, 20, "Convert From");
    toUnit = new Fl_Input_Choice(400, 70, 150, 20, "Convert To");
    cFromBut = fromUnit->menubutton();
    cToBut = toUnit->menubutton();
    unitQty = new Fl_Input(270, 110, 100, 20, "Quantity to Convert");
    convert = new Fl_Button(270, 150, 100, 20, "Convert");
    result = new Fl_Output(160, 190, 320, 20, "Result");
    quit = new Fl_Button(270, 240, 100, 20, "Exit");
    
    for (auto& item : MenuItems) {
        cFromBut->add(item.second);
        cToBut->add(item.second);
    }
    fromUnit->callback(cFromChanged_cb);
    toUnit->callback(cToChanged_cb);
    unitQty->callback(cQtyChanged_cb);
    convert->callback(OnConvertClicked_cb, (void*)&info);
    quit->callback(OnExitClicked_cb, (void*)window);
    
    
    window->end();
    
    return window;
}
