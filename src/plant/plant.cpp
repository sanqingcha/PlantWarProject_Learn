#include "plant.h"

Plant *Plant::CreatPlant()
{
    Plant *plant = new Plant();
    if(plant->init_plant())
    {
        return plant;
    }
    return nullptr;
}

Plant *Plant::CreatPlant(const char *path)
{
    Plant *plant = new Plant();
    if(plant->init_plant(path))
    {
        return plant;
    }
    return nullptr;
}

bool Plant::init_plant()
{
    return true;
}

bool Plant::init_plant(const char *path)
{
    loadimage(plant_img, path);
    return true;
}

void Plant::draw_tick_plant()
{
}

void Plant::event_tick_plant()
{
}
