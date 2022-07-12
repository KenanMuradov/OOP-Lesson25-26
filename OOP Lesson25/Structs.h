#pragma once
struct DateTime
{
	string month = "";
	size_t day = 0;
	size_t year = 0;

	DateTime() = default;

	DateTime(string month, size_t day, size_t year)
		: month(month),day(day),year(year) {}

};


ostream& operator<<(ostream& out, const DateTime& d)
{
	return out << d.month << ' ' << d.day << ',' << d.year;
}