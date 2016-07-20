#include "DataSource.h"
#include <iostream>
#include "string.h"



typedef  struct Bene{
	string barcode;      //������Ʒ����
	int type;				//��������	0x0001Ϊ������ 0x0002Ϊ�����һ
	struct Bene *Benenext;
}Bene;


class Cgoods {
private: 
	Goods *head1;
	Bene *head2;

public: 
	Cgoods(){
	head1=new Goods;
	head1->barcode="null";
	head1->Goodsnext=NULL;
	head2=new Bene;
	head2->barcode="null";
	head2->Benenext=NULL;
	}
	~Cgoods(){
	Goods *p1=head1, *q1;
        while(p1){
            q1=p1;
            p1=q1->Goodsnext;
            delete q1;
        }
	Bene *p2=head2, *q2;
        while(p2){
            q2=p2;
            p2=q2->Benenext;
            delete q2;
        }
	}
};