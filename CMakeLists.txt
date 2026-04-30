cmake_minimum_required(VERSION 3.20)

project(docbase VERSION 0.1.0 LANGUAGES CXX)

# Currently using a single core library for all application logic.
# This may later be split into smaller domain-specific libraries
# such as import, storage, analysis, and search.
add_library(docbase_core
        src/placeholder.cpp
)

target_compile_features(docbase_core
        PUBLIC
        cxx_std_20
)

set_target_properties(docbase_core PROPERTIES
        CXX_EXTENSIONS OFF
)

target_include_directories(docbase_core
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(docbase
        src/main.cpp
)

target_link_libraries(docbase
        PRIVATE
        docbase_core
)