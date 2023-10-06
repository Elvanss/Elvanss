#include "CampaignMember.h"

CampaignMember::CampaignMember() {
    _popularity = Random(0,100);
}
double CampaignMember::getPopularity() const { return _popularity; }
void CampaignMember::setPopularity(double value) { _popularity = value; }
void CampaignMember::updatePopularity(double delta)  {_popularity += delta;}