#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    for(i=0;i <= strlen(a)- strlen(b);i++)
    {
        for(j=0;j <strlen(b);j++)
        
            if(a[i+j] != b[j])
            break;
        
        
        if(j==strlen(b))
        printf("%d",i);

    }

    return 0;
}
