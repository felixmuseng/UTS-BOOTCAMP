
struct patient
{
    char name[30],month[10];
    int day,year;
};

struct Node 
{
    patient Patient;
    Node *next, *prev;
}*head, *tail, *curr;

struct Node *createNode(int daytemp, char *monthtempstr, int yeartemp, char *nametemp)
{
    struct Node *temp = (Node*)malloc(sizeof(Node));
    temp->Patient.day = date;
    strcpy(temp->Patient.month,month);
    temp->Patient.year = year;
    strcpy(temp->Patient.name,name);
    temp->next = temp->prev = NULL;
    return temp;
}