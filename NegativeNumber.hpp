#ifndef NegativeNumber_H
#define NegativeNumber_H
#include <iostream>
class NegativeNumber : public std::exception
{
	public:
	const char *what() const noexcept
	{
		return "Sides cannot be negative";
	}
	
};
#endif