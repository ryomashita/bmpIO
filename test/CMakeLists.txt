include(${CMAKE_SCRIPTS_DIR}/install_gtest.cmake)

# add_executable(AddTest add_test.cpp)
# target_include_directories(AddTest PRIVATE ${CMAKE_SOURCE_DIR}/src)
# target_link_libraries(AddTest PRIVATE Add)
# enable_gtest(AddTest)
# enable_memcheck(AddTest)

add_executable(BmpMiniTest bmpmini_test.cpp)
target_include_directories(BmpMiniTest PRIVATE ${CMAKE_SOURCE_DIR}/src)
set_normal_compile_options(BmpMiniTest)
enable_gtest(BmpMiniTest)
# enable_memcheck(BmpMiniTest)

create_symlink_to_build(BmpMiniTest ${CMAKE_SOURCE_DIR}/test/data/lena_color.bmp)
