# Catch Test Turotrial für den PLri Testing Workshop

## requires

it needs [catch](https://github.com/philsquared/Catch) ..obviously

		wget -O include/catch.hpp https://raw.githubusercontent.com/philsquared/Catch/master/single_include/catch.hpp

## build

build it with

	c++ -Iinclude src/*.cpp -o doctor

## test

build the tests with

	c++ -Iinclude -Isrc test/*.cpp -o doctorTest 

## run

the program

	./doctor

the tests

	./doctorTest -a -s

with all possible options [defined in catch](https://github.com/philsquared/Catch/blob/master/docs/command-line.md)
