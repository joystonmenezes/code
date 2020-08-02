#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int j,c=0, i=0;
    char str[100];
    printf(" Enter the string \n");
  scanf("%s",&str);
    
    while(str[c]!='\0')
    c++;
    
    int end = c-1;
    
    while(end>1)
    {
        if(str[i++]!= str[end--]){
        printf(" its not a palindrome");
        exit(0);
        }
    }
        printf(" its  a palindrome");

return 0;
    
}
