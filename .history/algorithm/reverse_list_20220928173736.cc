#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int v,ListNode* p=nullptr,ListNode* n=nullptr)
        :val(v){}
};

int main(){
    ListNode* head=new ListNode(0);
    ListNode* node=head;
    head->next=node;
    node->prev=head;

    for(int i=1;i<10;++i){
        ListNode* newnode=new ListNode(i);
        node->next=newnode;
        newnode->prev=node;
        node=newnode;
    }

    ListNode* node1=head;
    // while(node1!=nullptr){
    //     ListNode* cur=node1->next;
    //     ListNode* tmp=nullptr;
    //     node1->next=tmp;
    //     cur->prev=cur->next;

    // }

    while(head!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
