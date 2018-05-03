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
    char date[3][2];
//    enum priority bool;
};

//  Dynamic memory allocation to entity strings of structure

char* dynamic(char*ch, struct todo *a){
    
    char *p;
    unsigned long int len;
    len=strlen(ch);
    p=(char*)malloc(len+1);
    strcpy(p, ch);
    return p;
};

//  ADD TASKS
void addtask(struct todo *a ){
    //Add name of task
    char name[50];
    int i=0,j;
    FILE *fp;
    fp=fopen("/Users/ayush/Desktop/Task Manager/Task Manager/Data.txt","w");
    
    printf("Enter task name: ");
    getchar();
    gets(name);
    (a)->task=dynamic(name,a);
    printf("Enter Date:\n");
    printf("Enter Day: ");
    gets(a->date[0]);
    printf("Enter Month: ");
    gets(a->date[1]);
    printf("Enter Year: ");
    gets(a->date[2]);
//  WRITING CONTENTS IN FILE


    fputs((a+i)->task, fp);
    fputc('\t', fp);
    for(j=0;j<3;j++){
        fputs((a+i)->date[j], fp);
        fputc('\t', fp);
    }
}


int main()
{
    struct todo* t;
    int menu;

    sos:
    //MENU
    printf("MENU:  \n");
    printf("ADD TAKS");
    printf("\t 1: Add a Task \n");
//    printf("\t 2: Add Multiple Tasks of same date \n");
//    printf("Mark Completed Tasks \n");
//    printf("\t 3: Tasks Done\n");
    
    scanf("%d", &menu);
    
    switch (menu) {
        case 1:
            //Adding Tasks
            printf("Enter your tasks");
            addtask( t );
            break;
            
        default:
            goto sos;
            break;
    }
    

    
    return 0;
}
