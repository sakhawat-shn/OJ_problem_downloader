#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int arn,char **ar)
{
    int i,length;
    char str[150];
    if(arn<2)
    {
        printf("please input lightoj problem number(s).\n");
        exit(0);
    }
   for(i=1; i<=arn-1; i++)
    {
        printf("|*******************************[START -- %s]**************************************|\n",ar[i]);
        length=strlen(ar[i]);
        if(length<=3)
        {
            printf("Problem number should be atleast 4 digit.\n");
            continue;
        }

        sprintf(str,"curl -k \'http://lightoj.com/volume_showproblem.php?problem=%s&language=english&type=pdf\'>%sLOJ.pdf",ar[i],ar[i]);
        printf("%s\n\n",str);
        system(str);
        printf("|*******************************[END -- %s]****************************************|\n\n",ar[i]);

    }


    return 0;
}


//http://lightoj.com/volume_showproblem.php?problem=1000&language=english&type=pdf
