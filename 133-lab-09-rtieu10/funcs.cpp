#include "funcs.h"
#include <iostream>
#include <cmath>

// Sample function

/*std::string greet(std::string name){
  return "Hello "+name+"!";
}*/

// Write all your functions in here



double length(Coord3D *p){   //p is a variable that stores an address of the class Coord3D
  double x2, y2, z2;     //store the length
  x2 = (*p).x;     //deferences p, so we can access the objects in the class through p
  y2 = (*p).y;
  z2 = (*p).z;
  return sqrt((x2*x2)+(y2*y2)+(z2*z2));
}

Coord3D * fartherfromOrigin(Coord3D *p1, Coord3D *p2){
  double distance1 = length(p1);   //call the length function length it gets the elength from origin to p1
  double distance2 = length(p2);
    if(distance1 > distance2){
      return p1;
    }
    else{
      return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  (*ppos).x = (*ppos).x + (*pvel).x * dt;    //will compute the new coordinates after object moves
  (*ppos).y = (*ppos).y + (*pvel).y * dt;
  (*ppos).z = (*ppos).z + (*pvel).z * dt;
}

Coord3D* createCoord3D(double x, double y, double z){
  Coord3D *p = new Coord3D; //creates a new coord3d in dynamic memory called p,
  (*p).x = x;
  (*p).y = y;
  (*p).z = z;
  return p;

}

void deleteCoord3D(Coord3D *p){
  delete p;
  p = 0;
}

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
  Particle *p = new Particle;
  Coord3D *posit = createCoord3D(x,y,z);
  Coord3D *velo= createCoord3D(vx,vy,vz);
  (*p).position = *posit;
  (*p).velocity = *velo;
  deleteCoord3D(posit);
  deleteCoord3D(velo);
  return p;
}

void setVelocity(Particle *p, double vx, double vy, double vz){
  Coord3D *vel = createCoord3D(vx,vy,vz);
  (*p).velocity = *vel;
  deleteCoord3D(vel);

}

Coord3D getPosition(Particle *p){
  return (*p).position;

}

void move(Particle *p, double dt){
  Coord3D* tempPos = createCoord3D(getPosition(p).x, getPosition(p).y, getPosition(p).z);
  Coord3D* tempVel = createCoord3D((*p).velocity.x, (*p).velocity.y, (*p).velocity.z);

  move(tempPos, tempVel, dt);

  (*p).position = *tempPos;

  deleteCoord3D(tempPos);
  deleteCoord3D(tempVel);


}

void deleteParticle(Particle *p){
  delete p;
  p = 0;

}
