#include "stdafx.h"
#include "CppUnitTest.h"
#include "BenefitTypeDAO.h"
#include "fakeBenefitTypeSource.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(BenefitTypeDAOTest)
	{
	public:
		TEST_METHOD(should_return_buy2onefree_when_search_by_ITEM000001)
		{
			// TODO: �ڴ�������Դ���
			fakeBenefitTypeSource* data = new fakeBenefitTypeSource;

			BenefitTypeDAO* pDao = new BenefitTypeDAO(data);
			Assert::AreEqual("��2��1", pDao->getType("ITEM000001"));
		}


	};
}