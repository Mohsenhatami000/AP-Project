#pragma once
#include <iostream>
class PhoneNumber
{
private:
	std::string phoneNumber_;

public:
	explicit PhoneNumber(const std::string& value);
	const std::string& phoneNumerValue() const;
	bool operator==(const PhoneNumber& number) const;

};