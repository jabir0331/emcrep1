#include <stdio.h>
int i, j;
int func(int *ptr)
{
  for(i=0; i<5; i++)
  {
    for(j=0; j<5; j++)
    {
      ptr++;
    }
  }
}
int main()
{
  
  int var[5][5];
  int *p = &var[0][0];

  printf

}
