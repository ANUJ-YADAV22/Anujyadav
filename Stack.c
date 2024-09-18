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
    
    int top=-1,stack[10],x,n,i,choice;
    printf("\nEnter the size of an stack :");
    scanf("%d",&n);
    
    while(1)
    {
         printf("\nThe list of the operation you have to perform:\n");
        printf("\n1)Push:\n2)Pop:\n3)Underflow\n4)Overflow\n5)Peek\n6)Display\n7)Exit\n\n");
    
        printf("\nThe operation you want to perform:\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            //Innsertion
            if(top==n-1)
            {
                printf("\nOverflow!!");
            }
            else{
                printf("\nEnter the element : \n");
                scanf("%d",&x);
                top++;
                stack[top]=x;
            }
            break;
            
            case 2:
            //Deletion
            
            if(top==-1)
            {
                printf("\nUnderflow\n");
            }
            else{
                // printf("\nelements are present in stack");
                // for(i=n-1;i>=0;i--)
                // {
                //     printf("%d\n",stack[i]);
                // }
                printf("deleted element in the stack is %d :",stack[top]);
                top--;
                
            }
            break;
            
            case 3:
            //Underflow
            
            if(top==-1)
          {
            printf("\nUnderflow!!\n");
          }
          else
          {
              printf("\nNot Underflow!!\n");
          }
          break;
          
          case 4:
          //Overflow
          if(top==n-1)
          {
              printf("\nOverflow!!\n");
              
          }
          else {
              printf("\nNot Overflow!!\n");
          }
          break;
          
          case 5:
          //peek
            printf("The topmost element of an stack is %d : ",stack[top]);
            break;
            
             case 6:
        //Display
        for(i=top;i>=0;i--)
        {
            printf("\t%d",stack[i]);
        }
        break;
        case 7:
        exit(0);
        default:
        printf("Invalide choice");
        }
        
       
        
    }

    return 0;
}