cmake_minimum_required(VERSION 2.8)
project(study_cmake)
set(VERSION 1.0)

SET(BUILD_PATH "${CMAKE_BINARY_BIN}")
SET(ROOT "${CMAKE_SOURCE_DIR}")

SET(CMAKE_BUILD_TYPE "Release")
#SET(CMAKE_BUILD_TYPE "Debug")

SET(CXXFLAGS "-fPIC -finline-functions -Wall -Winline -pipe -ffast-math -std=c++0x -ldl")
SET(CFLAGS "-fPIC -finline-functions -Wall -Winline -pipe -ffast-math -lstdc++ -ldl")


if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    MESSAGE(STATUS "Enable verbose log")
    ADD_DEFINITIONS(-D_VERBOSE_LOG_=1)
    SET(CFLAGS "-g ${CFLAGS}")
    SET(CXXFLAGS "-g ${CXXFLAGS}")
else()
    MESSAGE(STATUS "Disable verbose log")
    SET(CFLAGS "-O2 ${CFLAGS}")
    SET(CXXFLAGS "-O2 ${CXXFLAGS}")
endif()

SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} ${CXXFLAGS}")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} ${CXXFLAGS}")

SET(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGS} ${CFLAGS}")
SET(CMAKE_C_FLAGS_RELEASE "$ENV{CFLAGS} ${CFLAGS}")


add_executable(${PROJECT_NAME} src/main.c)
