#pragma once

#include <iostream>

class Fixed {
	private:
		int 				value;
		static const int	fractBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		~Fixed(void);

		Fixed&	operator=(const Fixed& other);
		int 	getRawBits(void) const;
		void	setRawBits(const int raw);
};
