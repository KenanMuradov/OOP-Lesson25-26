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
