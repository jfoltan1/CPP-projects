#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <Contact.hpp>
class Phonebook
{
	private:
		Contact contacts[8];
		int	index;
	public:
	Phonebook();
	~Phonebook();
	void 	add();
	void	search();
	void	print(Contact contact);
	Contact get_contact(int index);
};

#endif