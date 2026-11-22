project(benchmark)

set(SOURCES
    benchmark.cpp
)

add_executable(benchmark ${SOURCES})

target_include_directories(benchmark PRIVATE
    ${CMAKE_SOURCE_DIR}/sort
)

target_link_libraries(benchmark
    ${SORT_LIB}
)

add_custom_command(TARGET benchmark POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:${SORT_LIB}>
    $<TARGET_FILE_DIR:benchmark>
)