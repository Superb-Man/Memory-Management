#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/riscv.h"


int main(int argc, char** argv){
    //pagestats(1) ;
    int c = 10 ;
    printf("c: %d\n", c);
    // fork() ;
    // fork() ;
    char* pa = sbrk(c * PGSIZE);

    for(int i = 0; i < 100000; ++i){
        for(int j = 0; j < 50000; ++j)
            pa[(i % c) * PGSIZE] = 'a';
    }
    for(int j = 0 ; j < 10 ; j++) {
        printf("%c",pa[j*PGSIZE]) ;
    }
    printf("\n") ;
    pagestats(1) ;



    return 0;
}