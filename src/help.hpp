#pragma once

namespace cmkr::help {

const char *version = "cmkr version 0.1.0";

const char *help_msg = R"lit(
Usage: cmk [argument]
arguments:
    init     [app|shared|static]    Starts a new project in the same directory.
    gen                             Generates CMakeLists.txt file.
    run                             Run cmake.
    help                            Show help.
    version                         Current cmkr version.
    )lit";
    
}