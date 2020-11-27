#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../controller/controller.h"
#include "../controller/validation.h"
#include "../models/models.h"

int main()
{
    int tc,cure;
    scanf("%d %d",&tc,&cure);
    
    for(int i = 0;i<tc;i++)
    {
        int daytemp, monthtemp, yeartemp;
        char monthtempstr[10],nametemp[30];
        scanf("%d %s %d - %[^\n]", &daytemp, monthtempstr, &yeartemp, nametemp);
        //monthtemp = monthstrtoMonth(monthtempstr);
        pushprioqueue(createNode(daytemp, monthtempstr, yeartemp, nametemp));
    }
    if(tc>=cure)
    {
        printf("All patients get the cure, %d cure left\n",(cure-tc));
        return 0;
    }
    else
    {
        printf("Need %d more cure\n",(tc-cure));
    }
}