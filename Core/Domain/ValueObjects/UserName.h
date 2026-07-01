#pragma once
#include <iostream>
class UserName
{
private:
	std::string username_;

public:
	explicit UserName(const std::string& value);
	const std::string& userNameValue() const;
	bool operator==(const UserName& value) const;

};