project(hello_world)

set(SOURCE_FILES
    hello_world.c
)

add_subdirectory(hello)
add_subdirectory(world)
include_directories(./hello)
include_directories(./world)

add_library(${PROJECT_NAME} SHARED  ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE hello world)


