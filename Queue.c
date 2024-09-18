/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    
    int q[10],choice,i,n,f=-1,r=-1;
    int x;
    
    printf("Enter the size of an queue");
    scanf("%d",&n);
    
    while(1)
    {
    printf("\nThe list of the operation:\n");
    printf("\n1)Enqueue\n2)Dequeue\n3)Underflow\n4)Overflow\n5)Peek\n6)Display\n7)Exit\n\n");
    
    printf("\nEnter the operation you want to perform :\n");
    scanf("%d",&choice);
    
    switch(choice)
        
        {
            case 1:
            //Insertion of element
            printf("Enter the element you want to enter :\n");
            scanf("%d",&x);
            if(r==n-1)
            {
                printf("overflow!!\n");
            }
            else if(f==-1&&r==-1)
            {
                f=r=0;
                q[r]=x;
            }
            else
            {
                r++;
                q[r]=x;
            }
            break;
            
            case 2:
            //deletion
            //printf("Delet the element :\n");
            //scanf("%d",&x);
            if(f==-1&&r==-1)
            {
                printf("\nUnderflow!!\n");
                
            }
            else if(f==r)
            {
                printf("%d",q[f]);
                f=r=-1;
            }
            else
            {
                printf("Deleted element from the queue is : %d",q[f]);
                f++;
            }
            break;
            
            case 3:
            //nUnderflow
            if(f==-1&&r==-1)
            {
                printf("Queue is underflow");
                
            }
            else
            {
                printf("Queue is not underflow");
            }
            break;
            case 4:
            //overflow
            if(r==-1)
            {
                printf("Queue is Overflow");
            }
            else
            {
                printf("Queue is not Overflow");
                
            }
            break;
            case 5:
            //Peek
            printf("The elementat the first position %d",q[f]);
            break;
            
            case 6:
            //Display
            for(int i=f;i<=r;i++)
            {
                printf("%d\t",q[i]);
            }
            break;
            
            case 7:
            exit(0);
        }
    }
    return 0;
}