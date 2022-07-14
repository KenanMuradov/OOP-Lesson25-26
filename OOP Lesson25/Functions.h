#pragma once
string findSurname(const Debtor& d)
{
	string temp;
	size_t i = d.FullName().size() - 1;
	for (; d.FullName()[i] != ' '; i--);
	i++;

	for (; d.FullName()[i] != '\0'; i++)
	{
		temp += d.FullName()[i];
	}

	return temp;
}


size_t findMostBirtYear(list<Debtor> debtors)
{
	size_t currentCount = 0;
	size_t maxCount = 0;
	size_t mostYear = 0;
	size_t tempYear;
	for (auto i = debtors.begin(); i != debtors.end(); i++)
	{
		tempYear = (*i).BirthDay().year;
		currentCount = count_if(debtors.begin(), debtors.end(), [=](const Debtor& d) {
			return d.BirthDay().year == tempYear;
			});

		if (currentCount > maxCount)
		{
			maxCount = currentCount;
			mostYear = (*i).BirthDay().year;;
		}
	}

	return mostYear;
}


bool canPayTillBirthday(const Debtor& d, unsigned short currentMonth)
{
	if (d.getMonthNo() == -1) return false;

	int debt = d.Debt();
	
	if (d.getMonthNo() >= currentMonth)
	{
		debt -= (12 - d.getMonthNo()) * 500;
		for (size_t i = 0; i < currentMonth; i++)
			debt -= 500;
	}

	else
	{
		for (unsigned short i = d.getMonthNo(); i < currentMonth; i++)
			debt -= 500;
	}


	return debt <= 0;
}

bool canMakeUpWord(const Debtor& d, string word)
{
	string str = "";
	char temp;
	for (size_t i = 0; i < word.size(); i++)
	{
		temp = word[i];
		for (size_t j = 0; j < d.FullName().size(); j++)
		{
			if (d.FullName()[j] == temp)
			{
				str += d.FullName()[j];
				break;
			}
		}
	}

	return str == word;
}