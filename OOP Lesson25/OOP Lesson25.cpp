#include <iostream>
#include <iomanip>
#include <list>
#include <algorithm>
#include <numeric>
#include <time.h>

#pragma warning(disable : 4996)

using namespace std;

#include "Structs.h"
#include "Debtor.h"
#include "Functions.h"
#include "FakeData.h"

int main()
{
	cout << left;

	time_t localTime = time(0);
	tm* currentTime = localtime(&localTime);
	size_t currentYear = currentTime->tm_year + 1900;

#pragma region FILTER_3

	//for_each(debtors.begin(), debtors.end(), [=](const Debtor& d)->void {
	//	if ((currentYear - d.BirthDay().year) >= 26 && (currentYear - d.BirthDay().year) < 36)
	//		cout << d << endl;
	//	});

#pragma endregion

#pragma region FILTER_4

	//debtors.remove_if();


	//for_each(debtors.begin(), debtors.end(), [](const Debtor& d)->void {
	//	if (d.Debt() <= 5000)
	//		cout << d << endl;
	//	});

#pragma endregion

#pragma region FILTER_5

	//for_each(debtors.begin(), debtors.end(), [](const Debtor& d) {
	//	int digitCount = 0;
	//	for (size_t i = 0; i < d.Phone().size(); i++)
	//		if (d.Phone()[i] == '7')
	//			digitCount++;
	//
	//	if (d.FullName().size() >= 18 && digitCount >= 2)
	//		cout << d << endl;
	//	});
		
#pragma endregion

#pragma region FILTER_7



	/*for_each(debtors.begin(), debtors.end(), [](const Debtor& d)->void {
		if (d.BirthDay().month == "December"
			|| d.BirthDay().month == "January"
			|| d.BirthDay().month == "February")
			cout << d << endl;
		});*/


#pragma endregion

#pragma region FILTER_8

	//int sum=accumulate(debtors.begin(), debtors.end(), 0, [](int total, const Debtor& d) {
	//	return total + d.Debt();
	//	});
	//
	//int avarage = sum / debtors.size();
	//cout << "\n\tAVARAGE: " << avarage << endl << endl;


	////Surname
	//debtors.sort([](const Debtor& d1, const Debtor& d2) {
	//	return findSurname(d1)< findSurname(d2);
	//	});

	//Debt
	//debtors.sort([](const Debtor& d1, const Debtor& d2) {
	//	return d1.Debt() > d2.Debt();
	//	});


	//for_each(debtors.begin(), debtors.end(), [=](const Debtor& d)->void {
	//	if (d.Debt() > avarage)
	//		cout << d << endl;
	//	});

#pragma endregion

#pragma region FILTER_14

	/*debtors.sort([](const Debtor& d1, const Debtor& d2) {
		return d1.Debt() > d2.Debt();
		});
	auto iter = debtors.begin();

	for (size_t i = 0; i < 5&&iter!=debtors.end(); i++)
	{
		cout << *(iter++) << endl;
	}*/

#pragma endregion

#pragma region FILTER_15

	/*int sum=accumulate(debtors.begin(), debtors.end(), 0, [](int total, const Debtor& d) {
		return total + d.Debt();
		});

	cout << sum;*/

#pragma endregion

#pragma region FILTER_16

//for_each(debtors.begin(), debtors.end(), [](const Debtor& d)->void {
//	if (d.BirthDay().year >= 1939 && d.BirthDay().year <= 1945)
//		cout << d << endl;
//	});

#pragma endregion



}