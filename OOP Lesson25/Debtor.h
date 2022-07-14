#pragma once
class Debtor
{
	string fullName = "No_Info";
	DateTime birthDay;
	string phone = "No_Info";
	string email = "No_Info";
	string address = "No_Info";
	int debt = 0;
public:
	Debtor() = default;

	Debtor(string fullname, DateTime birthDay, string phone, string email, string address, int debt) {
		this->fullName = fullname;
		this->birthDay = birthDay;
		this->phone = phone;
		this->email = email;
		this->address = address;
		this->debt = debt;
	}

	string FullName() const { return fullName; }
	DateTime BirthDay() const { return birthDay; }
	string Phone() const { return phone; }
	string Email() const { return email; }
	string Address() const { return address; }
	int Debt() const { return debt; }

	unsigned short getMonthNo() const
	{
		if (birthDay.month == "January") return 1;
		else if (birthDay.month == "February") return 2;
		else if (birthDay.month == "March") return 3;
		else if (birthDay.month == "April") return 4;
		else if (birthDay.month == "May") return 5;
		else if (birthDay.month == "June") return 6;
		else if (birthDay.month == "July") return 7;
		else if (birthDay.month == "August") return 8;
		else if (birthDay.month == "September") return 9;
		else if (birthDay.month == "October") return 10;
		else if (birthDay.month == "November") return 11;
		else if (birthDay.month == "December") return 12;

		return -1;
	}

};

ostream& operator<<(ostream& out, const Debtor& d)
{
	out << setw(13) << "Full Name: " << d.FullName() << endl
		<< setw(13) << "Birth Date: " << d.BirthDay() << endl
		<< setw(13) << "Phone: " << d.Phone() << endl
		<< setw(13) << "Email: " << d.Email() << endl
		<< setw(13) << "Address: " << d.Address() << endl
		<< setw(13) << "Debt: " << d.Debt() << endl;

	return out;
}
