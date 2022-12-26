#ifndef CAR_H
#define CAR_H

class Car
{
  private:
    int x;         // x coordinate of the car's position
    int y;         // y coordinate of the car's position
    int speed;     // speed of the car
    bool nitro;    // whether the nitro boost is activated or not

  public:
    Car();
    int getX() const;
    int getY() const;
    int getSpeed() const;
    bool hasNitro() const;
    void setX(int value);
    void setY(int value);
    void setSpeed(int value);
    void setNitro(bool value);
    void moveLeft();
    void moveRight();
    void useNitro();
};

#endif
