#include "my_libraries/my_library_a.h"

#include <external_libraries/external_library_b.h>

namespace my_libraries {
void MyLibraryA::print() {
    ela.print();
    external_libraries::ExternalLibraryB elb;
    elb.print();
}
}  // namespace my_libraries