#include "PhoneNumber.h"
#include <regex>
#include <string>
#include "Exceptions/Exceptions.h"
#include "Enums/Enums.h"
#include "Shared/Constants/Constants.h"
explicit PhoneNumber::PhoneNumber(const std::string& value) {
	if (value.empty()) {
		throw Exceptions(DomainError::PhoneNumberEmpty);
	}
	static const std::regex mobilePattern(R"(^(09\d{9}|98\d{10})$)");
	if (!std::regex_match(value, mobilePattern)) {
		if (!std::all_of(value.begin(), value.end(), ::isdigit)) {
			throw Exceptions(DomainError::PhoneNumberInvalidCharacter);
		}
		else if (value.length() != PHONE_NUMBER_MAX_Lenth || value.length() != PHONE_NUMBER_MIN_LENTH) {
			throw Exceptions(DomainError::PhoneNumberInvalidLenth);
		}
		throw Exceptions(DomainError::PhoneNumberInvalidStart);
	}
	phoneNumber_ == value;
}
const std::string& PhoneNumber::phoneNumerValue() const {
	return phoneNumber_;
}
bool PhoneNumber::operator==(const PhoneNumber& number) const {
	if (this->phoneNumber_ == number.phoneNumerValue()) {
		return ture;
	}
	else {
		return false;
	}
}