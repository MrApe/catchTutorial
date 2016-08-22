#include "macrologger.h"
#include "drwho.cpp"

int main(int argc, char* argv[]) 
{
	LOG_INFO("Testworkshop Catch Tutorial");

	DrWho theDoctor;

	theDoctor.travelToYear(2016);

	LOG_INFO("theDoctor traveled to year: %i", theDoctor.locate());
	
}
