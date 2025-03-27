#pragma once
#include<easyx.h>
class Scene
{
private:
    // 构造函数，默认为私有，禁止外部创建对象
    Scene() = default;
    // 拷贝构造函数，默认为私有，禁止外部拷贝对象
    Scene(Scene&) = default;
public:
    // 静态方法，用于创建场景对象
    static Scene* CreatScene();
    // 初始化场景
    bool initScene();
    // 绘制场景
    void DrawTick();
    // 处理事件
    void EventTick(float deltaTime);
private:
    IMAGE* background_image;
};