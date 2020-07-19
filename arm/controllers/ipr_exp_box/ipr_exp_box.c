#include "IPR.hpp"

#include <webots/DistanceSensor.hpp>
#include <webots/Robot.hpp>

using namespace webots;

#define OBJECT_NUMBER 4

double gGrabPosition[] = {3.00660, -1.35619, 1.19083, -3.24647, -2.94524, 0.727475, -0.727475};
double gDropPosition[] = {5.09282, 0.00000, 3.08698, -1.34990, -2.82252, 0.727475, -0.727475};

int main(int argc, char **argv) {
  IPR *ipr = new IPR();

  ipr->grabCube(gGrabPosition);
  ipr->dropCube(gDropPosition);
  ipr->moveToInitPosition();

  delete ipr;
  return 0;
}
