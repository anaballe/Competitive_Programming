# include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void printLinkList(Node* n){
    while(n != NULL){
        cout << n -> data << endl;
        n = n -> next;
    }
}
int main(){
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    // now to fill the linklist and fill the nodes too
    first = new Node();
    second = new Node();
    third = new Node();
    // now filling
    first -> data = 8;
    first -> next = second;
    second -> data = 10;
    second -> next = third;
    third -> data = 12;
    third -> next = NULL;
    printLinkList(first);
    return 0;
}