set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
file(GLOB CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.h ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(Detector STATIC ${CURRENT_SOURCE})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

target_link_libraries(Detector ${OpenCV_LIBS})


