#include "Subscriber.h"


Subscriber::Subscriber(const std::string& name, std::string& booksWanted, size_t id) : _name(name), _booksWanted(booksWanted), _id(id) {}


const std::string& Subscriber::getName() const {
		return _name;
}

void Subscriber::setName(const std::string & name) {
		_name = name;
}

void Subscriber::setBooksWanted(std::string& booksWanted) {
	_booksWanted = booksWanted;
}