#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
private:
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string secret;
public:
	Contact();
	~Contact();
	const std::string	get_fname();
	const std::string	get_lname();
	const std::string	get_nname();
	const std::string	get_phone();
	const std::string	get_secret();
	void 				set_fname(std::string fname);
	void				set_lname(std::string lname);
	void				set_nname(std::string nname);
	void				set_phone(std::string phone);
	void				set_secret(std::string secret);
};

#endif
