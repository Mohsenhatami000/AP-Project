#pragma once
enum class DomainError
{
	//Email
	EmailEmpty,
	EmailInvalidFormat,
	//UserName
	UserNameEmpty,
	UserNameInvalidFormat,
	UserNameInvalidLenth,
	//PhoneNumber
	PhoneNumberEmpty,
	PhoneNumberInvalidLenth,
	PhoneNumberInvalidCharacter,
	PhoneNumberInvalidStart
};