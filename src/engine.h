#ifndef __ENGINE_H__
#define __ENGINE_H__

#include "renderer.h"

class Engine {
public:
    Engine();
    ~Engine();

    void setRenderer(Renderer renderer);
private:
    Renderer renderer;
};

#endif //__ENGINE_H__
