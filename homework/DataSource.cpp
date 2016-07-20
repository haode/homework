#include "DataSource.h"
#include <iostream>
#include "string.h"



typedef  struct Bene{
	string barcode;      //打折商品条码
	int type;				//打折类型	0x0001为九五折 0x0002为买二送一
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