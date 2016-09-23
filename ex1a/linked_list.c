#include "linked_list.h"

void initialize_list(struct linked_list* to_initialize)
{

}

struct linked_list* delete(struct linked_list* to_delete)
{

}

void append(struct linked_list *to_append)
{

}

#ifdef TEST

#include <assert.h>

void test_initialization(void)
{
	struct linked_list *list;
	initialize_list(list);
	assert(list == head);
	assert(list->next == z);
	assert(list->value == 0);
}

int main()
{
	test_initialization();
}


#endif
