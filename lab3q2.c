#include <stdio.h>
int main(){
	int i = 1, a = 0;
	float b = 0, c = 0, avg = 0;
	while(i > 0){
	printf("enter your number : ");
		scanf("%d",&a);
		if(a > 0){
			b+=a;
			c++;
		}else{
			i=0;
		}	
	}
	avg = b/c;
	printf("sum = %.1f, avg = %.3f\n",b,avg);
	return 0;	
}
