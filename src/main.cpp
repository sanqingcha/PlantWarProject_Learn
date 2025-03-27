#include<ctime>
#include<easyx.h>
#include"scene.h"
#include<cstdio>
#include<filesystem>

int main(int argc, char*argv[])
{
    std::filesystem::path executable_path(argv[0]);
    std::filesystem::path Project_path = executable_path.parent_path().parent_path();
    std::filesystem::path assets_path = Project_path / "assets";
    std::filesystem::path sceneImage_path = assets_path / "background.png";
    Scene*scene = Scene::CreatScene(sceneImage_path.generic_string().c_str());
    float set_delta_time = 1000.f/60;
    clock_t Begin_time = clock(), End_time = 0;

    while (true)   
    {
        End_time = clock();
        float delta_time = float(End_time - Begin_time);
        if (delta_time >= set_delta_time)
        {
            scene->DrawTick();
            scene->EventTick(delta_time);
            Begin_time = End_time;
        }
    }

}