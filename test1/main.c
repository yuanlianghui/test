#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define lin 30
int  get_cj(char (*p1)[30],int (*p2)[2]);
void jscj(int (*p3)[2],int n1);
void zxsc(char (*p4)[30],int (*p5)[2],int n2);
void fxsc(char (*p6)[30],int (*p7)[2],int n3);
void cz(char (*p8)[30],int (*p9)[2],int n4);
void fl(int (*p10)[2],int n5);
void list(char (*p11)[30],int(*p12)[2],int n6);
void xhsc(char (*p13)[30],int (*p14)[2],int n7);
void namecx(char (*p15)[30],int (*p16)[2],int n8);
void namepm( char (*p17)[30],int (*p18)[2],int n9);
int main()
{	int num,n;
    int xuehaocj[lin][2];
    char name[lin][lin];
    printf("1.input record\n");
    printf("2.ca1culate total and average\n");
    printf("3.sort indeccending by score\n");
    printf("4.sort in ascend by score\n");
    printf("5.sort in aceding\n");
    printf("6.sort in name.\n");
    printf("7.serch by id card\n");
    printf("8.search by name.\n");
    printf("9.analysis\n");
    printf("10.list cord\n");
    printf("11.exit\n");
    printf("please enter you choice(1 shoud be first) :\n");
    scanf("%d",&num);
    while(n!=0)
    {
        switch(num)
            {
            case 1:
                n=get_cj(name,xuehaocj);
                break;
            case 2:
                jscj(xuehaocj,n);
                break;
            case 3:
                zxsc(name,xuehaocj,n);
                break;
            case 4:
                fxsc(name,xuehaocj,n);
                break;
            case 5:
                xhsc(name,xuehaocj,n);
                break;
            case 6:
                namepm(name,xuehaocj,n);
            case 7:
                cz(name,xuehaocj,n);
                break;
            case 8:
                namecx(name,xuehaocj,n);
                break;
            case 9:
                fl(xuehaocj,n);
                break;
            case 10:
                list(name,xuehaocj,n);
                break;
            case 11:
                exit(0);
            }
       printf("please enter you choice :\n");
       scanf("%d",&num);
       getchar();
    }
    return 0;
}
int  get_cj(char (*p1)[30],int (*p2)[2])
{
	int i;
	int n;
	printf("how many student? please enter:\n");
	scanf("%d",&n);
	getchar();
	printf("please enter you name,chengji and youxuehao;name first.\n");
  	for(i=0;i<n;i++)
	  {
        scanf("%d %s %d",&p2[i][0],p1[i],&p2[i][1]);
  	    getchar();
  	    if(p2[i][1]<0)
        {
            printf("please enter again\n");
            scanf("%d %s %d",&p2[i][0],p1[i],&p2[i][1]);
  	        getchar();
        }

	  }
	  printf("luruwancheng!\n");

	return n;
}
void jscj(int (*p3)[2],int n1)
{
	int i=0;
	float sum=0;
	float average;
	for(i=0;i<n1;i++)
		{
				sum=sum+p3[i][1];
		}
	average=sum/n1;
	printf("sum is %f and average is %f\n",sum,average);
}
void zxsc(char (*p4)[30],int (*p5)[2],int n2)
{
	int i,j,temp1,temp2;
	for(i=0;i<n2;i++)
	{   char name[30];
		for(j=i+1;j<n2;j++)
		{
			if(p5[i][1]<p5[j][1])
			{
			    strcpy(name,p4[j]);
                strcpy(p4[j],p4[i]);
                strcpy(p4[i],name);

				temp1=p5[j][0];
				p5[j][0]=p5[i][0];
				p5[i][0]=temp1;

				temp2=p5[j][1];
				p5[j][1]=p5[i][1];
				p5[i][1]=temp2;

			}
		}
	}
	for(i=0;i<n2;i++)
	{
		printf("name:%s ",p4[i]);
		printf("xuehao:%d",p5[i][0]);
		printf("fenshu:%d\n",p5[i][1]);
	}
}
void fxsc(char (*p6)[30],int (*p7)[2],int n3)
{
	int i,j,temp1,temp2;
	char  name2[30];
	for(i=0;i<n3;i++)
	{
		for(j=i+1;j<n3;j++)
		{
			if(p7[i][1]>p7[j][1])
			{
			    strcpy(name2,p6[j]);
                strcpy(p6[j],p6[i]);
                strcpy(p6[i],name2);

				temp1=p7[j][0];
				p7[j][0]=p7[i][0];
				p7[i][0]=temp1;

				temp2=p7[j][1];
				p7[j][1]=p7[i][1];
				p7[i][1]=temp2;

			}
		}
	}
	for(i=0;i<n3;i++)
	{
		printf("name:%s ",p6[i]);
		printf("xuehao:%d",p7[i][0]);
		printf("fenshu:%d\n",p7[i][1]);
	}
}
void cz(char (*p8)[30],int (*p9)[2],int n4)
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
		{ if(p9[i][0]==n)
            {   k=i;
                for(js=0,pm=n4;js<n4;js++)
                    {
                    if(p9[k][1]>=p9[js][1]&&js!=k)
                        pm--;
                    }
				printf("name:%s,chengji:%d paiming:%d \n",p8[k],p9[k][1],pm);
				break;
            }
            if(p9[i][0]!=n&&i==n4-1)
                printf("do'nt have this xuehao\n");
		}
		scanf("%d",&n);
        getchar();
	}
}
void fl(int (*p10)[2],int n5)
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
		if(p10[i][1]>0&&p10[i][1]<60)
		   a++;
		if(p10[i][1]>59&&p10[i][1]<70)
		   b++;
		if(p10[i][1]>59&&p10[i][1]<80)
		   c++;
		if(p10[i][1]>79&&p10[i][1]<90)
		   d++;
		if(p10[i][1]>89&&p10[i][1]<101)
		   e++;
	}
	f=1.0*a/n5;
	g=1.0*b/n5;
	h=1.0*c/n5;
	j=1.0*d/n5;
	k=1.0*e/n5;
	printf("bujige:%f hege:%f zhongdeng:%f lianghao:%f youxiu:%f\n",f,g,h,j,k);

}
void xhsc(char (*p13)[30],int (*p14)[2],int n7)
{
    	int i,j,temp1,temp2;
    	char name[30];
	for(i=0;i<n7;i++)
	{
		for(j=i+1;j<n7;j++)
		{
			if(p14[i][0]>p14[j][0])
			{
			    strcpy(name,p13[j]);
                strcpy(p13[j],p13[i]);
                strcpy(p13[i],name);

 				temp1=p14[j][0];
				p14[j][0]=p14[i][0];
				p14[i][0]=temp1;

				temp2=p14[j][1];
				p14[j][1]=p14[i][1];
				p14[i][1]=temp2;

			}
		}
	}
	for(i=0;i<n7;i++)
	{
		printf("name:%s ",p13[i]);
		printf("xuehao:%d",p14[i][0]);
		printf("fenshu:%d\n",p14[i][1]);
	}

}
void list(char (*p11)[30],int(*p12)[2],int n6)
{
    int i;
    for(i=0;i<n6;i++)
        {
            printf("name:%s ",p11[i]);
            printf("xuehao:%d",p12[i][0]);
            printf("fenshu:%d\n",p12[i][1]);
        }
}
void namecx(char (*p15)[30],int (*p16)[2],int n8)
{
    char name[30];
    int pd;
    int i;
    int k;
    int pm=n8;
    int js;
    for(i=0;i<n8;n8++)
    {   printf("please enter a name:\n");
        scanf("%s",name);
        pd=strcmp(name,p15[i]);
        if(pd==0)
        {
            k=i;
            for(js=0,pm=n8;js<n8;js++)
            {
                if(p16[k][1]>=p16[js][1]&&js!=k)
                        pm--;
            }
            printf("name:%s ",p15[i]);
            printf("xuehao:%d",p16[i][0]);
            printf("fenshu:%d\n",p16[i][1]);;
				break;
        }
        if(pd!=0&&i==n8-1)
                printf("do'nt have this name\n");


    }
}
void namepm( char (*p17)[30],int (*p18)[2],int n9)
{

    int i,j,pd,temp1,temp2;
    char name[30];
    for(i=0;i<n9;i++)
    {
        for(j=i+1;j<n9;j++)
        {
            pd=strcmp(p17[i],p17[j]);
            if(pd>0)
            {
              strcpy(name,p17[j]);
              strcpy(p17[j],p17[i]);
              strcpy(p17[i],name);

              temp1=p18[j][0];
              p18[j][0]=p18[i][0];
              p18[i][0]=temp1;

              temp2=p18[j][1];
              p18[j][1]=p18[i][1];
              p18[i][1]=temp2;

            }
        }
    }
    for(i=0;i<n9;i++)
    {
        printf("name:%s ",p17[i]);
		printf("xuehao:%d",p18[i][0]);
		printf("fenshu:%d\n",p18[i][1]);
    }
}

