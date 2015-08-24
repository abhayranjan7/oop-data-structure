Node* Reverse(Node *head)
{
    int i=0,count=0,a[12345];
    Node *ptr=head;
  while(ptr!=NULL)
      {
      a[i++]=ptr->data;
      ptr=ptr->next;
      count++;
  }
    ptr=head;
    for(i=(count-1);i>=0;i--)
        {
            ptr->data=a[i];
            ptr=ptr->next;
       
    }
    
    return head;
}

