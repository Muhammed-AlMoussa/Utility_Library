#include<iostream>
#include"clsUtil.h"

using namespace std;

int main()
{
	clsUtil::Srand();

	cout << clsUtil::RandomNumber(10, 20) << endl;
	cout << clsUtil::GetRandomCharecter(clsUtil::MixChar) << endl;
	cout << clsUtil::GenerateWord(clsUtil::MixChar, 8) << endl;
	cout << clsUtil::GenerateKey(clsUtil::MixChar) << endl;
	clsUtil::GenerateKeys(10, clsUtil::MixChar);

	return 0;
}