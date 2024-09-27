#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MikroC.Core" for configuration "Release"
set_property(TARGET MikroC.Core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MikroC.Core PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "ASM;C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/lib_core.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS MikroC.Core )
list(APPEND _IMPORT_CHECK_FILES_FOR_MikroC.Core "${_IMPORT_PREFIX}/lib/lib_core.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)