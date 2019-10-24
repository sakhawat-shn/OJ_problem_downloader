#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int arn,char **ar)
{
    int i,length;
    char last_1,last_2,str[100];
    if(arn<2)
    {
        printf("please input UVa problem number(s).\n");
        exit(0);
    }
   for(i=1; i<=arn-1; i++)
    {
        printf("|*******************************[START -- %s]**************************************|\n",ar[i]);
        length=strlen(ar[i]);
        if(length<=2)
        {
            printf("Problem number should be atleast 3 digit.\n");
            continue;
        }
        last_1=ar[i][length-1];
        last_2=ar[i][length-2];
        ar[i][length-2]='\0';

        sprintf(str,"curl -k \'https://uva.onlinejudge.org/external/%s/%s%c%c.pdf\'>%s%c%c.pdf",ar[i],ar[i],last_2,last_1,ar[i],last_2,last_1);
        printf("%s\n\n",str);
        system(str);
        printf("|*******************************[END -- %s%c%c]****************************************|\n\n",ar[i],last_2,last_1);

    }


    return 0;
}


//https://uva.onlinejudge.org/external/3/374.pdf
