#pragma once

class vec2
{
public:
    vec2(): x_v(0.f),y_v(0.f){};
    vec2(float x,float y): x_v(x),y_v(y){};
    float x_v, y_v;
};