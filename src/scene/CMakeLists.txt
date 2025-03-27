project(scene)

add_library(${PROJECT_NAME}
SHARED
scene.cpp
)
target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Plant_DIR}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
plant
)