#pragma once
class Human
{
	int number[20];
	char lastname[20];
	char Name[20];
	char surname[20];
public:
	Human(int num, char last, char name, char sur)
		:number{ num }, lastname{ last }, year{ year }
	{
		std::cout << "Date constructed for " << this << '\n';
	}
	Human() : Human(10, 11, 1998) {}
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

