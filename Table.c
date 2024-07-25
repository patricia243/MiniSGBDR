//
// Created by Patricia Thp on 23/07/2024.
#include "table.h"

void create_table(char *table_name, char *columns, char *data_types, int num_columns) {
    // Create a table
    Table *table = create_table_instance(table_name, columns, data_types, num_columns);
    // Add the table to the storage manager
    add_table(table);
}
