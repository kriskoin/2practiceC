
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

