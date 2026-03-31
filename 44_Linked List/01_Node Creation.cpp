#include<iostream>
using namespace std;

class Node{

    public :
    int data;
    Node * next;

    Node(int data)
        {
            this -> data = data;
            this ->next = NULL;
        }

};

void insertAtHead(Node * &head , int d)
    {

        Node * temp = new Node(d);
        temp -> next = head;
        head = temp;

    }

void print(Node * &head)
    {

    Node * temp = head;

    while(temp != NULL)
        {

            cout << temp -> data << " ";
            temp = temp -> next;

        }

    }



int main()
    {

    // // static way
    // Node node1(10);
    // cout << node1.data << endl;
    // cout << node1.next << endl;

    //dynamic way

    // Node * node2 = new Node(10);
    // cout << node2 -> data << endl;
    // cout << node2 -> next << endl;
    // cout << node2 << endl;

    // Node * node3 = new Node(14);
    // cout << node3 -> data << endl;
    // cout << node3 -> next << endl;
    // cout << node3 << endl;


    // creating a first node
    Node * node1 = new Node(11);
    print(node1);
    cout << endl;

    Node *head = node1;
    insertAtHead(head,10);
    print(head);
    cout << endl;

    insertAtHead(head,9);
    print(head);


        
}

