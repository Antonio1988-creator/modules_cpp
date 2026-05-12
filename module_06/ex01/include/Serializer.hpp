#ifndef _SERIALIZER_HPP_
#define _SERIALIZER_HPP_

#include "Data.hpp"
#include <stdint.h>


class Serializer {
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(Serializer const &src);
		~Serializer();
		
		Serializer &	operator=(Serializer const &rSym);
};

#endif
