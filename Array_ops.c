#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
// Code in C by Jeevan sendur G [AIE22020].
// Data Structures and Algorithms - I ,Assignment.
// Scan,Insert,or Replace an Element in an array.
int main(void)
{
    int n,i,num,pos,m,ch,ck,new,po;
    printf("Enter The Size of Array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Elements of Array ");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);
    }
    printf("What do you want to do?\n");
    printf("1. verify whether an element is present or not\n");
    printf("2. Insert a desired element in a desired position\n");
    printf("3. Insert a desired element in beginning of array\n");
    printf("4. Insert a desired element in the end of array\n");	
    printf("5. Replave an element in a desired position\n");
    printf("Enter Your Choice as a number:   \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter the number to be checked ");
            scanf("%d",&ck);
            for(i=0;i<n;i++)
            {
                if(arr[i]==ck)
                {
                    printf("%d is present",ck);
                    return 0;
                }
                else{printf("Not present in this array");return 0;}
            }
             break;
        }
        case 2:
        {
        printf("Enter the number to be inserted ");
        scanf("%d",&num);
        printf("Enter the position in which the number is to be inserted(From 1 till %d)",n);
        scanf("%d",&pos);
        m=n+1;
        pos=pos-1;
        int arr2[m];
        if(m<pos || pos<0)
        {
            printf("Enter a valid number ");
            return 0;
        }
        else if(m>pos)
        {
            i=0;
            if(i<=pos)
            {
                for(i=0;i<pos && i<m;i++)
                {
                    arr2[i]=arr[i];
                }
            arr2[pos]=num;
            }
        
                for(i=pos+1;i<m;i++)
                {
                    arr2[i]=arr[i-1];
                }
        }
        for(i=0;i<m;i++)
        { 
            printf("%d",arr2[i]);
            printf("\t");
        }
        break;
        }
	  case 3:
        {
        printf("Enter the number to be inserted ");
        scanf("%d",&num);
        pos=0;
        m=n+1;
        int arr2[m];
        if(m<pos || pos<0)
        {
            printf("Enter a valid number ");
            return 0;
        }
        else if(m>pos)
        {
            i=0;
            if(i<=pos)
            {
                for(i=0;i<pos && i<m;i++)
                {
                    arr2[i]=arr[i];
                }
            arr2[pos]=num;
            }
        
                for(i=pos+1;i<m;i++)
                {
                    arr2[i]=arr[i-1];
                }
        }
        for(i=0;i<m;i++)
        { 
            printf("%d",arr2[i]);
            printf("\t");
        }
        break;
        }
	  case 4:
        {
        printf("Enter the number to be inserted ");
        scanf("%d",&num);
        m=n+1;
        int arr2[m];
	  arr2[m-1]=num;
        for(i=0;i<n;i++)
        { 
            arr2[i]=arr[i];
            printf("%d",arr2[i]);
            printf("\t");
        }
        printf("%d",arr2[m-1]);
        break;
        }
        case 5:
        {
            printf("Enter the new number ");
            scanf("%d",&new);
            printf("Enter the position (1 till %d) ",n);
            scanf("%d",&po);
            if(n<po || po<1)
            {
                printf("Invalid position, Read instructions properly, Try again");
                return 0;
            }
            po=po-1;
            arr[po]=new;
            for(i=0;i<n;i++)
            { 
                printf("%d",arr[i]);
                printf("\t");
            }
            break;
        }
        default:
        {printf("Error, check inputs and enter properly");}
    }
}