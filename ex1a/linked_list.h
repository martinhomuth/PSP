#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

struct linked_list {
	float value;
	struct linked_list *next;
};

struct linked_list *head;
struct linked_list *z;

void initialize_list(struct linked_list **);
struct linked_list *delete(struct linked_list*);
void append_to_list(struct linked_list*);

#endif
