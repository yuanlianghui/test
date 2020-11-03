#include<stdio.h>
#define h 3
#define l 5
void show(int zs[][l],int n);
void fbxs(int zs[][l],int n);
int main()
{
	int sz[3][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	int fz[h][l];
	show(sz,h);
	fbxs(sz,h);
	return 0;
} 
void show (int zs[][l],int n)
{   int i,q,ret;
	ret =0;
	for(i=0;i<n;i++){
		for(q=0;q<l;q++){
			printf("%d",zs[i][q]);
			ret++;
			if(ret%5==0) printf("\n");
			
		}
	}
	return;
}
void fbxs(int zs[][l],int n)
{
	int i,q,ret;
	ret =0;
	for(i=0;i<n;i++){
		for(q=0;q<l;q++){
			zs[i][q]=2*zs[i][q];
			printf("%d",zs[i][q]);
			ret++;
			if(ret%5==0) printf("\n");
			
		}
	}
	return;
}
