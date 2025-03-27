cmake_minimum_required(VERSION 3.20.0)
project(PlantWar
    VERSION 0.0.1
    DESCRIPTION "A project for learning"
    HOMEPAGE_URL "https://github.com/sanqingcha/PlantWarProject_Learn"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)   
set(Scene_DIR ${PROJECT_SOURCE_DIR}/src/scene)
set(Math_DIR ${PROJECT_SOURCE_DIR}/src/math_plant)

add_subdirectory(src)