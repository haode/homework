#pragma once
#ifndef _GOODSDAO_H_
#define _GOODSDAO_H_
#include <string>
#include "recognition.h"

typedef struct Goods{
	std::string barcode;  //条码
	std::string name;	//商品名称
	std::string unit;	//商品单位
	double price;	//商品单价 
	struct Goods *Goodsnext;
}Goods;


class GoodsDAO
{
private:
	Goods *head1;

public:
	
	GoodsDAO(Recognition*);
	//virtual ~GoodsDAO();


	GoodsDAO(){
	head1=new Goods;
	head1->barcode="null";
	head1->Goodsnext=NULL;
	
	}
	~GoodsDAO(){
	Goods *p1=head1, *q1;
        while(p1){
            q1=p1;
            p1=q1->Goodsnext;
            delete q1;
    }
public:
	string getName(const std::string& barcode);
	std::string getPrice(const std::string& barcode);
	std::string getUnit(const std::string& barcode);
};


//#endif
