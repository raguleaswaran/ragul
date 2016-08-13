#include<stdio.h>
int main(){
	long int t;
	scanf("%ld",&t);
long int res = getnextpal(t);
printf("%ld",res);
	
	return 0;
}
int getnextpal(int t){
	int rev,i;
	int temp;
int s = t;
for(i=s+1;i>0;i++){
	int k = i;
	rev=0;
	while(k!=0){
		int r = k%10;
		rev = rev*10+r;
		k=k/10;
	}
	if(rev == i){
		break;
	}
}
return rev;
}