#!/usr/bin/env python
import os
import sys

project_name = "playground"

env = SConscript("godot-cpp/SConstruct")

# For reference:
# - CCFLAGS are compilation flags shared between C and C++
# - CFLAGS are for C-specific compilation flags
# - CXXFLAGS are for C++-specific compilation flags
# - CPPFLAGS are for pre-processor flags
# - CPPDEFINES are for pre-processor defines
# - LINKFLAGS are for linking flags

# tweak this if you want to use different folders, or more folders, to store your source code in.
env.Append(CPPPATH=["src/"])
sources = Glob("src/*.cpp")

if env["platform"] == "macos":
    library = env.SharedLibrary(
        "{}/bin/libgdexample.{}.{}.framework/libgdexample.{}.{}".format(
            project_name, env["platform"], env["target"], env["platform"], env["target"]
        ),
        source=sources,
    )
elif env["platform"] == "ios":
    if env["ios_simulator"]:
        library = env.StaticLibrary(
            "{}/bin/libgdexample.{}.{}.simulator.a".format(
                project_name, env["platform"], env["target"]
            ),
            source=sources,
        )
    else:
        library = env.StaticLibrary(
            "{}/bin/libgdexample.{}.{}.a".format(
                project_name, env["platform"], env["target"]
            ),
            source=sources,
        )
elif env["platform"] == "linux":
    env["CXXFLAGS"].remove("-std=c++17")
    env["CXXFLAGS"].append("-std=c++20")
    library = env.SharedLibrary(
        "{}/bin/libgdexample{}{}".format(
            project_name, env["suffix"], env["SHLIBSUFFIX"]
        ),
        source=sources,
    )
else:
    library = env.SharedLibrary(
        "{}/bin/libgdexample{}{}".format(
            project_name, env["suffix"], env["SHLIBSUFFIX"]
        ),
        source=sources,
    )

Default(library)
