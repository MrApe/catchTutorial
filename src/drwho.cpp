#include <string>
#include <ctime>
#include "travelException.cpp"


class DrWho {
private:
	std::string realName;
	int currentYear;

public:
	std::string	getRealName()
	{
		return "";
	}

	void travelToYear(long long year) throw(travelException)
	{
		if (year > 500000000000)
			throw travelException("You traveled past the end of the universe");
		else
			currentYear = year;
	}

	int locate()
	{
		return currentYear;
	}

	void travelBackwards(long long years) throw(travelException)
	{
		if (currentYear - years < -500000000000)
			throw travelException("You traveled bast the big bang");
		else
			currentYear -= years;
	}

	void travelForwards(long long years) throw(travelException)
	{
		if (currentYear + years > 13799000000000000)
			throw travelException("You traveled past the end of the universe");
		else 
			currentYear += years;
	}


	std::string readConfessionDial()
	{
		long long year;
		do 
		{
			time_t  timev = time(0);
			struct tm * now = localtime( &timev );
			year = now->tm_year + 1900;
		}
		while (year < 500000000000 );
		return "The Doctor is afraid!";
	}

};
