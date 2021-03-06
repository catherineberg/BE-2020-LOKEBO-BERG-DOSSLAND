#ifndef CHARGEUR_H
#define CHARGEUR_H
#include "mydevices.h"
#include "core_simulation.h"
#include "battery.h"


class Chargeur: public Device {
private:
  // si le chargeur est ON (HIGH) ou OFF (LOW)
  int state;

  // temps entre 2 affichage - pas utile si on a le LED ...?
  int temps;

public:
  // initialisation du temps de rafraichiisement
  Chargeur(int t);
  void chargeBatt();
  // thread representant l'actionneur et permettant de fonctionner independamment de la board
  virtual void run();
};



#endif
