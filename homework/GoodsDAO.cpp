#include "GoodsDAO.h"

GoodsDAO::GoodsDAO(data)
{

}

GoodsDAO::~GoodsDAO()
{

}

std::string GoodsDAO::getName(const std::string& barcode)
{   Goods *data;
	for(data=head1;data->Goodsnext;data=data->Goodsnext){
		if(data->Goodsnext->barcode==barcode)
			return data->name;
	}

	return NULL;
}

std::string GoodsDAO::g(const std::string& barcode)
{   Goods *data;
	for(data=head1;data->Goodsnext;data=data->Goodsnext){
		if(data->Goodsnext->barcode==barcode)
			return data->name;
	}

	return NULL;
}
