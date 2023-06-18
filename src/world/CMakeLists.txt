project(world)

set(SOURCE_FILES
    world.c
)

add_library(${PROJECT_NAME} SHARED  ${SOURCE_FILES})


