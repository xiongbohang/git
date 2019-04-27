#include<stdio.h>
//#include<a.h>
#define CONVERT 666
void main()
{
   char x='a';
   printf("please input the sentence\n");
//   int a=CONVERT;
//   printf("%c",a);  
  #ifdef CONVERT  
while(x!=NULL)    
  { scanf("%c",&x);  
   if(x>='A'&&x<='Z')
     x=x+32;
   else if(x>='a'&&x<='x')
     x=x-32;
   printf("%c",x); 



  }
  #endif 
}
        
