#pragma once

#include "../src/uuid4.hpp"

#include <source_location>

// from: https://github.com/atomicptr/rapture/blob/master/src/rapture.hpp

#ifndef RAPTURE_PRINT_FUNC
    #include <print>
    #define RAPTURE_PRINT_FUNC(...) std::println(stderr, __VA_ARGS__)
#endif

#define assert(condition, ...)                                          \
    if (!(condition)) {                                                 \
        auto rapture_loc = std::source_location::current();             \
        RAPTURE_PRINT_FUNC("");                                         \
        RAPTURE_PRINT_FUNC(                                             \
            "========= ASSERTATION FAILED {}:{}:{} =========",          \
            rapture_loc.file_name(),                                    \
            rapture_loc.line(),                                         \
            rapture_loc.column()                                        \
        );                                                              \
        RAPTURE_PRINT_FUNC("\tAssert :\t{}", (#condition));             \
        RAPTURE_PRINT_FUNC("\tMessage:\t{}", std::format(__VA_ARGS__)); \
        RAPTURE_PRINT_FUNC("");                                         \
        std::abort();                                                   \
    }
