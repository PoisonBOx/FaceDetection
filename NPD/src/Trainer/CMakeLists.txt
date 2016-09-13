set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
file(GLOB CURRENT_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.h ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(Trainer STATIC ${CURRENT_SOURCE})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src/Classifer)
include_directories(${PROJECT_SOURCE_DIR}/src/FeatureExtractor)

target_link_libraries(Trainer Classifer FeatureExtractor ${OpenCV_LIBS})


