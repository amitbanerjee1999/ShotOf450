
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

Node* reverseList(Node* h)
{
  Node* curr = NULL;
  while(h != NULL)
  {
    Node* temp = h;
    h = h->next;
    
    temp->next=curr;
    curr=temp;
  }
  return curr;
}


struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    first = reverseList(first);
    second = reverseList(second);
  
    Node* resList = NULL;
    int sum = 0;
    int carry = 0;
    
    while(first != NULL || second != NULL)
    {
        sum = carry;
        if(first != NULL)
        {
            sum += first->data;
            first = first->next;
        }
    
        if(second != NULL)
        {
            sum += second->data;
            second = second->next;
        }
        carry = sum / 10;
        sum = sum % 10;
    
        //resList = insertAtHead(resList, new Node(sum));
        Node *curr2=new Node(sum);
        curr2->next=resList;
        resList=curr2;
  }
  
    if(carry != 0){
        //resList = insertAtHead(resList, new Node(carry));
        Node *curr1=new Node(carry);
        curr1->next=resList;
        resList=curr1;
    }
        
  
    return resList;
}

