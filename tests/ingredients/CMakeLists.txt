add_executable(coffeemakers.tests)

target_sources(coffeemakers.tests
    PRIVATE
        liquid_tests.cpp
)

target_link_libraries(coffeemakers.tests
    PRIVATE
        ingredients
        GTest::gtest_main
)
