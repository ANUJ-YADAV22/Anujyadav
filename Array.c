/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int i,x,pos, n,a[10];
    
    printf("Enter the size of an array :");
    scanf("%d",&n);
    //Creation of an array
            
            printf("Enter element:\n");
            
            for( int i=0;i<n;i++){
                scanf("%d",&a[i]);
            }
    while(1)
    {
        printf("\n1.Insertion of the element at the 1st position.\n2.Insertion of an element at any position.\n3.Insertion of the element at the end position.\n4.Deletion of the element at the 1st position.\n5.Deletion of the element at the any position.\n6.Deletion of the element at the end position.\n7.Display an array element.\n8.Exit.");
        printf("\n\n Enter the choice");
        scanf("%d",&choice);
        
        switch(choice)
        {
            
            case 8:
            exit(0);
             
            break;
            
            case 1:
            //Insertion of an element at 1st position
            
            printf("Enter new number: \n");
            scanf("%d",&x);
            
            for(i=n;i>0;i--){
                a[i]=a[i-1];
            }
            
            a[0]=x;
            n++;
            break;
            
            case 2:
            
            //Insertion of element at any position
            
            printf("Enter element you want to insert : \n");
            scanf("%d",&x);
            
            printf("Enter the position of an element\n");
            scanf("%d",&pos);
            
            for(i=n;i>=pos;i--)
            {
                a[i]=a[i-1];
                
            }
            
            a[pos -1]=x;
            n++;
            
             break;
            
           case 7:
           
           //Display
           
           for(i=0;i<n;i++)
           {
               printf("%d \t",a[i]);
           }
           break;
           
           case 3:
           
           //Insertion of element at the end
           printf("\nEnter new number: \n");
            scanf("%d",&x);
            a[n]=x;
            n++;
             break;
             
             case 4 :
              //Deletion of the element at first position
              
              
              
              for(i=0;i<=n-1;i++)
              {
                  a[i]=a[i+1];
                  
              }
              n--;
              break;
            
            
            case 5:
            // Delet element at any position
            printf("\nEnter the position of an element you want to delet:\n");
            scanf("%d",&pos);
            
            for(i=pos-1;i<n;i++)
            {
                a[i]=a[i+1];
            }
            n--;
            
            break;
            
            case 6:
            //delet from the end
          
            n--;
            break;
            
           
            
            default:
            
            printf("\n Invalide choice");
            
            
        }
           
    }    
          
        
    

    return 0;
}