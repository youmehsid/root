############################################################################
# CMakeLists.txt file for building ROOT net/globusauth package
############################################################################

include_directories(${GLOBUS_INCLUDE_DIRS})
if(ssl)
  include_directories(${OPENSSL_INCLUDE_DIR})
endif()

ROOT_LINKER_LIBRARY(GlobusAuth *.cxx  LIBRARIES Core ${GLOBUS_LIBRARIES} ${OPENSSL_LIBRARIES}  ${CMAKE_DL_LIBS} DEPENDENCIES RootAuth Net)

if(builtin_openssl)
  ROOT_ADD_BUILTIN_DEPENDENCIES(GlobusAuth OPENSSL)
endif()
