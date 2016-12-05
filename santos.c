/*santosh jung basnet
program: a program to learn relational operator
*/

#include<stdio.h>
#include<conio.h>

  int main()
  {

      int a;
      printf("enter the numbre");
      scanf("%d",&a);
      if (a>60&&a<80)
           {
          printf("first division");

           }

     if(a<60)
     {
         printf("second division");

     }


     if(a<50&&a>40)

     {
         printf("third division");
     }

     getch();
     return 0;



  }
