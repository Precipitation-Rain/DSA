#include<iostream>
using namespace std;

class Node
    {

        public:
        int data ;
        Node * next ;

        Node(int d)
            {
                this -> data = d;
                this -> next = NULL;
            }

        ~Node()
            {
                int value = this -> data;

                if(this -> next != NULL)
                    {
                        delete next;
                        next =  NULL;
                    }
                cout << "Memory Freed : " << value << endl;

            }
        

};


void insertAtTail(Node * &tail , int element , int data)
    {

        if (tail ==  NULL)
            {
                Node * temp = new Node(data);
                tail = temp;
                temp -> next = temp;
            }

        else
            {

                Node * curr = tail;

                while(curr -> data != element)
                    {
                        curr = curr -> next ;
                    }

                Node * temp = new Node(data);
                temp -> next = curr -> next ;
                curr -> next = temp;
            }

    }


void deletenode(Node * &tail , int element)
    {

            if(tail == NULL)
                {
                    cout << "List is empty : " << endl;
                }

            else
                {
                    Node * prev = tail;
                    Node * curr = prev -> next ;

                
                    while( curr -> data  != element)
                        {
                                prev = curr;
                                curr = curr -> next;
                        }

                    
                    prev -> next = curr -> next;

                    // one node
                    if(curr == prev)
                        {
                            tail = NULL;
                        }

                    // more than 2  nodes
                    else if (tail == curr)
                        {
                            tail = prev;
                        }

                        curr -> next = NULL;
                        delete curr;
                }

    }

void print(Node * tail)
    {
        Node * temp = tail;

        do
        {
                cout << tail -> data << " ";
                tail = tail -> next;

        } while ( tail != temp);

        cout << endl;
        
    }


int main()
    {
        Node * tail = NULL;

        insertAtTail(tail , 5 , 3);
        print(tail);

        insertAtTail(tail , 3 , 5);
        print(tail);

        insertAtTail(tail , 5 , 7);
        print(tail);

        insertAtTail(tail , 7 , 9);
        print(tail);

        insertAtTail(tail , 5 , 11);
        print(tail);

        insertAtTail(tail , 9 , 13);
        print(tail);

        deletenode(tail , 11);
        print(tail);

        deletenode(tail , 3);
        print(tail);
        








    }