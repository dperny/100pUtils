/* Eta Cohort Mini-Interpreter */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#include "miniInter.h"
/* #include "yourTree.h" */

void process(Tree tree, char *flag, char *XXX){
    switch(flag[0]) {
        case 'i':
            printf("Inserting value %d\n", atoi(XXX));
            break;
        case 'd':
            printf("Deleting value %d\n", atoi(XXX));
            break;
        case 'f':
            printf("Finding value %d\n", atoi(XXX));
            break;
        case 'v':
            printf("Visualizing tree\n");
            break;
        case 'V':
            printf("Verify the tree\n");
            break;
        case 'b':
            printf("Injecting fault of type %s into tree\n", XXX);
            break;
        case 'p':
            printf("Populating the tree with integers from file %s\n", XXX);
            break;
        case 'g':
            printf("Generating %d unique random integers to populate the tree with\n", atoi(XXX));
            break;
        case 's':
            printf("Printing statistics concerning current state of tree\n");
            break;
        case 'l':
            printf("Listing elements in %s traversal\n", XXX);
            break;
        case 'c':
            printf("Cleaning up the screen...\n");
            sleep(1);
            system("clear");
            mainMenu();
            break;
        case 'e':
            printf("EXITING INTERPRETER...\n");
            sleep(1);
            exit(1);
        default:
            printf("Error invalid input...\n");
            sleep(1);
            system("clear");
            mainMenu();
    }
}

void userInput(Tree tree){
    static char flag[512];
    static char XXX[512];
    printf("\n >>> ");
    scanf("%s", flag);
    scanf("%s", XXX);
    
    process(tree, flag, XXX);
}

void mainMenu(Tree tree){
    system("clear");
    printf(" PROBLEM 2: AVL Trees\n\n");

    printf(" MAIN MENU\n");
    printf("     i XXX --- Insert value XXX into the data structre\n");
    printf("     d XXX --- Delete value XXX from the data structure\n");
    printf("     f XXX --- Find value XXX in the data stricture\n");
    printf("     v     --- Visualize the data structure using graphviz\n");
    printf("     V     --- Verify the correctness of the data structure\n");
    printf("     b XXX --- Inject a fault of type XXX into the data structre\n");
    printf("     p XXX --- Populate the tree with a set of integers from file XXX\n");
    printf("     g XXX --- Generate XXX unique random numbers and populate the tree\n");
    printf("     s     --- Print statistics concerning the current state of the data structure\n");
    printf("     l XXX --- List the elements in the data structe; XXX should specify the traversal\n");
    printf("     c     --- Clean up the screen\n");
    printf("     e     --- EXIT INTERPRETER\n");

    while (1009) {
        userInput(tree);
    }
}

void interpreter(){
    /* make an instance of a tree root here once and pass it everywhere else*/
    
    mainMenu(tree);
}
