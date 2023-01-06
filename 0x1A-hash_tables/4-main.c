#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "hash_tables.h"
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	value = hash_table_get(ht, "python");
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "python", value);
	return (EXIT_SUCCESS);
}
