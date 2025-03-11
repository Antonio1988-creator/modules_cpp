#ifndef PHONEBOO_H
#define PHONEBOO_H

#include "library.hh"

class	PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
	private:
		const int	max_contacts;
		int		current_nb;
		int		nb_contacts;
		Contact		array[8];
}

#endif

