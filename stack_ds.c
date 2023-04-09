#include <stdio.h>
#include <stdlib.h>
#include "stack_ds.h"
/**
* @brief check the stack full
* @param my_stack pointer point to the stack
* @retval stack status
*/
static stack_status_t full_stack(stack_ds_t *my_stack ){
    if(my_stack -> stack_ptr == MAX_ARRAY_SIZE-1 )
        return FULL_STACK;
    else
        return NOT_FULL;
}
/**
* @brief check the stack empty
* @param my_stack pointer to the stack
* @retval stack status
*/
static stack_status_t empty_stack(stack_ds_t *my_stack){
    if(my_stack -> stack_ptr == -1 )
        return EMPTY_STACK;
    else
        return NOT_FULL;
}
/**
* @brief initialize the stack pointer
* @param my_stack pointer point to the stack
* @retval initialization status of stack_ptr
*/

return_status_t stack_init(stack_ds_t *my_stack)
{
    return_status_t ret = R_NOK ;
    if (NULL == my_stack)
    {
        ret = R_NOK;
        printf("initialization is failed!!!.\n" );
    }
    else
    {
        ret = R_OK;
        my_stack -> stack_ptr = -1;
        printf("initialization is success.****WELCOME****\n");
    }
    return ret;
}

/**
* @brief push values in the stack
* @param my_stack pointer point to the stack
* @retval push status
*/
return_status_t stack_push(stack_ds_t *my_stack , uint32_t value)
{
return_status_t ret;

    if((NULL == my_stack)||(FULL_STACK==full_stack(my_stack)))
    {
        printf("value (%i) is not pushed to the stack!!!\n" ,value );
        ret = R_NOK;
    }

    else
    {
        my_stack -> stack_ptr++;
        my_stack -> data[my_stack->stack_ptr]=value;
        printf("value (%i) is pushed to the stack\n" ,value );
        ret = R_OK;
    }

   return ret;
}
/**
* @brief empty the stack from elements
* @param my_stack pointer point to the stack
* @retval pop status
*/
return_status_t stack_pop(stack_ds_t *my_stack , uint32_t *value)
{
    return_status_t ret;
    if((NULL == my_stack)|| (NULL == value )||(EMPTY_STACK==empty_stack(my_stack)))
    {
        printf("error stack is empty!!!\n"  );
        ret = R_NOK;
    }

    else
    {
        *value = my_stack -> data[my_stack->stack_ptr];
        my_stack-> stack_ptr--;
        printf("value (%i) is poped from the stack!!!\n" ,*value );
        ret = R_OK;
    }
        return ret;
}
/**
* @brief get the top element of the stack
* @param my_stack pointer to the stack
* @retval stack top status
*/
return_status_t stack_top(stack_ds_t *my_stack , uint32_t *value)
{
    return_status_t ret;
    if((NULL == my_stack)|| (NULL == value )||(EMPTY_STACK==empty_stack(my_stack)))
    {
        printf("error stack is empty!!!\n" );
        ret = R_NOK;
    }
    else
    {
        *value = my_stack -> data[my_stack->stack_ptr];
        printf("value (%i) is the top of the stack\n" ,*value );
        ret = R_OK;
    }
    return ret;
}

/**
* @brief get the stack size
* @param my_stack pointer to the stack
* @retval number of the stack elements
*/
return_status_t stack_size(stack_ds_t *my_stack , uint32_t *stack_size)
{
    return_status_t ret;
    if((NULL == my_stack)|| (NULL == stack_size ))
    {
        printf("error stack is empty!!!\n"  );
        ret = R_NOK;
    }
    else
    {
        *stack_size = my_stack -> stack_ptr +1 ;
        ret = R_OK;
    }
    return ret;
}
/**
* @brief display the stack elements
* @param my_stack pointer to the stack
* @retval stack data
*/
return_status_t stack_display(stack_ds_t *my_stack )
{
    return_status_t ret;
    sint32_t l_counter;
    if((NULL == my_stack)||(EMPTY_STACK==empty_stack(my_stack)))
    {
        printf("error stack is empty!!!\n");
        ret = R_NOK;
    }
    else
    {
        printf("stack data :");
        for(l_counter=my_stack->stack_ptr; l_counter>=zero;l_counter--)
        {
            printf("%i\t" , my_stack->data[l_counter]);
        }
        printf("\n");
        ret = R_OK;
    }
    return ret;
}

