#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 */
int main(void)
{
int random_num;

srand(time(0));
random_num = rand();
printf("%i\n", random_num);
return (0);
}
