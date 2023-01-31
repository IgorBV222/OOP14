#pragma once
#include <iostream>
class Books
{
public:
	Books(const std::string& author, int& yearIssue, std::string title, size_t idBook, std::string _info);

	const std::string& getAuthor() const;
	void setAuthor(const std::string& author);

	int getYearIssue();

	
private:

	std::string _author;
	int _yearIssue;
	std::string _title;
	size_t _idBook;
	std::string _info;
};

