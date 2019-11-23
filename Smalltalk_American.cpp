#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

using namespace std;

Smalltalk_American::Smalltalk_American(int iPerson) :
		Smalltalk_American(AMERICAN, iPerson) {
	populatePhrases();
}

Smalltalk_American::Smalltalk_American(string myNationality, int iPerson) :
		Smalltalk(myNationality, iPerson) {

}

Smalltalk_American::~Smalltalk_American() {

}

void Smalltalk_American::populatePhrases() {

	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk_American::mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

