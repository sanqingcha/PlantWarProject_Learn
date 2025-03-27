#pragma
#include<easyx.h>

class Plant {
private:
    Plant() = default;
    Plant(Plant&) = default;
public:
    static Plant* CreatPlant();
    static Plant* CreatPlant(const char* path);
    bool init_plant();
    bool init_plant(const char* path);
    void draw_tick_plant();
    void event_tick_plant();
private:
    IMAGE* plant_img;
};