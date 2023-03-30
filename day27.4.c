#include<stdio.h>

int main(){
	
  char str[50] ;  
  char *pt ;
  int i=0;
  
  printf("Find or Calculate Length of String... \n");
  
  printf("\nEnter Any string [NOT MORE THAN 50 CHAR] : ");
  gets(str);
  
  pt = str ;
  
  while(*pt != '\0'){
  	
    i++ ;
    pt++ ;
    
  }
  
  printf("\n\nLength of String : %d",i);

  return 0;
}
