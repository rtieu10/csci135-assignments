#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{

  // sample code
  //std::string result;

  /*result=greet("Tom");
  std::cout << result <<"\n";*/
  // Call the functions you wrote in funcs here
  using std::cin;

    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);  //creates a new particle with x alues, and velocity values
    double time = 0.0;   //creates a time variable
    double dt = 0.1;     //creates the time tht has passed
    while(time < 3.0) {
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        move(p, dt);
        time = time + dt;

        std::cout << "Time: " << time << " \t";
        std::cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << std::endl;
    }

    deleteParticle(p);

	 return 0;
}
