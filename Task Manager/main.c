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

char* dynamic(char*ch){
    
    char *p;
    unsigned long int len;
    len=strlen(ch);
    p=(char*)malloc(len+1);
    strcpy(p, ch);
    return p;
};

//  ADD TASKS
void addtask(struct todo *st ){
    //Add name of task
    char name[50];
    int i=0;
    
    printf("Enter task name: ");
    gets(name);
    (st+i)->task=dynamic(name);
    printf("Enter Date:\n");
    printf("Enter Day: ");
    gets((st+i)->date[0]);
    printf("Enter Month: ");
    gets((st+i)->date[0]);
    printf("Enter Year: ");
    gets((st+i)->date[0]);
    filewrite(st);
};
//  WRITING CONTENTS IN FILE

void filewrite(struct todo *st){
    FILE *fp;
    fp=fopen("/Users/ayush/Desktop/Task Manager/Task Manager/Data.txt","w");
    int i=0,j;
    fputs((st+i)->task, fp);
    fputc('\t', fp);
    for(j=0;j<3;j++){
        fputs((st+i)->date[j], fp);
        fputc('\t', fp);
    }
}


int main()
{
    struct todo *st = NULL;
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
            printf("Enter your tasks");
            addtask(st);
            break;
            
        default:
            goto sos;
            break;
    }
    

    
    return 0;
}
