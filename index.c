#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;

    for(i=1;i<=4;i++){
        char ch[100];
        gets(ch);
        char *token = strtok(ch," ");
        int count=0,fact=1;
        while(token!=NULL){
            count++;
            printf("%s\n",token);
            token = strtok(NULL," ");
        }
        for(j=1;j<=count;j++){
            fact=fact*j;
        }
        printf("1/%d",fact);


    }

    return 0;
}
