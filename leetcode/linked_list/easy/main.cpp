#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void displayLL(Node *p)
{
    // while(p != nullptr) {
    //     cout << p->data << " ";
    //     p = p->next;
    // }
    // use recusvie method
    if (p != nullptr)
    {
        cout << p->data << " ";
        displayLL(p->next);
    }
}

void count_data(Node *p)
{
    int count = 0;
    while (p != nullptr)
    {
        count++;
        p = p->next;
    }
    cout << "Total data in LL: " << count << endl;
}

void sum_elements(Node *p, int sum)
{
    // // loop over the elements
    // while(p) {
    //     sum += p->data;
    //     p=p->next;
    // }

    // recursive method

    if(p != nullptr) {
        sum += p->data;
        sum_elements(p->next, sum);
    } else {
      cout << sum << '\n';
    }
}

int main()
{

    int A[] = {3, 5, 7, 10, 15};

    Node *head = new Node;

    Node *temp;
    Node *last;

    head->data = A[0];
    head->next = nullptr;
    last = head;

    // Create a Linked List
    for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++)
    {

        // Create a temporary Node
        temp = new Node;

        // Populate temporary Node
        temp->data = A[i];
        temp->next = nullptr;

        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }

    Node *p = head;
    // displayLL(head);
    // count_data(head);
    int sum = 0;
    sum_elements(head, sum);


    return 0;
}