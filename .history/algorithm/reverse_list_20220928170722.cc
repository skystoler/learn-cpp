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
    head->next=nullptr;

    for(int i=1;i<10;++i){
        head->next=new ListNode(i);
        head=head->next;
    }

    while(head!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
