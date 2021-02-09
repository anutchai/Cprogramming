#include <stdio.h>
#include <stdlib.h>
#include "hiredis.h"

int main(int argc, char **argv){
    const char *hostname = (argc > 1) ? argv[1] : "127.0.0.1";
    int port = (argc > 2) ? atoi(argv[2]): 6379;
    unsigned isunix = 0;
    redisContext *c = redisConnect(hostname, port);
    // struct timeval timout = {1, 5000}

}