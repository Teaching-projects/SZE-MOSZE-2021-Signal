cmake_minimum_required (VERSION 2.8.11)
project (SZE-MOSZE-2021)
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})
add_executable(playertest playerTest.cpp ../Player.cpp)
target_link_libraries(playertest ${GTEST_LIBRARIES} pthread)

add_executable(wordstest wordTest.cpp ../Words.cpp)
target_link_libraries(wordstest ${GTEST_LIBRARIES} pthread)
