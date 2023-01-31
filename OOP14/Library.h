#pragma once
#include "ILibrary.h"
#include "Subscriber.h"
#include "Books.h"
#include <queue>
#include <vector>

class Library : public ILibrary 
{
public:	

	void registred();
	void pop();
	void addSubscriber() override;
	void addBook() override;

private:
	
	std::vector <Books> _books;
	std::queue <Subscriber> _subscriber;
};

