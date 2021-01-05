#include<iostream>
using namespace std;
struct ogrenci{
	string ad;
	string soyad;
	char cinsiyet;
	int yas;
	
	struct ogrenci * next;
};

int main(){
	struct ogrenci * o1 = new ogrenci();
	struct ogrenci * o2 = new ogrenci();
	
	
	
	o1->ad = "ayhan";
	o1->soyad = "ýsýk";
	o1->cinsiyet = 'e';
	o1->yas = 20;
	
	o2->ad = "hulya";
	o2->soyad = "avsar";
	o2->cinsiyet = 'k';
	o2->yas = 20;
	
	o1->next = o2;
	o2->next = NULL;
	
	struct ogrenci * temp = o1;
	while(temp!=NULL){
		cout<<temp->ad<<" "<<temp->soyad<<" "<<temp->cinsiyet<<" "<<temp->yas<<" "<<endl;
		temp = temp->next;
	}
	
	return 0;
}
