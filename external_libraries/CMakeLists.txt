cmake_minimum_required(VERSION 3.15)

project(external_libraries VERSION 1.0 LANGUAGES CXX)

add_library(ExternalLibraryA src/external_library_a.cpp)

target_include_directories(ExternalLibraryA
  PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

add_library(ExternalLibraryB src/external_library_b.cpp)

target_include_directories(ExternalLibraryB
  PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

install(TARGETS ExternalLibraryA ExternalLibraryB
  EXPORT ExternalLibraries-export
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
)

install(EXPORT ExternalLibraries-export
  FILE
  ExternalLibrariesTargets.cmake
  NAMESPACE
  ExternalLibraries::
  DESTINATION
    lib/cmake/ExternalLibraries
)

install(DIRECTORY
          ${CMAKE_CURRENT_SOURCE_DIR}/include/external_libraries
        DESTINATION
          "include")

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/ExternalLibrariesConfig.cmake
        DESTINATION "lib/cmake/ExternalLibraries")

include(CMakePackageConfigHelpers)
write_basic_package_version_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/ExternalLibrariesConfigVersion.cmake
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY SameMajorVersion)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/ExternalLibrariesConfigVersion.cmake
        DESTINATION "lib/cmake/ExternalLibraries")
