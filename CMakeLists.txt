#
#
#  @author  (C) 2022 by kriskoin [ https://github.com/kriskoin ]
#  @version 1.1.0
# 
#  @section DESCRIPTION
#   This is template to practice programming algorithms in c++
# 
#     GitHub:        https://github.com/kriskoin/2practiceC
#
#

cmake_minimum_required(VERSION 3.10.2)

project(algo)
add_subdirectory( algo )

file(GLOB SOURCE_FILES *.c *.cpp)
foreach(SOURCE_PATH ${SOURCE_FILES})
    
    get_filename_component(EXECUTABLE_NAME ${SOURCE_PATH} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE_PATH} )
    target_link_libraries(${EXECUTABLE_NAME}  algo_library)
    enable_testing()
    add_test(NAME ${EXECUTABLE_NAME}  COMMAND ${EXECUTABLE_NAME})

endforeach(SOURCE_PATH ${SOURCE_FILES})

