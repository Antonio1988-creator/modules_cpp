#ifndef _SERIALIZER_HPP_
#define _SERIALIZER_HPP_

#include "Data.hpp"
#include <stdint.h>

/* C++98: ensure uintptr_t exists; if not, provide a conservative fallback. */
#ifndef UINTPTR_MAX
typedef unsigned long uintptr_t;
#endif

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
