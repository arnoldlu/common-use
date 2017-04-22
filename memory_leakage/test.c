#include <stdio.h>
#include <stdlib.h>

#define BUFF_LEN 64

char *func1(void)
{
    char *p = malloc(BUFF_LEN);

    return p;
}

void func2(void)
{
    char *p = malloc(BUFF_LEN);
}

int main(int argc, char *argv[])
{
    int i = 0, j = 0, count = 0;
    char *p = malloc(128);

  while(1)
  {
    for(i = 0; i < 10; i++)
    {
        p = func1();
        free(p);
    }

    for(j = 0; j < 5; j++)
    {
        func2();
    }
    sleep(2);
    printf("count = %d\n", count++);
  }
}
