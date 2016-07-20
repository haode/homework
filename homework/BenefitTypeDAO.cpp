#include "BenefitTypeDAO.h"

BenefitTypeDAO::BenefitTypeDAO()
{

}

BenefitTypeDAO::~BenefitTypeDAO()
{

}

std::string BenefitTypeDAO::getName(const std::string& barcode)
{
	Goods *data;
	return data->getInfo(barcode)->name;
}

std::string BenefitTypeDAO::getPrice(const std::string& barcode)
{
	return data[barcode]->price;
}
