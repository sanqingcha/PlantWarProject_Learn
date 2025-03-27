cmake_minimum_required(VERSION 3.20.0)
project(PlantWar)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)   

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
add_library(planwarsrc
SHARED
${SRC_LIST}
)

target_include_directories(planwarsrc
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

add_executable(PlantWarmaincpp main.cpp)

target_include_directories(PlantWarmaincpp
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(PlantWarmaincpp
PUBLIC
planwarsrc
)

target_link_libraries(PlantWarmaincpp
PUBLIC
easyx
)
