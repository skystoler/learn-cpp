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
    ListNode* node=head->next;
    node->prev=head;
    for(int i=1;i<10;++i){
        ListNode* newnode=new ListNode(i,node->prev,node);
        node=newnode;
    }
    while(!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
