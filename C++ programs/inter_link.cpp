# include <iostream>
# include <bits/stdc++.h>
using namespace std;
class Node{
    public : 
    int data;
    Node *next;
};
vector<int> solve(int n){
    Node *head = NULL;
    int i,j;
    vector<int> v;
    head = new Node();
    head -> data = 1;
    head -> next = NULL;
    if(n<3){
        for(i=1;i<=n;++i)
            v.push_back(i);
        return v;
    }
    //int j = 2;
    Node *tmp = head;
    for(j=2;j<=n;++j){
        if(j!=n){
        Node *l1;
        l1 = new Node();
        l1 -> data = j;
       // cout << l1 -> data << endl;
        l1 -> next = NULL;
        tmp -> next = l1;
        tmp = tmp -> next;
        }
        else{
            Node *l1;
            l1 = new Node();
            l1 -> data = n;
            l1 -> next = head;
            tmp -> next = l1;

        }
    }
    Node *nptr = head;
    int p=n;
    while(1){
        Node *t,*tr;
        t = new Node();
        tr = new Node();
        tr = nptr;
        tr = tr->next;
        t = tr;
        tr = tr->next;
      //  cout<<tr->data<<" is deleted "<<endl;
        tr = tr->next;
        t -> next = tr;
        --p;
        if(p==2){
            break;
        }
        nptr = nptr->next;
    }
   v.push_back(nptr->data);
   nptr = nptr->next;
   v.push_back(nptr->data);
   sort(v.begin(),v.end());
    return v;
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    vector<int> a = solve(n);
    for(int i=0;i<a.size();++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
