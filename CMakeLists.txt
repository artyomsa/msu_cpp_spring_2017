cmake_minimum_required(VERSION 3.4)

project(msu_cpp_spring_2017)

#-----------  variables  -----------
set(DEPENDENCIES_DIR "${CMAKE_SOURCE_DIR}/dependencies")

#----------- Google Test -----------
set(GTEST_ROOT ${DEPENDENCIES_DIR}/gtest-1.8.0)
set(BUILD_GTEST ON CACHE BOOL "Builds the googletest subproject")
set(BUILD_GMOCK OFF CACHE BOOL "Builds the googlemock subproject")
add_subdirectory(${GTEST_ROOT} gtest)
include_directories(${GTEST_ROOT}/googletest/include)

#----------- precompiled -----------
list(APPEND CMAKE_MODULE_PATH "${DEPENDENCIES_DIR}/cotire-1.7.9/CMake")
include(cotire)

set(STDAFX_DIR "${CMAKE_SOURCE_DIR}/src")
set(STDAFX_H "${STDAFX_DIR}/stdafx.h")
include_directories(${STDAFX_DIR})

#------ fix compiler settings ------
if(MSVC)
    foreach(flags CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE)
        string(REPLACE "/MD" "-MT" ${flags} "${${flags}}")
    endforeach()
endif()

#----------- subprojects -----------

add_subdirectory(tkachenko)
add_subdirectory(Bespalov)
add_subdirectory(00)
add_subdirectory(Zaitcev)
add_subdirectory(Garanyan)
add_subdirectory(trempoltsev)
add_subdirectory(Anferov)
add_subdirectory(Kupriakov)
add_subdirectory(Popkova)
add_subdirectory(zuev)
add_subdirectory(sheviakov)
add_subdirectory(konyukhov)
add_subdirectory(islentyev)
add_subdirectory(valinurov)
add_subdirectory(Pronin)
add_subdirectory(Grubov)
add_subdirectory(Gevorkyan)
add_subdirectory(Odzhaev)
add_subdirectory(Ovsepyan)
add_subdirectory(Ivanova)
add_subdirectory(Ermolaev)
add_subdirectory(Petukhov)
add_subdirectory(Spiridonova)
add_subdirectory(pushkin)
add_subdirectory(Dorozhkin)
add_subdirectory(seliverstov)
#add_subdirectory(Porfireva)
#add_subdirectory(Davydov)
add_subdirectory(Bezsudnova)

enable_testing()
