#ifndef VARIABLES_ASSIGN_H
#define VARIABLES_ASSIGN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct {
    char name[100];
    char type[40];
} Variable;

#define MAX_VARIABLES 100

typedef struct {
    Variable entries[MAX_VARIABLES];
    int count;
} VariableList;


#endif // VARIABLES_ASSIGN_H