#include <stdio.h>
#include "hash_tables.h"
/**
 * main - Entry point
 *
 * Description:
 * This program demonstrates collision detection in a hash table.
 * It creates a hash table, sets multiple key-val pairs to trigger collisions,
 * calculates indices for specific keys using the key_index function,
 * and checks for collisions. Finally, it deletes the hash table.
 *
 * Return: Always 0
 */

int main(void)
{
	hash_table_t *ht = hash_table_create(1024);
	unsigned long int index_hetairas, index_mentioner;
	unsigned long int index_heliotropes, index_neurospora;
	unsigned long int index_depravement, index_serafins;

	hash_table_set(ht, "hetairas", "value1");
	hash_table_set(ht, "mentioner", "value2");
	hash_table_set(ht, "heliotropes", "value3");
	hash_table_set(ht, "neurospora", "value4");
	hash_table_set(ht, "depravement", "value5");
	hash_table_set(ht, "serafins", "value6");
	hash_table_set(ht, "stylist", "value7");
	hash_table_set(ht, "subgenera", "value8");
	hash_table_set(ht, "joyful", "value9");
	hash_table_set(ht, "synaphea", "value10");
	hash_table_set(ht, "redescribed", "value11");
	hash_table_set(ht, "urites", "value12");
	hash_table_set(ht, "dram", "value13");
	hash_table_set(ht, "vivency", "value14");
	index_hetairas = key_index((unsigned char *)"hetairas", ht->size);
	index_mentioner = key_index((unsigned char *)"mentioner", ht->size);
	index_heliotropes = key_index((unsigned char *)"heliotropes", ht->size);
	index_neurospora = key_index((unsigned char *)"neurospora", ht->size);
	index_depravement = key_index((unsigned char *)"depravement", ht->size);
	index_serafins = key_index((unsigned char *)"serafins", ht->size);

	if (index_hetairas == index_mentioner)
	{
		printf("hetairas collides with mentioner\n");
	}
	if (index_heliotropes == index_neurospora)
	{
		printf("heliotropes collides with neurospora\n");
	}
	if (index_depravement == index_serafins)
	{
		printf("depravement collides with serafins\n");
	}
	hash_table_delete(ht);
	return (0);
}
