#include "Email.h"
#include <regex>
#include <string>
#include "Exceptions/Exceptions.h"
#include "Enums/Enums.h"
explicit Email::Email(const std::string& value) {
	if (value.empty()) {
		throw Exceptions(DomainError::EmailEmpty);
	}
	static const std::regex gmailPattern(R"(^(?=[a-zA-Z0-9.]{6,30}@gmail\.com$)(?!.*\.\..*@)(?!^\.)(?!.*\.@)[a-zA-Z0-9.]+@gmail\.com$)");
	if (!std::regex_match(value, gmailPattern)) {
		throw Exceptions(DomainError::EmailInvalidFormat);
	}
	email_ = value;
}
const std::string& Email::emailValue() const {
	return email_;
}
bool Email::operator==(const Email& email) const {
	if (this->email_ == email.emailValue()) {
		return ture;
	}
	else {
		return false;
	}
}