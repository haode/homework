#include "stdafx.h"
#include "CppUnitTest.h"
#include "ShoppingList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(ShoppingListTest)
	{
	public:
		TEST_METHOD(should_return_true_list_when_get_listitem)
		{
			// TODO: �ڴ�������Դ���
			ShoppingList* list = new ShoppingList(new ItemGenerator);
			string expected = "";
			Assert::AreEqual(expected, list->getList());
		}

	};
}