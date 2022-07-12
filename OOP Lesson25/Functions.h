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


bool predicateFilter5(const Debtor& d)
{
	size_t count=0;

	for (size_t i = 0; i < d.Phone().size(); i++)
		if (d.Phone()[i] == '7')
			count++;

	return !(d.FullName().size() > 18 && count >= 2) ;

}