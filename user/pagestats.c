#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char** argv){
    if(argc < 2){
        printf("please provide number of pages to use\n");
        exit(1);
    }
    pagestats(atoi(argv[1]));


    return 0;
}