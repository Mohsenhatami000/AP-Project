#pragma once
#include <exception>
class Exceptions : public std::exception
{
private:
	Exceptions exception_;

public:
	Exceptions(Exceptions ex);
	Exceptions error() const;
};