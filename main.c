#include <stdio.h>
#include "cJSON.h"
#include "hello_world.h"

void main() {
    printf("hello cmake\n");
    cJSON *root = cJSON_CreateObject();
    printHelloWorld();
    return ;
}
