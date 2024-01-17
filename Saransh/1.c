#include<stdint.h>
#include<stdio.h>
#include<stdbool.h>
typedef struct S{
    uint32_t a;
    short b;
    char *str;
    bool flag;
};

int main()
{
    struct S obj1;
    struct S* ptr = &obj1;
    ptr->a=69;
    ptr->b=145;
    ptr->str = "Hello NXP";
    ptr->flag = true;
    printf("%d\n",ptr->a);
    printf("%d\n",ptr->b);
    printf("%s\n",ptr->str);
    printf("%d\n",ptr->flag);
}