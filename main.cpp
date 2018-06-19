#include "Simple_window.h"
#include "Graph.h"

int main()
{
  using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

  Point top_left{500, 100};    //will be top left corner of window

  Simple_window win {top_left, 600, 400, "Canvas"};

  Polygon poly;    //make a shape a polygon

  //add some points, set color of poly
  poly.add(Point{300, 200});
  poly.add(Point{350, 100});
  poly.add(Point{400, 200});
  poly.set_color(Color::red);

  win.attach (poly);   //attach poly to window

  win.wait_for_button();  //give control to the display engine
}
