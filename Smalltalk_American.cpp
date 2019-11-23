#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

using namespace std;


Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk_American(AMERICAN, iPerson) {

}

Smalltalk_American::Smalltalk_American(string myNationality, int iPerson) : Smalltalk(myNationality, iPerson) {

}

Smalltalk_American::~Smalltalk_American() {

}

void Smalltalk_American::populatePhrases() {

}

