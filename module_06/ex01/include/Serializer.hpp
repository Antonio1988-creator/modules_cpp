#ifndef _SERIALIZER_HPP_
#define _SERIALIZER_HPP_

#include "Data.hpp"
#include <cstdint>
#include <stdint.h> // fallback for older compilers/environments

// Provide a fallback typedef for uintptr_t if the platform doesn't define it
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
