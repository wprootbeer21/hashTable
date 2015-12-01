#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 10
//void main()
int main()
{
	int a[max];
	int num,key,i;
	char ans;
	int create(int);
	void hash(int [],int,int);
	void display(int[]);
	//clrscr();
	printf("##### hash table #####\n");
	for(i=0;i<max;i++)
	//a[i]=-1;
	a[i]=0;
	do{
		printf("enter the number : ");
		scanf("%d",&num);
		key=create(num);
		hash(a,key,num);
		printf("\npress 'y' if do u want to continue : ");
		ans=getche();
		printf("\n");
	}while(ans=='y');
	display(a);
	getch();
}

int create(int num)
{
	int key;
	key=num%10;
	return key;
}

void hash(int a[max],int key,int num)
{
	int flag,i;
	int count=0;
	void display(int a[]);
	flag=0;
	//if(a[key]==-1)
	if(a[key]==0)
	a[key]=num;
	else{
		i=0;
		while(i<max){
			//if(a[i]!=-1)
			if(a[i]!=0)
			count++;
			i++;
		}
		if(count==max){
			printf("\nhash table is full");
			display(a);
			getch();
			exit(1);
		}
		for(int i=key+1;i<max;i++)
		//if(a[i]==-1){
		if(a[i]==0){
			a[i]=num;
			flag=1;
			break;
		}
	}
}

void display(int a[max])
{
	int i;
	printf("\n hash table is.........\n");
	for(i=0;i<max;i++)
	printf("\n%d : %d",i,a[i]);
}
