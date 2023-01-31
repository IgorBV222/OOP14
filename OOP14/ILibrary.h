#pragma once

class ILibrary
{
public:
	ILibrary();

	virtual void registred() = 0;
	virtual void pop() = 0;

	virtual void addSubscriber();
	virtual void addBook();

private:


};

