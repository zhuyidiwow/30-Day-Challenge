#include <iostream>
#include <cstddef>
using namespace std;    
class Node {
    public:
        int data;
        Node *next;
        Node(int d) {
            data = d;
            next = NULL;
        }
};
class Solution{
    public:

        Node* insert(Node *head, int data) {
            //Complete this method
            if (head == nullptr) {
                head = new Node(data);
                head-> next = nullptr;
            }

            else if  (head->next == nullptr) {
                head->next = new Node(data);
                head->next->next = nullptr;
            }

            else {
                Node* cur = head;
                while (cur->next != nullptr) {
                    cur = cur->next;
                }
                cur->next = new Node(data);
                cur->next->next = nullptr;
            }

            return head;
        }

    void display(Node *head) {
        Node *start = head;
        while(start) {
            cout << start->data << " ";
            start = start->next;
        }
    }
};

int main()
{
    Node* head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while(T-- > 0){
        cin >> data;
        head = mylist.insert(head,data);
    }   
    mylist.display(head);
        
}