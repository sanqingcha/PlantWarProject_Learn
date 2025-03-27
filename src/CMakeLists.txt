project(plantwarmain)

add_subdirectory(scene)
add_subdirectory(math_plant)
add_subdirectory(plant)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Scene_DIR}
)
target_link_libraries(${PROJECT_NAME}
PUBLIC
scene
)

