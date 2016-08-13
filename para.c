#include <stdio.h>
#include <string.h>

int main(void) {
	char a[100],i,b=0,c=0,sum=1,maxsum=1;
	scanf("%s",a);
	int n=strlen(a);
	if(a[n-1]=='(')
	{
	     printf("-1");
	     return 0;
	}
	for(i=0;i<n;i++)
	{
	   if(a[i]=='(')
	   {
	        b++;
	   }
	   else if (a[i]==')')
	   {
	        c++;
	   }
	}
	if(b==c)
	{
	     for(i=0;i<n;i++)
	     {
	          sum=1;
	          while(a[i]==a[i+1])
	          {
	               sum++;
	               i++;
	          }
	          if(maxsum<sum)
	          {
	               maxsum=sum;
	          }
	     }
	     printf("%d",maxsum);
	}
	else
	{
	     printf("-1");
	}
	return 0;
}