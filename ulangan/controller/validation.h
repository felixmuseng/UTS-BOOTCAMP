/*int monthstrtoMonth(char month[3])
{
    switch(month)
    {
        case strcmp(month,"jan")==0:
        return 1;
        break;
        case strcmp(month,"feb")==0:
        return 2;
        break;
        case strcmp(month,"mar")==0:
        return 3;
        break;
        case strcmp(month,"apr")==0:
        return 4;
        break;
        case strcmp(month,"may")==0:
        return 5;
        break;
        case strcmp(month,"jun")==0:
        return 6;
        break;
        case strcmp(month,"jul")==0:
        return 7;
        break;
        case strcmp(month,"aug")==0:
        return 8;
        break;
        case strcmp(month,"sepr")==0:
        return 9;
        break;
        case strcmp(month,"oct")==0:
        return 10;
        break;
        case strcmp(month,"nov")==0:
        return 11;
        break;
        case strcmp(month,"dec")==0:
        return 12;
        break;
    }
}*/

const char* monthtostrMonth(int month)
{
    switch(month)
    {
        case 1:
        return "january";
        break;
        case 2:
        return "february";
        break;
        case 3:
        return "march";
        break;
        case 4:
        return "april";
        break;
        case 5:
        return "may";
        break;
        case 6:
        return "june";
        break;
        case 7:
        return "july";
        break;
        case 8:
        return "august";
        break;
        case 9:
        return "september";
        break;
        case 10:
        return "october";
        break;
        case 11:
        return "november";
        break;
        case 12:
        return "december";
        break;
    }
}