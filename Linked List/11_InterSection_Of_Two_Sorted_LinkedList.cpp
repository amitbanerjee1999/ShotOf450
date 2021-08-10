//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
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
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* head = NULL;
    Node* temp;
    Node* prev = NULL;
    while (head1 && head2) {

        // take data from current head of both linklist
        int a = head1->data;
        int b = head2->data;

        // if both are equal, make new node, move both pointers ahead
        if (a == b) {
            temp = new Node(a);
            if (head == NULL) {
                head = temp;
            }
            else prev->next = temp;

            head2 = head2->next;
            head1 = head1->next;
            prev = temp;
        }
        // whoevers value is small should be move forwareded.
        else if (a > b) head2 = head2->next;
        else head1 = head1->next;
    }
    return head;
}
