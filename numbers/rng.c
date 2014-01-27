#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(int argc, char *argv[]) {
    // If insufficient number of arguments
    if(argc < 3) {
        printf("ERROR:  Invalid number of arguments\n");
        printf("USAGE: %s NumOfRandInts RangeOfRandNums\n", argv[0]);
        return 1;
    }

    // Make randomness seed from time (A constant, ever changing variable)
    srand(time(NULL));
    int randNums = atoi(argv[1]);
    int range    = atoi(argv[2]);
    
    // Write numbers to a file.
    int i=0;
    while( i < randNums ){
        printf("%d\n", (rand()%range)+1 );
        i++;
    }
    
    return 0;
}
