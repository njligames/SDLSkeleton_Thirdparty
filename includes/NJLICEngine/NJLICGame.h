//
//  NJLICGame.h
//  SDLSkeleton
//
//  Created by James Folk on 5/16/20.
//

#ifndef NJLICGame_h
#define NJLICGame_h

#include <mutex>
#include <string>

class NJLICGame {

    bool mDone;

  public:
    NJLICGame() : mDone(false) {}
    virtual ~NJLICGame() {}
    virtual bool isDone() const { return mDone; }
    virtual void setDone(bool done = true) {
        if (done != isDone()) {

            mDone = done;
        }
    }
    virtual void update(double step) {}
    virtual void render()const {}
    virtual void resize(unsigned int w, unsigned int h) {}
    virtual void init(int argc, char *argv[]) {}
    virtual void unInit() {}
    virtual void start() {}
    virtual void stop() {}

    virtual void mouse(int button, int eventType, float x, float y,
                       int clicks) {}
    virtual void keyDown(const std::string &keycodeName, bool withCapsLock,
                         bool withControl, bool withShift, bool withAlt,
                         bool withGui) {}
    virtual void keyUp(const std::string &keycodeName, bool withCapsLock,
                       bool withControl, bool withShift, bool withAlt,
                       bool withGui) {}
    virtual void touch(int touchDevId, int pointerFingerId, int eventType,
                       float x, float y, float dx, float dy, float pressure) {}

    virtual void vRCameraRotation(float m11, float m12, float m13, float m21,
                                  float m22, float m23, float m31, float m32,
                                  float m33) {}

    virtual void vRCameraRotationYPR(float yaw, float pitch, float roll) {}
    
    virtual void fileDrop(const std::string &fileName){}
};

#endif /* NJLICGame_h */
