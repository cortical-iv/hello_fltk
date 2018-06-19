
//
// This is a GUI support code to the chapters 12-16 of the book
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"

//------------------------------------------------------------------------------

Simple_window::Simple_window(Point xy, int w, int h, const string& title) :
    Window(xy,w,h,title),
    next_button(Point{x_max()-70,0}, 70, 20, "Next", cb_next),
    button_pushed(false)
{
    attach(next_button);
}

//------------------------------------------------------------------------------
void Simple_window::wait_for_button()
// modified event loop:
// handle all events (as per default), quit when button_pushed becomes true
// this allows graphics without control inversion
{
    // Simpler handler
    while (!button_pushed) 
	    Fl::wait();
    button_pushed = false;
    Fl::redraw();
}

//------------------------------------------------------------------------------

void Simple_window::cb_next(Address, Address pw)
// call Simple_window::next() for the window located at pw
{  
    reference_to<Simple_window>(pw).next();    
}

//------------------------------------------------------------------------------

void Simple_window::next()
{
    button_pushed = true;
}

//------------------------------------------------------------------------------
