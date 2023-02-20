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
        head->next=new ListNode(i);
        head=head->next;
    }

    // while(node->next!=nullptr){
    //     cout<<node->next->val<<" ";
    //     node=node->next;
    // }

    while(node!=nullptr){
        
    }

    while(node->next!=nullptr){
        cout<<node->next->val<<" ";
        node=node->next;
    }
    return 0;
}
