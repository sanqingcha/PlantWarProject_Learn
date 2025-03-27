project(plant)

add_library(${PROJECT_NAME}
SHARED
plant.cpp
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)