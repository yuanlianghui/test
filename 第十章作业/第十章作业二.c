#include<stdio.h>
int a(int fh[],int n );
int main()
{   int c=0;
	int b[5]={1,2,3,4,5};
    c=a(b,sizeof b/sizeof b[0]); 
    printf("%d",c);
	return 0;
	
} 
int a (int fh[],int n)
{
	int ret;
	int i;
	for(i=0;i<n;i++){
		if(fh[i]>fh[i+1]){
			ret=fh[i];
		} else ret=fh[i+1];
	} 
	return ret;
	
	
	return ret;
}
