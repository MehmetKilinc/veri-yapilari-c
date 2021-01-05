#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * next;
};
int main(){
	struct node * n1 = new node;
	struct node * n2 = new node;
	struct node * n3 = new node;
	
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	
	struct node * temp = n1;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	
	return 0;
}
