# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (TurtleParser)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
	Turtle/TURTLEBaseListener.cpp
	Turtle/TURTLEBaseVisitor.cpp
	Turtle/TURTLELexer.cpp
	Turtle/TURTLEListener.cpp
	Turtle/TURTLEParser.cpp
	Turtle/TURTLEVisitor.cpp
	TurtleParser.cpp
	main.cpp
)

# Add an executable with the above sources
add_executable(${PROJECT_NAME} ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(${PROJECT_NAME}
    PUBLIC
        "${PROJECT_SOURCE_DIR}/Turtle"
		"${PROJECT_SOURCE_DIR}"
        "${PROJECT_SOURCE_DIR}/tools/antlr4-cpp-runtime-4/runtime/src"
        "${PROJECT_SOURCE_DIR}/tools/boost_1_81_0/include"
)
target_link_libraries( ${PROJECT_NAME}
    PRIVATE 
    "${PROJECT_SOURCE_DIR}/tools/libantlr4-runtime.a"
)
