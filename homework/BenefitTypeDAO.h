#pragma once
#ifndef _BENEFITTYPEDAO_H_
#define _BENEFITTYPEDAO_H_
#include "recognition.h"
#include <string>

class BenefitTypeDAO
{
public:
	BenefitTypeDAO(Recognition*);
	virtual ~BenefitTypeDAO();

public:
	string getName(const std::string& barcode);
	string getPrice(const std::string& barcode);
private:
	

};


#endif
