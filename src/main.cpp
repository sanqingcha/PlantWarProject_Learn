#include<ctime>
#include<easyx.h>
#include"scene.h"

int main()
{
    Scene*scene = Scene::CreatScene();
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