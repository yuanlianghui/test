#include<stdio.h>
#include<stdlib.h>
#define lin 30
int  get_cj(int *p1,int *p2);
void jscj(int *p3,int n1);
void zxsc(int *p4,int *p5,int n2);
void fxsc(int *p6,int *p7,int n3);
void cz(int *p8,int *p9,int n4);
void fl(int *p10,int n5);
void list(int *p11,int*p12,int n6);
void xhsc(int *p13,int *p14,int n7);
int main()
{	int num,n;
    int xuehao[lin];
    int cj[lin];
    printf("1.input record\n");
    printf("2.ca1culate total and average\n");
    printf("3.sort indeccending by score\n");
    printf("4.sort in ascend by score\n");
    printf("5.sort in aceding\n");
    printf("6.serch by id card\n");
    printf("7.analysis\n");
    printf("8.list cord\n");
    printf("9.exit\n");
    printf("please enter you choice :\n");
    scanf("%d",&num);
    while(n!=0)
    {
        switch(num)
            {
            case 1:
                n=get_cj(xuehao,cj);
                break;
            case 2:
                jscj(cj,n);
                break;
            case 3:
                zxsc(xuehao,cj,n);
                break;
            case 4:
                fxsc(xuehao,cj,n);
                break;
            case 5:
                xhsc(xuehao,cj,n);
                break;
            case 6:
                cz(xuehao,cj,n);
                break;
            case 7:
                fl(cj,n);
                break;
            case 8:
                list(xuehao,cj,n);
                break;
            case 9:
                exit(0);
            }
       printf("please enter you choice :\n");
       scanf("%d",&num);
       getchar();
    }
    return 0;
}
int get_cj(int *p1,int *p2)
{
	int i;
	int n;
	printf("how many student? please enter:\n");
	scanf("%d",&n);
	getchar();
	printf("please enter you chengji and you name,xuehao first.\n");
  	for(i=0;i<n;i++)
	  {
  	    scanf("%d %d",p1+i,p2+i);
  	    getchar();

	  }
	return n;
}
void jscj(int *p3,int n1)
{
	int i=0;
	float sum=0;
	float average;
	for(i=0;i<n1;i++)
		{
				sum=sum+p3[i];
		}
	average=sum/n1;
	printf("sum is %f and average is %f\n",sum,average);
}
void zxsc(int *p4,int *p5,int n2)
{
	int i,j,temp1,temp2;
	for(i=0;i<n2;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if(p5[i]<p5[j])
			{
				temp1=p4[j];
				p4[j]=p4[i];
				p4[i]=temp1;

				temp2=p5[j];
				p5[j]=p5[i];
				p5[i]=temp2;

			}
		}
	}
	for(i=0;i<n2;i++)
	{
		printf("xuehao:%d fanshu:%d\n",p4[i],p5[i]);
	}
}
void fxsc(int *p6,int *p7,int n3)
{
	int i,j,temp1,temp2;
	for(i=0;i<n3;i++)
	{
		for(j=i+1;j<n3;j++)
		{
			if(p7[i]>p7[j])
			{
				temp1=p6[j];
				p6[j]=p6[i];
				p6[i]=temp1;

				temp2=p7[j];
				p7[j]=p7[i];
				p7[i]=temp2;

			}
		}
	}
	for(i=0;i<n3;i++)
	{
		printf("xuehao:%d fanshu:%d\n",p6[i],p7[i]);
	}
}
void cz(int *p8,int *p9,int n4)
{
	int n;
	int i;
	int k;
	int pm=n4;
	int js;
	printf("please enter xuehao: (-1 to quit):\n");
	scanf("%d",&n);
	getchar();
	while(n!=-1)
	{
		for(i=0;i<n4;i++)
		{ if(p8[i]==n)
            {   k=i;
                for(js=0,pm=n4;js<n4;js++)
                    {
                    if(p9[k]>=p9[js]&&js!=k)
                        pm--;
                    }
				printf("chengji:%d paiming:%d \n",p9[k],pm);
				break;
            }
            if(p8[i]!=n&&i==n4-1)
                printf("do'nt have this xuehao\n");
		}
		scanf("%d",&n);
        getchar();
	}
}
void fl(int *p10,int n5)
{
	int a,b,c,d,e,i;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	float f,g,h,j,k;
	for(i=0;i<n5;i++)
	{
		if(p10[i]>0&&p10[i]<60)
		   a++;
		if(p10[i]>59&&p10[i]<70)
		   b++;
		if(p10[i]>59&&p10[i]<80)
		   c++;
		if(p10[i]>79&&p10[i]<90)
		   d++;
		if(p10[i]>89&&p10[i]<101)
		   e++;
	}
	f=1.0*a/n5;
	g=1.0*b/n5;
	h=1.0*c/n5;
	j=1.0*d/n5;
	k=1.0*e/n5;
	printf("bujige:%f hege:%f zhongdeng:%f lianghao:%f youxiu:%f",f,g,h,j,k);

}
void xhsc(int *p13,int *p14,int n7)
{
    	int i,j,temp1,temp2;
	for(i=0;i<n7;i++)
	{
		for(j=i+1;j<n7;j++)
		{
			if(p13[i]>p13[j])
			{
				temp1=p13[j];
				p13[j]=p13[i];
				p13[i]=temp1;

				temp2=p14[j];
				p14[j]=p14[i];
				p14[i]=temp2;

			}
		}
	}
	for(i=0;i<n7;i++)
	{
		printf("xuehao:%d fanshu:%d\n",p13[i],p14[i]);
	}

}
void list(int *p11,int*p12,int n6)
{
    int i;
    for(i=0;i<n6;i++)
        printf("xuehao:%d fanshu:%d\n",p11[i],p12[i]);
}

