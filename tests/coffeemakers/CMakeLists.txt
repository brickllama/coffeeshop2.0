add_executable(coffeemakers.tests)

target_sources(coffeemakers.tests
    PRIVATE
        frother_tests.cpp
)

target_link_libraries(coffeemakers.tests
    PRIVATE
        coffeemakers
        GTest::gtest_main
)
