#pragma once
class Human
{
private:
	char* number;
	char* lastname;
	char* name;
	char* surname;
public:
	Human(const char* number, const char* lastname, const char* name, const char* surname) {
		this->number = number ? new char[strlen(number) + 1] : nullptr;
		this->lastname = lastname ? new char[strlen(lastname) + 1] : nullptr;
		this->name = name ? new char[strlen(name) + 1] : nullptr;
		this->surname = surname ? new char[strlen(surname) + 1] : nullptr;
		for (int i = 0; i < strlen(number); i++)
		{
			this->number[i] = number[i];
		}
		for (int i = 0; i < strlen(lastname); i++)
		{
			this->lastname[i] = lastname[i];
		}
		for (int i = 0; i < strlen(name) ; i++)
		{
			this->name[i] = name[i];
		}
		for (int i = 0; i < strlen(surname); i++)
		{
			this->surname[i] = surname[i];
		}
	}
	
	Human() : Human("10", "Vasin", "Egor", "Sergeevich") {}
	~Human() {
		cout << "Human destructed for "	<< this << '\n';
	}
	void print() {
		cout << number << '  ' << lastname << '  ' << name << '  ' << surname << '\n';
	}
};

class Date
{
	int day;
	int month;
	int year;
public:
	Date(int dayP, int monthP, int yearP)
		:day{ dayP }, month{ monthP }, year{ yearP }
	{
		std::cout << "Date constructed for " << this << '\n';
	}
	Date() : Date(10, 11, 1998) {}
	~Date() {
		std::cout << "Date destructed for "
			<< this << '\n';
	}
	void print() {
		std::cout << day << '.' << month
			<< '.' << year << '\n';
	}
	Date& setDay(int dayP) { day = dayP; return *this; }
	Date& setMonth(int monthP) { month = monthP; return *this; }
	Date& setYear(int yearP) { year = yearP; return *this; }
};

