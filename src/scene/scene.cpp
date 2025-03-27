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

Scene *Scene::CreatScene(const char *path)
{
    Scene* scene = new Scene();
    if(scene->initScene()&&scene->setimage(path,SceneWidth,SceneHeight))
    {
        return scene;
    }
    delete scene;
    return nullptr;
}

bool Scene::initScene()
{
    initgraph(SceneWidth,SceneHeight,EX_SHOWCONSOLE);
    for(int i = 0;i<5;i++)
    {
      PlantsTable[i]->CreatPlant("asset/nizao/nizao_idle01.png");
    }
    return true;
}

void Scene::DrawTick()
{
    putimage(0,0,&background_image);
}

void Scene::EventTick(float deltaTime)
{
}

bool Scene::setimage(const char *path,int x,int y)
{
    loadimage(&background_image ,path,x,y);
    return true;
}
