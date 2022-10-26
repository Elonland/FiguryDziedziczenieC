#ifndef WrongData_H
#define WrongData_H
#include <iostream>
class WrongData : public std::exception
{
	public:
	const char *what() const noexcept
	{
		return "Sizes of the sides are wrong";
	}
	
};
#endif
