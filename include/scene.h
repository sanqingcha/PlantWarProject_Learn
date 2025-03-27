#pragma once

class Scene
{
private:
    Scene() = default;
    Scene(Scene&) = default;
public:
    static Scene* CreatScene();
    bool initScene();
    void DrawTick();
    void EventTick(float deltaTime);

};