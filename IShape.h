#pragma once
#include <stdio.h>

class IShape {
public:
    virtual void Size() = 0;
    virtual void Draw() = 0;
protected:
    const char* name;
    float radius = 4.0f;   // 円用
    int wide = 2;          // 矩形の幅
    int height = 3;        // 矩形の高さ
};


