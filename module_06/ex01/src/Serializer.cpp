#include "../include/Serializer.hpp"

// Private members (trivial definitions, not used)
Serializer::Serializer()
{

}
Serializer::Serializer(Serializer const &src)
{ 
    (void)src; 
}

Serializer::~Serializer() 
{

}
Serializer &Serializer::operator=(Serializer const &rSym) 
{ 
    (void)rSym; return *this; 
}

// Serialize: convert pointer to uintptr_t using reinterpret_cast
uintptr_t Serializer::serialize(Data* ptr) 
{
	return reinterpret_cast<uintptr_t>(ptr);
}

// Deserialize: convert uintptr_t back to pointer using reinterpret_cast
Data* Serializer::deserialize(uintptr_t raw) 
{
	return reinterpret_cast<Data*>(raw);
}
