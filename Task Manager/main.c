//
//  main.c
//  Task Manager
//
//  Created by Ayush Agrawal on 27/04/18.
//  Copyright © 2018 Ayush Agrawal. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//    STRUCTURE THAT WILL TAKE DATA OF A TASK
//enum priority{ yes=1, no=0};

struct todo{
    char *task;
    char *date;
//    enum priority bool;
};

//  Dynamic memory allocation to entity strings of structure

char* dynamic(char*ch,struct todo *a){
    
    char *p;
    unsigned long int len;
    len=strlen(ch);
    p=(char*)malloc(len+1);
    strcpy(p, ch);
    return p;
};

//  ADD TASKS

int main()
{
    struct todo *st = NULL, *ps;
    int menu;
    
    
    
    sos:
    //MENU
    printf("MENU:  \n");
    printf("ADD TAKS");
//    printf("\t 1: Add a Task \n");
//    printf("\t 2: Add Multiple Tasks of same date \n");
//    printf("Mark Completed Tasks \n");
//    printf("\t 3: Tasks Done\n");
    
    scanf("%d", &menu);
    
    switch (menu) {
        case 1:
            //Adding Tasks
            printf("Enter your tasks")
            break;
            
        default:
            goto sos;
            break;
    }
    

    
    return 0;
}
