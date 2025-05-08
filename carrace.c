#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};

struct RaceCar {
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};

void printIntro();
void printCountDown();
void printFirstPlaceAfterLap(struct Race race);
void printCongratulation(struct Race race);
int calculateTimeToCompleteLap();
void updateRace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2);
void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2);

// Print functions section
void printIntro() {
   printf("Welcome to our main event digital race fans!\n");
   printf("I hope everybody has their snacks because we are about to begin!\n\n");
}

void printCountDown() {
    printf("Racers Ready!\n5...\n4...\n3...\n2...\n1...\nRace!\n\n");
}

void printFirstPlaceAfterLap(struct Race race) {
    printf("After lap %d\n", race.currentLap);
    printf("First place is: %s in the %s race car!\n\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race) {
    printf("Let's all congratulate %s in the %s race car for an amazing performance!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
    printf("It truly was a great race and everybody have a good night!\n");
}


// Logic functions section
int calculateTimeToCompleteLap() {
    return rand() % 100 + 1;
}

void updateRace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
    (*race).currentLap++;

    int lapTime1 = calculateTimeToCompleteLap();
    int lapTime2 = calculateTimeToCompleteLap();

    (*raceCar1).totalLapTime += lapTime1;
    (*raceCar2).totalLapTime += lapTime2;

    if ((*raceCar1).totalLapTime <= (*raceCar2).totalLapTime) {
        (*race).firstPlaceDriverName = (*raceCar1).driverName;
        (*race).firstPlaceRaceCarColor = (*raceCar1).raceCarColor;
    } else {
        (*race).firstPlaceDriverName = (*raceCar2).driverName;
        (*race).firstPlaceRaceCarColor = (*raceCar2).raceCarColor;
    }

    printFirstPlaceAfterLap(*race);
}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
    struct Race race = {5, 0, "", ""};

    printIntro();
    printCountDown();

    for (int i = 0; i < race.numberOfLaps; i++) {
        updateRace(&race, raceCar1, raceCar2);
    }

    printCongratulation(race);
}

// int main()
int main() {
    srand(time(NULL));

    struct RaceCar raceCar1 = {"Tom", "Red", 0};
    struct RaceCar raceCar2 = {"Jerry", "Blue", 0};

    startRace(&raceCar1, &raceCar2);

    return 0;
}
