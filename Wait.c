#include<stdio.h>

#include<stdlib.h>

#include<sys/wait.h>

#include<unistd.h>

int main()

{

if(fork()==0)

{

int n;

printf("Child Process ID- %d\n",getpid());

printf("ENter a no. ");

scanf("%d",&n);

if(n&1)

printf("No. is Odd\n");

else
printf("No. is Even\n");
}
else
{
wait(NULL);

int a,b;

printf("Parent Process ID- %d\n",getpid());

printf("ENter 2 no.s ");

scanf("%d %d",&a,&b);

printf("Greater no. is %d",a>b?a:b);

}

return 0;

}
