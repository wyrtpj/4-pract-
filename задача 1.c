#include <stdio.h>

int main()
{
    int red_balls[10];
    
      for(int i=0; i<10; i++)
      {
          red_balls[i]=i+1;
      }
    
    printf("содержимое коробки: ");
    
        for (int i=0; i<10; i++)
        {
            printf("%d" , red_balls[i]);
        }
     
    int size = sizeof(red_balls) / sizeof(red_balls[0]);
    
    printf ("В коробке помещается %d шариков.\n",size);
    
    return 0;
}
