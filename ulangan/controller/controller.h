
void pushprioqueue(int date, char *month, int year, char *name)
{
    Node *temp = createNode(date, month, year, name);
    if(!head)
    {
        head = tail = temp;
    }
    else if(year < head->year2)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else if(year > tail->year2)
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    else
    {
        Node *curr = head;
        while(curr)
        {
            if(curr ->year2 == year)
            {
                if()
            }
        }

}

