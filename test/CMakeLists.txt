cmake_minimum_required(VERSION 3.1)
project(graphyRestServiceTest)

set(CMAKE_CXX_STANDARD 17)

conan_cmake_run(CONANFILE conanfile.txt BASIC_SETUP NO_OUTPUT_DIRS BUILD missing)

file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} ${SRC} ${SRC_test})
conan_target_link_libraries(${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} graphyRestServiceLib)