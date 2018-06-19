### Hello, FLTK
Stable, debugged version of the FLTK middleware from Stroustrup's Principles and Practice, Chapters 12-16. The code in `main.cpp` implements the first example from Chapter 12, which draws a red rectangle. This project is a kind of hello world of PPPs vision of fltk, but the code is what you will probably want to use use for all of Chapters 12-16 in the book. This repository also includes the figures and other data used for all of Chapters 12-16 (e.g., image.jpg is used later in Chapter 12).

This code is Christiano's version of the library from the google group devoted to Stroustrup's book:

https://groups.google.com/forum/#!topic/ppp-public/Url2jZtSrVQ

For discussion, you can find a megathread on fixing the code here:

https://groups.google.com/forum/#!msg/ppp-public/BtlzdWGuQpQ/KuDN4u-SPKgJ

### Building the executable
This has been thoroughly tested in Linux (I'm on Ubuntu 16). There are multiple ways to build the same executable. I give three different ways below: you should just do whatever best meets your current needs.

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
