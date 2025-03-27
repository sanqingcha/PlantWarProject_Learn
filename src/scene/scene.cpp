#include "scene.h"

#include<cstdio>

Scene* Scene::CreatScene()
{
    Scene* scene = new Scene();
    if(scene->initScene())
    {
        return scene;
    }
    delete scene;
    return nullptr;
}

bool Scene::initScene()
{
    printf("Scene init");
    initgraph(1280,720,EX_SHOWCONSOLE);
    loadimage(background_image ,"asset/background.png");
    return true;
}

void Scene::DrawTick()
{
}

void Scene::EventTick(float deltaTime)
{
}
