#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

struct Node
{
    int value;
    Node *next;
};
void makelist(Node **head, int data)
{
  Node *node = new Node;
  node -> value = data;
  node -> next = NULL;
  if(*head == NULL)
  {
    *head = node;
    return;
  }
  Node *it = *head;
  while(it -> next != NULL)
  {
    it = it -> next;
  }
  it -> next = node;
}
int main()
{
    int n, m;
    cin >> n >> m;
    Node *head1 = NULL;
    Node *head2 = NULL;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        makelist(&head1, a);  
    }
    for(int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        makelist(&head2, b);  
    }
    map <int, bool> intersection;
    Node *it1 = head1, *it2 = head2;
    Node *head3 = NULL, *head4 = NULL;
    while(it1 != NULL)
    {
        intersection[it1 -> value] = true;
        it1 = it1->next;
    }
    while(it2 != NULL)
    {
      if(intersection[it2 -> value])
      {
          makelist(&head3, it2 -> value);
      }
      it2 = it2 -> next;
    }
    
    it2 = head2;
    while(it2 != NULL)
    {
      intersection[it2 -> value] = true;
      it2 = it2 -> next;
    }

    map<int,bool>::iterator i = intersection.begin();
    while(i != intersection.end())
    {
      makelist(&head4, i -> first);
      i++;
    }

    it1 = head3;
    while(it1 != NULL)
    {
      cout << it1 -> value << " ";
      it1 = it1->next;
    }cout << endl;
    it1 = head4;
    while(it1 != NULL)
    {
      cout << it1 -> value << " ";
      it1 = it1->next;
    }
    return 0;
}