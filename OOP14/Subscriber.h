#pragma once
#include <iostream>
class Subscriber
{
public:
	Subscriber(const std::string& name, std::string& booksWanted, size_t id);

	const std::string& getName() const;
	void setName(const std::string& name);
	void setBooksWanted(std::string& booksWanted);


private:
	std::string _name;
	std::string _booksWanted;
	size_t _id;
};

