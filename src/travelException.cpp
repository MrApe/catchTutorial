#include <exception>
#include <string>

class travelException : public std::exception
{
	std::string errorMessage;
	public:
		travelException(const std::string& msg = "travel exception occured") :
		   errorMessage(msg)
		{};

		virtual ~travelException() _NOEXCEPT {};
		
		virtual const char* what() const _NOEXCEPT
		{
			return errorMessage.c_str();
		};
};
