#include <iostream.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int v)
        :val(v)
        ,next(nullptr)
        ,prev(nullptr){}
};

int main(){
    ListNode* head=new ListNode(0);
    for(int i=1;i<10;++i){
        head->next=new ListNode();
    }
    return 0;
}
