#include <stdio.h>

int main() 
{
  int blue_balls[5];
  
  for(int i=0; i<5; i++)
    {
        blue_balls[i]=i+1;
    }
    
    printf("содержимое коробки: ");
    
        for (int i=0; i<5 ; i++)
        {
            printf("%d" , blue_balls[i]);
        }
  int size = sizeof(blue_balls) / sizeof(blue_balls[0]);
  
  printf("В коробке blue_balls помещается %d шариков.\n", size);
  
  return 0;
}
