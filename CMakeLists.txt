cmake_minimum_required(VERSION 3.5)
project(hello_fltk LANGUAGES CXX)
set(FLTK_DIR /usr/lib/fltk-1.4/build)
find_package(FLTK REQUIRED NO_MODULE)
include_directories(${FLTK_INCLUDE_DIRS})
add_executable(${PROJECT_NAME} WIN32
		main.cpp
		Graph.cpp
		GUI.cpp
		Simple_window.cpp
		Window.cpp )
target_link_libraries(${PROJECT_NAME} fltk fltk_images)  

