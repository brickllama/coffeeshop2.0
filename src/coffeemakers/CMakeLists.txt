add_library(coffeemakers STATIC)

target_sources(coffeemakers
    PUBLIC FILE_SET
        CXX_MODULES FILES
            frother.cppm
)
