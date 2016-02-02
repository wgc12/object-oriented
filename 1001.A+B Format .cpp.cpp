#include<stdio.h>
int main()
{
	int i,j=0,a,b,c,m,n,d[100000]={0},p=0;
	scanf("%d%d",&a,&b);
	c=a+b;
	i=1;
	if(c<0){
	c=0-c;
	p=1;}
	do{
	   d[i]=c%10;
	   c=(c-d[i])/10;
	   i++;
	}while(c!=0);
     n=i-1;
    if(p==1)printf("-");
    if(n%3!=0){
    for(i=n;i>n-(n%3);i--){
    	printf("%d",d[i]);
    }
    if(n>3)printf(",");
	n=n-(n%3);}
	for(i=n;i>=1;i--){
	 printf("%d",d[i]);
	 j++;
	 if((j%3==0)&&(i!=1))printf(",");	
	}
     return 0;}
     
