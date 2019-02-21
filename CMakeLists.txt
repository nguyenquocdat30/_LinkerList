cmake_minimum_required (VERSION 2.6)
project (LinkerList)

include_directories()
file(GLOB SOURCES "*.cpp")

#add the executable
add_executable(LinkerList ${SOURCES})
