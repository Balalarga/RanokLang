cmake_minimum_required(VERSION 4.0)
project(RanokLang)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")#"MultiThreaded$<$<CONFIG:Debug>:Debug>DLL"


add_executable(RanokLang Source/main.cpp
    Source/RanokListener.cpp
    Source/RanokListener.h
    Source/RanokProcessor.cpp
    Source/RanokProcessor.h)

target_link_libraries(RanokLang PUBLIC antlr4_static)
target_compile_definitions(RanokLang PUBLIC RNL_EXAMPLES_DIR="${CMAKE_CURRENT_LIST_DIR}/Examples")


add_custom_target(GenerateParser DEPENDS ${PROJECT_SOURCE_DIR}/Grammar/Generated)
add_custom_command(
    OUTPUT ${PROJECT_SOURCE_DIR}/Grammar/Generated
    COMMAND
    antlr4 -Dlanguage=Cpp ${PROJECT_SOURCE_DIR}/Grammar/Ranok.g4 -o ${PROJECT_SOURCE_DIR}/Grammar/Generated -visitor
    DEPENDS ${PROJECT_SOURCE_DIR}/Grammar/Ranok.g4
)
add_dependencies(RanokLang GenerateParser)

target_include_directories(RanokLang PUBLIC ${PROJECT_SOURCE_DIR}/Grammar/Generated/)
target_sources(RanokLang PUBLIC
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokLexer.h
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokLexer.cpp
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokParser.h
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokParser.cpp
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokBaseListener.h
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokBaseListener.cpp
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokListener.h
    ${PROJECT_SOURCE_DIR}/Grammar/Generated/RanokListener.cpp
)

add_subdirectory(ThirdParty)
