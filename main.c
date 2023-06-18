#include <stdio.h>
#include "cJSON.h"
#include "hello.h"

void main() {
    printf("hello cmake\n");
    cJSON *root = cJSON_CreateObject();
    printHello();
    return ;
}
