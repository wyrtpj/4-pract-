#include <stdio.h>

int main() 
{
  
  int colorful_balls[15];
  
  for(int i=0; i < 15; i++)
    {
        colorful_balls[i] = i + 1;
    }
  
    printf("содержимое коробки: ");
    
        for (int i = 0; i < 15; i++)
        {
            printf("%d", colorful_balls[i]);
        }
  
  int size = sizeof(colorful_balls) / sizeof(colorful_balls[0]);
  
  printf("В коробке colorful_balls помещается %d шариков.\n", size);
  return 0;
}
