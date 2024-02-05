cmake_minimum_required(VERSION 3.16)

set(PROJECT cardcaster_engine)
project(${PROJECT} LANGUAGES CXX)

#BUILD FLAGS ####################################################################
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#PREPARING HEADER FILES ################################
file(GLOB_RECURSE EXTERNAL_HEADERS include/*.hpp)
file(GLOB_RECURSE SOURCES
    src/*.cpp
    src/*.hpp
    src/cards/*.cpp
    src/cards/*.hpp
    src/turn/*.cpp
    src/turn/*.hpp
    src/turn/phases/*.cpp
    src/turn/phases/*.hpp
    src/turn/phases/steps/*.cpp
    src/turn/phases/steps/*.hpp
    include/*.cpp)

#CREATING EXEC AND LINK IT WITH LIBS AND MANUALLY CREATED SOURCES ###############
add_library(${PROJECT} ${SOURCES} ${EXTERNAL_HEADERS})
target_include_directories(${PROJECT}
    PRIVATE src
    PUBLIC include)
target_link_libraries(${PROJECT})
add_compile_options("/std:c++latest")
target_compile_definitions(${PROJECT} PRIVATE cardcaster_engine_LIBRARY)
