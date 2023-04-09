#ifndef _STACK_DS_H
#define _STACK_DS_H
#include "std_types.h"

#define MAX_ARRAY_SIZE 5

typedef struct stack_ds{
    uint32_t stack_ptr;
    uint32_t data [MAX_ARRAY_SIZE];
}stack_ds_t;

typedef enum stack_status{
    FULL_STACK,
    EMPTY_STACK,
    NOT_FULL
}stack_status_t;

return_status_t stack_init(stack_ds_t *my_stack);
return_status_t stack_push(stack_ds_t *my_stack , uint32_t value);
return_status_t stack_pop(stack_ds_t *my_stack , uint32_t *value);
return_status_t stack_top(stack_ds_t *my_stack , uint32_t *value);
return_status_t stack_size(stack_ds_t *my_stack , uint32_t *stack_size);
return_status_t stack_display(stack_ds_t *my_stack );
#endif // _STACK_DS_H
