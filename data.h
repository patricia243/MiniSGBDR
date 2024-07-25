//
// Created by Patricia Thp on 23/07/2024.
//
#ifndef DATA_H
#define DATA_H
// Data types
typedef enum {
    INT,
    FLOAT,
    STRING
} data_type;

typedef struct {
    data_type type;
    int length;
} column;

//table
typedef struct {
    char *name;
    column *columns;
    int num_columns;
} Table;

#endif
