cmake_minimum_required(VERSION 3.2...3.27.5)  

project(sort) 

set(SOURCES
    sort.cpp
) 

add_library(${PROJECT_NAME} SHARED ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(SORT_LIB ${PROJECT_NAME} PARENT_SCOPE)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)