#ifndef CONTACT_HPP

#include "main.hpp"

class Contact
{
private:
	std::string fname;
	std::string lname;
	std::string nick;
	std::string phone_number;
	std::string secret;
public:
	Contact(void); //TODO Why? 
	~Contact(void); //TODO Why? 
	
	//TODO setters and getters
	std::string get_fname;
	std::string get_lname;
	std::string get_nick;
	std::string get_phone_number;
	std::string get_secret;

	void	set_fname(std::string str);
	void	set_lname(std::string str);
	void	set_nick(std::string str);
	void	set_phone_number(std::string str);
	void	set_secret(std::string str);

};

#endif
