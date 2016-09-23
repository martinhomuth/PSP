#ifndef __STANDARD_DEVIATION_H
#define __STANDARD_DEVIATION_H

#include "linked_list.h"

float mean(struct linked_list *);
int num_items(struct linked_list *);
float squared_sum_of_distance(struct linked_list *);
float variance(struct linked_list*);

#endif
