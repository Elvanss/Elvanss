#include "Leader.h"

Leader::Leader() : CampaignMember() {
    _influence = Random(0, 100);
}
double Leader::getInfluence() const { return _influence; }
void Leader::setInfluence(double value) { _influence = value; }