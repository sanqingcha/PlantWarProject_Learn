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
    void draw_tick_plant();
    void event_tick_plant();
    bool setImage(const char* path);
private:
    IMAGE plant_img;
};