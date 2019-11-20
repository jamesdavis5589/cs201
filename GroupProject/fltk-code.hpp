//
//  fltk-code.hpp
//  groupproject
//
//  Created by Sarah Carter on 11/18/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef fltk_code_hpp
#define fltk_code_hpp

#include <stdio.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Widget.H>

Fl_Window* CreateWindow();
void cFromChanged(Fl_Widget* f, void* data);
#endif /* fltk_code_hpp */
