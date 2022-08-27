
add_library (algo_library
SHARED
algo.cpp
)
set_target_properties(algo_library PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories( algo_library PUBLIC
${CMAKE_CURRENT_LIST_DIR}/include)