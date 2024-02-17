cmake_minimum_required(VERSION 3.27)
project(binbogami_desktop)

set(CMAKE_CXX_STANDARD 14)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(binbogami_desktop main.cpp)

target_link_libraries(binbogami_desktop ${GTK3_LIBRARIES})
