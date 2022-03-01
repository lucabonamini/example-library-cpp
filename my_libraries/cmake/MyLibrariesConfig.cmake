include(CMakeFindDependencyMacro)

find_dependency(ExternalLibraries 1.0 REQUIRED EXACT)

include("${CMAKE_CURRENT_LIST_DIR}/MyLibrariesTargets.cmake")