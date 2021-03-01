#include <stdio.h>

extern int my_array[];

int main(int argc, char** argv)
{
  printf("Starting %s\n", argv[0]);
  printf("If the exercise crashes, then the array is less than 10 elements big\n");
  int bad_indices = 0;
  for(int i = 0; i < 10; ++i)
  {
    if(i != my_array[i])
    {
      printf("\t* Index %i isn't %i, it's %i\n", i, i, my_array[i]);
      ++bad_indices;
    }
    else
      printf("\t  Index %i is correct\n", i);
  }
  
  if(bad_indices == 0)
    printf("All indices are correct\n");
  else
    printf("%i indices were incorrect\n", bad_indices);
  return 0;
}