 #include <stdio.h> 
 #include <stdlib.h>
 #include <math.h> 
  int getdigits(int x); 
  int armstrong (int x, int nodigit);
  int main() 
  {
      int x, s, digit; 
      printf("Enter the number: "); 
      scanf("%d",&x);
      digit = getdigits(x); 
	  printf("\nThe number of digits are: %d\n", digit);
	  s = armstrong(x, digit); 
	  if (s==x)  
	      printf("\naven no. is an armstrong number.\n");
	   else 
	      printf("\nGiven no. is NOT an armstrong number.\n"); 
	 getch();
 }
 
 int getdigits(int x)
	  { 
        if (x==0)
           return 0;
        else 
           return (1+getdigits(x/10));
      }
   
    int armstrong (int x, int digit)
	{ 
	 int i, j, k=1; 
	  if (x==0)
	     return 0; 
	   j=x%10; 
	   for (i=1; i<=digit; i++)
    {
	   k=j*k;
	} 
	 return (k + armstrong(x/10, digit));
	    
}
