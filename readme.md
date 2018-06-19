### Hello, FLTK
Stable, debugged version of the FLTK middleware from Stroustrup's Principles and Practice, Chapters 12-16. The code in `main.cpp` implements the first example from Chapter 12, which draws a red triangle. It's the `hello world` for Stroustrup's interface withi FLTK. But the header and program files implement the interface that is used for all of Chapters 12-16. This repository also includes the figures and other data used for the examples (e.g., `image.jpg` is used in Section 12.7.9).

This code is Christiano's version of the library (`ch12new`) from the google group devoted to Stroustrup's book:

https://groups.google.com/forum/#!topic/ppp-public/Url2jZtSrVQ

You can also find a megathread on fixing the code here:

https://groups.google.com/forum/#!msg/ppp-public/BtlzdWGuQpQ/KuDN4u-SPKgJ

### Building the executable
This has been thoroughly tested in Linux (I'm on Ubuntu 16). There are multiple ways to build the executable `hello_fltk`. I give three different ways below: just pick the approach that best matches your current needs. For instance, if you built FLTK using cmake, you may want to use cmake to build your projects, and other build methods may give errors. The best way to find out is trial and error.

#### From the command line
From the project directory:

    g++ -w -Wall -std=c++11 Graph.cpp Window.cpp GUI.cpp Simple_window.cpp main.cpp `fltk-config --ldflags --use-images` -o hello_fltk
    ./hello_fltk

#### Using make
From the project directory invoke the included Makefile (provided by Christiano):    

    make
    ./hello_fltk

To clean up the object files and executable from the directory you can enter:

    make clean

#### Using cmake
From the project directory:

    mkdir build
    cmake ..  #cmake makes the Makefile, using CMakeLists.txt
    make      #builds the executable using the Makefile
    ./hello_fltk

All the files involved in building will go into the build directory. Note if you don't have cmake installed: `sudo apt-get install cmake`.

### Acknowledgments
Christiano produced this extremely well-behaved version of Stroustrup's middleware and made it available to everyone. The folks who build/maintain FLTK were very helpful in getting the `cmake` build working: https://groups.google.com/forum/#!forum/fltkgeneral
