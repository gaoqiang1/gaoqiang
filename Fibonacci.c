#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Fib(int i)
{
    
        if(i == 0 || i == 1) {
         return i;   
        }
        else 
        {

        
            return Fib(i-1)+Fib(i-2);
        }
      
}
int main()
{
    int j = 0;
    scanf("%d",&j);
    getchar();
     system("pause");
    printf("The value of the number %d in Fibonacci term is %d\n",j,Fib(j));
     getchar();
    return 0;

}




