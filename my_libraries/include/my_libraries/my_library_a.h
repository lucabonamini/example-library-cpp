#pragma once

#include <external_libraries/external_library_a.h>

namespace my_libraries {
class MyLibraryA {
public:
void print();
private:
external_libraries::ExternalLibraryA ela;
};
}  // namespace my_libraries