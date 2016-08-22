#include <string>
#include <ctime>

class DrWho {
private:
	std::string realName;
	int currentYear;

public:
	getRealName()
	{
		return "";
	}

	travelToYear(int year)
	{
		currentYear = year;
	}

	locate()
	{
		return currentYear;
	}

	travelBackwards(int years)
	{
		currentYear -= years;
	}

	travelForwards(int years)
	{
		currentYear += years;
	}


	readConfessionDial()
	{
		do 
		{
			time_t  timev = time(0);
			struct tm * now = localtime( &timev );
			int year = now->tm_year + 1900;
		}
		while (year < 500000000000);
	}

}
