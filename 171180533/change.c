#include<stdio.h>
void main()
{
   char x='a';
   printf("please input the sentence");
  while(x!=NULL)    
  { scanf("%c",&x);  
   if(x>='A'&&x<='Z')
     x=x+32;
   else if(x>='a'&&x<='x')
     x=x-32;
   printf("%c",x); 




  }
}
        
