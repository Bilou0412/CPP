
#include "Serializer.class.hpp"
#include <iostream>

int	main()
{
	Data	data;
	data.value = 42;

	uintptr_t serializedPtr = Serializer::serialize(&data);
	Data *deserializedPtr = Serializer::deserialize(serializedPtr);

	if (deserializedPtr == &data)
		std::cout << "Ok" << std::endl;
	else
		std::cerr << "Error" << std::endl;
	return (0);
}