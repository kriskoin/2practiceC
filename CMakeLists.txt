cmake_minimum_required(VERSION 3.9)

project(binary_search)

add_subdirectory(algo)

file(GLOB SOURCE_FILES *.c *.cpp)

enable_testing()

foreach(SOURCE_PATH ${SOURCE_FILES})
    
    get_filename_component(EXECUTABLE_NAME ${SOURCE_PATH} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE_PATH} )
    target_link_libraries(${EXECUTABLE_NAME} algo_library)

    add_test(NAME ${EXECUTABLE_NAME}  COMMAND ${EXECUTABLE_NAME})

endforeach(SOURCE_PATH ${SOURCE_FILES})

