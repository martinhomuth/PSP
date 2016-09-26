#include "linked_list.h"
#include <stdlib.h>

void initialize_list(struct linked_list** to_initialize)
{
	*to_initialize = malloc(sizeof(struct linked_list *));
	z = malloc(sizeof(struct linked_list *));
	head = *to_initialize;
	(*to_initialize)->value = 0;
	(*to_initialize)->next = z;
}

struct linked_list* delete(struct linked_list* to_delete)
{
	return to_delete;
}

void append_to_list(struct linked_list *to_append)
{
	struct linked_list *ptr = head;
	while (ptr->next != z)
		ptr = ptr->next;

	to_append->next = z;
	ptr->next = to_append;
}

#ifdef TEST

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void test_initialization(void)
{
	struct linked_list *list = NULL;
	initialize_list(&list);
	assert(list == head);
	assert(list->next == z);
	assert(list->value == 0);
	printf(".");
}

void test_adding_elements(void)
{
	struct linked_list *list = NULL;
	initialize_list(&list);
	struct linked_list *to_add = malloc(sizeof(struct linked_list));
	to_add->value = 123;
	append_to_list(list, to_add);
	assert(list->next != NULL);
	assert(list->next == to_add);
	assert(list->next->value == 123);
	printf(".");
}

int main()
{
	printf("Testing linked_list\n Tests: ");
	test_initialization();
	printf("\n");
	return EXIT_SUCCESS;
}


#endif
