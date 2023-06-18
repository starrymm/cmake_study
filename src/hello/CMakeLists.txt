project(hello)

set(SOURCE_FILES
    hello.c
)

add_library(${PROJECT_NAME} SHARED  ${SOURCE_FILES})


