#include<stdio.h>
#include<stdlib.h>
int main()
{
    int top=(-1),i,n,sw;
    printf("Enter the Number of Elements ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of the stack  ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        top++;
    }
    while(1==1)
    {
        printf("The Original stack   \n");
        for(i=0;i<=top;i++)
        {
            printf("%d  ",a[i]);
        }
        printf("\n \n What do you want to do?\n");
        printf("1. Replace an element\n");
        printf("2. Delete the last Element\n");
        printf("3. Reverse the elements\n");
        printf("4. Exit\n");
        printf("Enter your choice as number  \n");
        scanf("%d",&sw);
        printf("\n");
        switch(sw)
        {
            case 1:
            {
                if(top==(-1))
                {
                    printf("Stack empty :( ");
                    return 0;
                }
                int rep,pos;
                printf("Enter the Number to be replaced ");
                scanf("%d",&rep);
                printf("Enter the position to be replaced(Starting from 1) ");
                scanf("%d",&pos);
                pos--;
                a[pos]=rep;
                break;
            }
            case 2:
            {
                if(top==(-1))
                {
                    printf("Stack empty :( ");
                    return 0;
                }
                top--;
                break;
            }
            case 3:
            {
                top++;
                int b[top],j=0;int i=top;
                for(j=0;j<top;j++)
                {
                    b[j]=a[(i-1)];
                    i--;
                }
                top--;
                printf("The Reversed stack   \n");
                for(i=0;i<=top;i++)
                {
                    printf("%d  ",b[i]);
                }
                printf("\n");
                break;
            }
            case 4:
            {
                return 0;
            }
        }
    }
    return 0;
}