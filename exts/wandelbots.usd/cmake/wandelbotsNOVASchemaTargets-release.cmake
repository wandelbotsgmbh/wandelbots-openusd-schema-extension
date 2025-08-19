#----------------------------------------------------------------
# Generated CMake target import file for configuration "release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "wandelbotsNOVASchema" for configuration "release"
set_property(TARGET wandelbotsNOVASchema APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(wandelbotsNOVASchema PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libwandelbotsNOVASchema.so"
  IMPORTED_SONAME_RELEASE "libwandelbotsNOVASchema.so"
  )

list(APPEND _cmake_import_check_targets wandelbotsNOVASchema )
list(APPEND _cmake_import_check_files_for_wandelbotsNOVASchema "${_IMPORT_PREFIX}/lib/libwandelbotsNOVASchema.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
