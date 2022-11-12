#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
void main()
{
printf("Ayush Singh\n");
printf("Section: A \nClass Roll No.: 13\n");
int n, even = 0, odd = 0;
printf("Enter the size of array: ");
scanf("%d", &n);
int a[n];
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
if (i % 2 == 0)
even += a[i];
else
odd += a[i];
}
printf("\nProcess ID = %d\n", getpid());
fork();
int pid = getpid();
fork();
fork();
if (getpid() == pid)
printf("\nSum of even position elements = %d\n", even);
else
printf("\nSum of odd position elements = %d\n", odd);
}
