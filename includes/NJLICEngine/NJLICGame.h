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
    void setDone(bool done = true) {
        if (done != isDone()) {

            mDone = done;
        }
    }
    virtual void update(double step) {}
    virtual void render()const {}
    virtual void resize(unsigned int w, unsigned int h)const {}
    virtual void init(int argc, char *argv[]) {}
    virtual void unInit() {}
    virtual void start()const {}
    virtual void stop()const {}

    virtual void mouse(int button, int eventType, float x, float y,
                       int clicks)const {}
    virtual void keyDown(const std::string &keycodeName, bool withCapsLock,
                         bool withControl, bool withShift, bool withAlt,
                         bool withGui)const {}
    virtual void keyUp(const std::string &keycodeName, bool withCapsLock,
                       bool withControl, bool withShift, bool withAlt,
                       bool withGui)const {}
    virtual void touch(int touchDevId, int pointerFingerId, int eventType,
                       float x, float y, float dx, float dy, float pressure)const {}

    virtual void vRCameraRotation(float m11, float m12, float m13, float m21,
                                  float m22, float m23, float m31, float m32,
                                  float m33)const {}

    virtual void vRCameraRotationYPR(float yaw, float pitch, float roll)const {}

    //        virtual void vRCameraLocation(float x, float y, float z) {}

    //
    //    void lowMemory() {}

    //    //    void Pause(){}
    //    //    void Resume(){}
    //    void dropFile(const char *filename) {}
    //    void resize(int width, int height, int sdlFormat, float refreshRate)
    //    {} int padDown(int device_id, int keycode) {} int padUp(int device_id,
    //    int keycode) {} void joy(int device_id, int axis, float value) {} void
    //    hat(int device_id, int hat_id, int x, int y) {}
    //    void keyDown(const
    //        std::string &keycodeName, bool withCapsLock,
    //                     bool withControl, bool withShift, bool withAlt, bool
    //                     withGui) {
    //        }
    //        void keyUp(const std::string &keycodeName, bool withCapsLock,
    //                   bool withControl, bool withShift, bool withAlt, bool
    //                   withGui) {}
    //    void keyboardFocusLost() {}
    //    void keyboardFinish(const unsigned char *state, int numStates) {}

    //

    //    void finishTouches() {}
    //
    //    void accel(float x, float y, float z) {}
    //    void surfaceChanged() {}
    //    void surfaceDestroyed() {}
    //    int addJoystick(int device_id, const char *name, int is_accelerometer,
    //                    int nbuttons, int naxes, int nhats, int nballs) {}
    //    int removeJoystick(int device_id) {}
    //    const char *getHint(const char *name) {}
    //
    //    void commitText(const char *text, int newCursorPosition) {}
    //    void setComposingText(const char *text, int newCursorPosition) {}
    //
};

#endif /* NJLICGame_h */
