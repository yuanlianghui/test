#include<stdio.h>
void copy_arr(double a[5],double d[5],int g);
void copy_ptr(double b[5],double e[5],int h);
void copy_ptrs(double c[5],double f[5],double* i );
int main()
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,source+5);
	printf("%lf %lf %lf %lf",source[1],target1[1],target2[1],target3[1]);
	return 0;
	
}
void copy_arr(double a[5],double d[5],int g)
{
	int i;
	for(i=0;i<g;i++)
	     a[i]=d[i];
	     return;
}
copy_ptr(double b[5],double e[5],int h)
{
	int i;
	for(i=0;i<h;i++)
	*(b+i)=*(e+i);
	return;
}
copy_ptrs(double c[5],double f[5],double* i )
{
	int n;
	for(n=4;n>0;n--)
	c[4-n]=*(i-n-1);
	
	return;
}
