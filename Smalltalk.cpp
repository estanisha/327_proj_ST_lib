#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include "./includes/Watch.h"
#include <string>

using namespace std;

Smalltalk::Smalltalk(std::string myNationality, int iPerson) :
	nationality(myNationality),
	iPerson(iPerson),
	current_phrase(0) {
}

Smalltalk::~Smalltalk(void) {

}

std::string Smalltalk::saySomething() {
	string somethingToSay = mySmallTalk[current_phrase %mySmallTalk.size()];
	current_phrase++;
	return somethingToSay;
}

std::string Smalltalk::getTime() {
	if (this->pWatch == 0) {
		return I_DO_NOT_HAVE_A_WATCH;
	}
	return THE_CURRENT_TIME_IS + pWatch->getTime();

}

std::unique_ptr<Watch> Smalltalk::takeWatch() {
	unique_ptr<Watch> aWatch;
	if (this->pWatch == 0) {
		aWatch = 0;
		return aWatch;
	}
	aWatch = move(pWatch);
	return aWatch;

}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (this->pWatch !=0) {
		return false;
	}

	this->pWatch = move(pWatch);
	return true;
}

