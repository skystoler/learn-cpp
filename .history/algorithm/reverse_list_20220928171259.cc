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
    ListNode* node=new ListNode(0);
    ListNode* head=new ListNode(0);
    node->next=head;
    head->next=nullptr;

    for(int i=1;i<10;++i){
        head->next=new ListNode(i);
        head=head->next;
    }

    while(node!=nullptr){
        cout<<node->val<<" ";
        node=node->next;
    }
    return 0;
}
