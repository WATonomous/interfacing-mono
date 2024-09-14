# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_arbiter_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED arbiter_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(arbiter_FOUND FALSE)
  elseif(NOT arbiter_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(arbiter_FOUND FALSE)
  endif()
  return()
endif()
set(_arbiter_CONFIG_INCLUDED TRUE)

# output package information
if(NOT arbiter_FIND_QUIETLY)
  message(STATUS "Found arbiter: 0.0.0 (${arbiter_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'arbiter' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${arbiter_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(arbiter_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${arbiter_DIR}/${_extra}")
endforeach()
