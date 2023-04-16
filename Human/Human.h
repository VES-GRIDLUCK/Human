#pragma once
class Human
{
	int number;
	char lastname;
	char name;
	char surname;
public:
	Human(int num, char last, char nameP, char sur)
		:number{ num }, lastname{ last }, name{ nameP }, surname{ sur }
	{
		cout << "Human constructed for " << this << '\n';
	}
	Human() : Human(10, "Vasin", "Egor", "Sergeevich") {}
	~Human() {
		cout << "Human destructed for "	<< this << '\n';
	}
	void print() {
		cout << number << '  ' << lastname << '  ' << name << '  ' << surname << '\n';
	}
	Human& setNumber(int numP) { number = numP; return *this; }
	Human& setLastname(char lastP) { lastname = lastP; return *this; }
	Human& setName(char nameP) { name = nameP; return *this; }
	Human& setSurname(char surP) { surname = surP; return *this; }

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

