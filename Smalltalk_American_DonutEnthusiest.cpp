#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

using namespace std;

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) {
	ST_American_DonutEnthusiest::populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest() {

}

void ST_American_DonutEnthusiest::populatePhrases() {
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	ST_American_DonutEnthusiest::mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}
