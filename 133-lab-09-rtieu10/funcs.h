#pragma once

#include <iostream>


// sample signature
//std::string greet(std::string name);


// Write your function signatures / prototypes here
class Coord3D{   //Coord3d class, coords in 3D
public:
  double x;
  double y;
  double z;
};

struct Particle{
  Coord3D position;
  Coord3D velocity;
};

double length(Coord3D *p);
Coord3D * fartherfromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
Coord3D* createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz);
void setVelocity(Particle *p, double vx, double vy, double vz);
Coord3D getPosition(Particle *p);
void move(Particle *p, double dt);
void deleteParticle(Particle *p);
