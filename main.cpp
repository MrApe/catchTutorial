#include "macrologger.h"
#include "drwho.hpp"

int main(int argc, char* argv[]) 
{
	LOG_INFO("Testworkshop Catch Tutorial")

	DrWho theDoctor;

	theDoctor.travel(2016);

	LOG_INFO("theDoctor traveled to year: %i", theDoctor.locate());
	
}
