#include <stdio.h>
#include <time.h>

struct nbaPlayer {
  char *name;
  int height;
  int cloutfactorOuta200;
};



void printout(struct nbaPlayer player) {
  printf("\nName: %s \nHeight(inches): %d \nClout Factor(Out of 200): %d\n",
  player.name,
  player.height,
  player.cloutfactorOuta200);
}

struct nbaPlayer randomplayer(){

  struct nbaPlayer Lebron;
  Lebron.name = "Lebron James";
  Lebron.height = 80;
  Lebron.cloutfactorOuta200 = 198;

  struct nbaPlayer Curry;
  Curry.name = "Stephen Curry";
  Curry.height = 75;
  Curry.cloutfactorOuta200 = 200;

  struct nbaPlayer Harden;
  Harden.name = "James Harden";
  Harden.height = 78;
  Harden.cloutfactorOuta200 = 175;

  struct nbaPlayer Durant;
  Durant.name = "Kevin Durant";
  Durant.height = 84;
  Durant.cloutfactorOuta200 = 80;

  struct nbaPlayer Chris;
  Chris.name = "Chris Paul";
  Chris.height = 72;
  Chris.cloutfactorOuta200 = 120;


  srand(time(NULL));
  int randomint;
  randomint = rand() % 5;

  if (randomint == 0) return Lebron;
  if (randomint == 1) return Curry;
  if (randomint == 2) return Harden;
  if (randomint == 3) return Durant;
  if (randomint == 4) return Chris;
}

void changeStats(struct nbaPlayer *player, int newHeight, int newClout){
  player->height = newHeight;
  player->cloutfactorOuta200 = newClout;
}


int main(){

  printf("\nAn NBA player has three attributes: \n1)Name \n2)Height(inches) \n3)Clout Factor(out of 200)");
  printf("\n\nUsing my random function, I have generated the following Random Example of a NBA Player:\n");
  printout(randomplayer());


  struct nbaPlayer Davis;
  Davis.name = "Anthony Davis";
  Davis.height = 86;
  Davis.cloutfactorOuta200 = 130;
  printf("\nNow, let's test my magical function which increases the height and clout factor of any NBA Player!\n");
  printf("We Begin with the following NBA Player:\n");
  printout(Davis);

  printf("\nNow let's put this NBA Player into our magical function!\n");
  printf("\n................\n");
  printf("................\n");
  printf("................\n");
  printf("\nOur NBA Player has changed! He has become the following:\n");
  changeStats(&Davis, 120, 200);
  printout(Davis);
  printf("\nYes! It Works!\n");



  return 0;
}
