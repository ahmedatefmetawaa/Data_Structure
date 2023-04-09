/*
*@File    : stack_ds.c
*@Author  : Ahmed Attif
*@Brief   : implementation of stack data structure
**/
#include <stdio.h>
#include <stdlib.h>
#include "stack_ds.h"

stack_ds_t my_stack1;
uint32_t value_pop = zero;
uint32_t value_top = zero;
uint32_t value_size = zero;

int main()
{
return_status_t ret;

ret =stack_init(&my_stack1);

    if(ret == R_NOK)
    {
        printf("initialization failed!!\n");
    }

    else
    {
        ret= stack_push(&my_stack1 , 44);
        ret= stack_push(&my_stack1 , 55);
        ret= stack_push(&my_stack1 , 66);
        ret= stack_push(&my_stack1 , 77);
        ret= stack_push(&my_stack1 , 88);
        ret= stack_push(&my_stack1 , 99);//stack full!


        ret= stack_pop (&my_stack1 ,&value_pop);
        printf("stack pop value is =(%i)\n" , value_pop);
        ret= stack_pop (&my_stack1 ,&value_pop);
        printf("stack pop value is =(%i)\n" , value_pop);
        ret= stack_pop (&my_stack1 ,&value_pop);
        printf("stack pop value is =(%i)\n" , value_pop);
        ret= stack_pop (&my_stack1 ,&value_pop);
        printf("stack pop value is =(%i)\n" , value_pop);
        ret= stack_pop (&my_stack1 ,&value_pop);
        printf("stack pop value is =(%i)\n" , value_pop);
        ret= stack_pop (&my_stack1 ,&value_pop);
        if(ret == R_OK)
        {
            printf("stack pop value is =(%i)\n" , value_pop);
        }
        printf ("========================================= \n");

        ret= stack_push(&my_stack1 , 44);
        ret = stack_top(&my_stack1 , &value_top);
        if(ret == R_OK)
        {
            printf("stack top value is =(%i)\n" , value_pop);
        }
        printf ("========================================= \n");

        ret = stack_size(&my_stack1 , &value_size);
        if(ret == R_OK)
        {
            printf("stack size is =(%i)\n" , value_size);
        }
        printf ("========================================= \n");
       // ret= stack_display(&my_stack1);

    }

    return 0;
}
