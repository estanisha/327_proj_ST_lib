/**
 * Smalltalk_Brit
 *
 *  created Nov 2019
 *  	author: Emily Stanisha
 */

#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"

using namespace std;

Smalltalk_Brit::Smalltalk_Brit(int iPerson) :
		Smalltalk(BRIT, iPerson) {
	Smalltalk_Brit::populatePhrases();
}

Smalltalk_Brit::~Smalltalk_Brit() {

}

void Smalltalk_Brit::populatePhrases() {
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}

