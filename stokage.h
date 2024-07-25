//
// Created by Patricia Thp on 23/07/2024.
//

#ifndef STOKAGE_H
#define STOKAGE_H
#include "data.h"

void init_storage_manager();
void add_table(Table *table);
Table *get_table(char *table_name);
void drop_table(char *table_name);
void show_tables();
void show_table(char *table_name);
void insert_into_table(char *table_name, char *values);
void delete_from_table(char *table_name, char *condition);
void update_table(char *table_name, char *column, char *value, char *condition);


#endif //STOKAGE_H
