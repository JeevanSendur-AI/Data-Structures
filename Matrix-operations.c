#include<stdio.h>
#include<stdlib.h>
// Jeevan Sendur G[AIE22020]
// DSA-I Lab 2
// 2-D ARRAY OPERATIONS
int main()
{
 int arr[100][100],i,j,m,n,choice,ins,temp,rep,k,a,b;
 printf("Enter size of matrix \n") ;
 scanf("%d %d",&m,&n);
 printf("Enter Elements of matrix");
 for(i=0;i<m;i++)
 {
     
     for(j=0;j<n;j++)
         {
              scanf("%d",&arr[i][j]);
         }
         
 }
 while(1!=0){
 printf("The current Matrix \n");
 for(i=0;i<m;i++)
 {
     
     for(j=0;j<n;j++)
         {
              printf("%d",arr[i][j]);
              printf("\t");
         }
         printf("\n");
 }
 printf("What function do you want to do?\n");
 printf("1. Insert an element\n");
 printf("2. Delete an element\n");
 printf("3. Replace an element\n");
 printf("4. Sort Ascending row-wise \n");
 printf("5. Sort Descending row-wise \n");
 printf("6. Sort Ascending column-wise \n");
 printf("7. Sort Descending column-wise \n");
 printf("8. Find Sum of odd elements\n");
 printf("9. Find Sum of even elements\n");
 printf("10. Exit \n");
 printf("Enter your choice as the number\n");
 scanf("%d",&choice);
 printf("\n");
 switch(choice)
 {
  case 1:
  {
       printf("what element do you want to insert?\n");
       scanf("%d",&ins);
       printf("where do you want the element to be inserted?\n");
       printf("Enter the row and column\n");
       scanf("%d %d",&a,&b);
       i=a;
       n=n+1;
       temp=arr[a][b];
        arr[a][b]=ins;
        arr[a][b+1]=temp;
       for(j=b+1;j<n;j++)
       {
           
           arr[i][j+1]=arr[i][j];
           
       }
       break;   
  }    
  case 2:
  {
       printf("what element do you want to delete?\n");
       printf("Enter the row and column\n");
       scanf("%d %d",&a,&b);
       arr[a][b]=0;
       break;
   }
   case 3:
   {
       printf("What element do you want to replace\n");
       scanf("%d",&rep);
       printf("Where do you want the element to be replaced\n");
       printf("Enter the row and column\n");
       scanf("%d %d",&a,&b);
       arr[a][b]=rep;
       break;
    }
    case 4:
    {    
       for (i = 0; i < m; i++)
       {
        for (j = 0; j < n; j++)
        {
         for (k =(j + 1); k < n; k++)
         {
          if (arr[i][j] > arr[i][k])
          {
           temp = arr[i][j];
           arr[i][j] = arr[i][k];
           arr[i][k] = temp;
          }
         }
        }
       }
       break;
     }
     case 5:
     {    
       for (i = 0; i < m; i++)
       {
        for (j = 0; j < n; j++)
        {
         for (k =(j + 1); k < n; k++)
         {
          if (arr[i][j] < arr[i][k])
          {
           temp = arr[i][j];
           arr[i][j] = arr[i][k];
           arr[i][k] = temp;
          }
         }
        }
       }
       break;
     }
     case 6:
     {    
       for (j = 0; j < n; j++)
       {
        for (i = 0; i < m; i++)
        {
         for (k =(i + 1); k < n; k++)
         {
          if (arr[i][j] > arr[k][j])
          {
           temp = arr[i][j];
           arr[i][j] = arr[k][j];
           arr[k][j] = temp;
          }
         }
        }
       }
       break;
     }
     case 7:
     {    
       for (j = 0; j < n; j++)
       {
        for (i = 0; i < m; i++)
        {
         for (k =(i + 1); k < n; k++)
         {
          if (arr[i][j] < arr[k][j])
          {
           temp = arr[i][j];
           arr[i][j] = arr[k][j];
           arr[k][j] = temp;
          }
         }
        }
       }
       break;
     }
     case 8:
     {
      int sum=0;
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
              {
                    if(arr[i][j]%2!=0)
                    {
                      sum += arr[i][j];
                    }
               }
              
       }
       printf("Sum is %d \n",sum);
       break;
      }
      case 9:
      {
       int sum=0;
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
               {
                     if(arr[i][j]%2==0)
                     {
                       sum += arr[i][j];
                     }
                }
               
        }
        printf("Sum is %d \n",sum);
        break;
       }
       case 10:
       {return 0;}
       default:
       { printf("Enter proper value and try again \n"); }
 }
 }
 
}
