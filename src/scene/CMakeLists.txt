project(scene)

add_library(${PROJECT_NAME}
SHARED
scene.cpp
)
target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)