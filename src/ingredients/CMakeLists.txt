add_library(ingredients STATIC)

target_sources(ingredients
    PUBLIC FILE_SET
        CXX_MODULES FILES
            liquid.cppm
)
