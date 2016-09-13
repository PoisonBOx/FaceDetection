cmake_minimum_required(VERSION 2.8)

project(NPD)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS}/opencv ${OpenCV_INCLUDE_DIRS}/opencv2 )

add_subdirectory(src)
