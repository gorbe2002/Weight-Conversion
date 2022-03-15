#include <stdio.h>

int main() {
  
  int EarthWeight;
  printf("Enter your earth weight (in lbs): ");
  scanf("%d", &EarthWeight);
  // Get weight on Earth

  int Planet;
  printf("Enter an integer between 1 and 7: ");
  scanf("%d", &Planet);
  // Each number coincides with a different planet and how much Little Mac weights on it
 
 // Weight conversions between different planets (based on relative gravity):
  int MercuryWeight;
  MercuryWeight = (EarthWeight * 0.38);

  int VenusWeight;
  VenusWeight = (EarthWeight * 0.91);

  int MarsWeight;
  MarsWeight = (EarthWeight * 0.38);

  int JupiterWeight;
  JupiterWeight = (EarthWeight * 2.34);

  int SaturnWeight;
  SaturnWeight = (EarthWeight * 1.06);

  int UranusWeight;
  UranusWeight = (EarthWeight * 0.92);

  int NeptuneWeight;
  NeptuneWeight = (EarthWeight * 1.19);

  switch (Planet) {
    case 1:
      printf("Your weight on Mercury is about: %d lbs\n", MercuryWeight);
      break;
    case 2:
      printf("Your weight on Venus is about: %d lbs\n", VenusWeight);
      break;
    case 3:
      printf("Your weight on Mars is about: %d lbs\n", MarsWeight);
      break;
    case 4:
      printf("Your weight on Jupiter is about: %d lbs\n", JupiterWeight);
      break;
    case 5:
      printf("Your weight on Saturn is about: %d lbs\n", SaturnWeight);
      break;
    case 6:
      printf("Your weight on Uranus is about: %d lbs\n", UranusWeight);
      break;
    case 7:
      printf("Your weight on Neptune is about: %d lbs\n", NeptuneWeight);
      break;
    default:
      printf("That is not a valid number!\n");
      break;
  }
  return 0;
}
