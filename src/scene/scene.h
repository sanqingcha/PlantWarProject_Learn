#pragma once
#include<easyx.h>
#include"plant.h"

#define SceneWidth 1280 
#define SceneHeight 720
class Scene
{
private:
    Scene() = default;
    Scene(Scene&) = default;
public:
    static Scene* CreatScene();
    static Scene* CreatScene(const char* path);
    bool initScene();
    void DrawTick();
    void EventTick(float deltaTime);
    bool setimage(const char* path, int x, int y);
private:
    IMAGE background_image;
    Plant* PlantsTable[5];
};