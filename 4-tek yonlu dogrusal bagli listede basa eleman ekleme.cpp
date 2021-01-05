#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * next;
};
struct node * basaEkle(struct node * head, int key) {
	if( head== NULL){
		struct node * temp = new node();
		temp->data = key;
		temp->next = NULL;		
		head = temp;		
		cout<<" ilk dugum olusturuldu."<<endl;
	}
	else {
		struct node * temp = new node();
		temp->data = key;
		temp->next = head;		
		head = temp;		
		cout<<"dugume eklendi."<<endl;
	}
	return head;
}
int main(){
	struct node * head = NULL;
	head = basaEkle(head, 1);
	head = basaEkle(head, 2);
	head = basaEkle(head, 3);
	//cout<<head->data<<" ";
	//cout<<head->next->data<<" ";
	//cout<<head->next->next->data<<" ";
	
	struct node * temp = head;
	while(temp!=NULL){
		
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	return 0;
}
