#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOLS 100 // Maximum number of symbols (functions)

typedef struct {
    char name[50]; // Function name
    int isStatic;
} SymbolEntry;

// Symbol table structure
typedef struct {
    SymbolEntry entries[MAX_SYMBOLS]; // Array of symbol entries
    int count; // Number of entries currently in the table
} SymbolTable;

#endif
