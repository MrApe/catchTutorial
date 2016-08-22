#include "catch.hpp"
#include "drwho.cpp"

TEST_CASE ( "The Doctors' name is unknown", "[theDoctor][name]") 
{
	DrWho theDoctor; 

	REQUIRE ( theDoctor.getRealName() == "" );	
}

TEST_CASE( "The Doctor travels in time", "[theDoctor][travel]")
{
	DrWho theDoctor;

	SECTION( "to a specific year" )
	{
		theDoctor.travelToYear(2016);
		REQUIRE( theDoctor.locate() == 2016 );

		REQUIRE_THROWS( theDoctor.travelToYear(5000000000000000000));
		

		SECTION( "forward" )
		{
			REQUIRE_NOTHROW( theDoctor.travelForwards(1000) );
			REQUIRE(theDoctor.locate() == 3016 );

			SECTION( "backward again" )
			{
				REQUIRE_NOTHROW( theDoctor.travelBackwards(1000) );
				REQUIRE( theDoctor.locate() == 2016 );
			}
			
		}

		SECTION( "backward" )
		{
			REQUIRE_NOTHROW( theDoctor.travelBackwards(1000) );
			REQUIRE(theDoctor.locate() == 1016 );

			SECTION( "forward again" )
			{
				REQUIRE_NOTHROW( theDoctor.travelForwards(1000) );
				REQUIRE( theDoctor.locate() == 2016 );
			}
			
		}
	}
}
