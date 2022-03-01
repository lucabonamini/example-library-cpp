#include "external_libraries/external_library_b.h"

#include <iostream>

namespace external_libraries {
void ExternalLibraryB::print() {
	std::cout << "This is external library B!" << std::endl;
}
} // namespace external_libraries
