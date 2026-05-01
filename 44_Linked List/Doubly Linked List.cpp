#include<iostream>
using namespace std;

class Node{

    public :
    int data;
    Node * next;
    Node * prev;

    Node(int d)
        {
            this -> data = d;
            this -> next = NULL;
            this -> prev = NULL;

        }

    ~Node()
        {
            int value = this -> data;

            if(next != NULL)
                {
                    delete next;
                    next = NULL;
                }

            cout << "Memory freed : " << value << endl;
        }

};

void insertAtHead(Node * &head ,Node * &tail ,int data)
    {
        //empty linked list
        if(head == NULL)
            {
                Node * temp = new Node(data);
                head = temp;
                tail = temp;

            }

        else   {
            Node * temp = new Node(data);
            head -> prev = temp;
            temp -> next = head;
            head = temp;
        }


    }

void insertAtTail(Node * &head ,Node * &tail ,int data)
    {
        // empty list
        if(head == NULL)
            {
                Node * temp = new Node(data);
                head = temp;
                tail = temp;
            }

        else
            {
                Node * temp = new Node(data);
                tail -> next = temp;
                temp -> prev = tail;
                tail = temp;
            }
    }

void print(Node * head , Node * tail)
    {

        Node * temp = head;

        while(temp != NULL)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        cout << "head : " << head -> data << endl;
        cout << "tail : " << tail -> data << endl;

    }

int getLength(Node * head )
    {

        Node * temp = head;
        int lenght = 0;

        while(temp != NULL)
            {
                lenght++;
                temp = temp -> next;
            }
            cout << endl;
            return lenght;

    }

void insertAtPosition(Node * &head ,Node * &tail ,int data , int position)
    {
        if(position == 1)
            {
                insertAtHead(head , tail , data);
                return;
            }

        int cnt = 1;
        Node * temp = head;


        while(cnt < position - 1)
            {
                temp = temp -> next;
                cnt++;
            }


        if(temp -> next == NULL)
            {
                insertAtTail(head , tail , data);
                return;
            }

            
        Node * node_to_insert = new Node(data);

        node_to_insert -> next = temp -> next;
        temp -> next -> prev = node_to_insert;
        temp -> next = node_to_insert;
        node_to_insert -> prev = temp;
  
    }

void deletion(Node * &head , Node * &tail , int position)
    {
        // Node * temp = head;

        if(position == 1)
            {
                Node * temp = head;
                temp -> next -> prev = NULL;
                head = temp -> next;
                temp -> next = NULL;
                delete temp;
            }


    }

int main()
    {
        Node * head = NULL;
        Node * tail = NULL;

        insertAtHead(head , tail , 15);
        print(head,tail);

        insertAtHead(head , tail , 14);
        print(head,tail);

        insertAtTail(head , tail , 16);
        print(head , tail);

        insertAtTail(head , tail , 17);
        print(head , tail);

        insertAtPosition(head , tail,101 , 5);
        print(head , tail);

        int length = getLength(head);
        cout << "Linked list lenght : " << length << endl;

        deletion(head , tail , 1);
        print(head , tail);



    }
