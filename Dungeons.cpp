#include "Dungeons.hpp"


Dungeons::Dungeons(std::string s,std::string s2,int a): name(s), description(s),reqLvl(a)
{

}

Dungeons::~Dungeons()
{

}

void Dungeons::add_mobs(std::string s,std::string s2,int a,int b,int c,int d,int e)
{
  mobs.push_back(new Mobs(s,s2,a,b,c,d,e));
}

void Dungeons::rmv_mobs()
{
  mobs.erase(mobs.begin());
}
void Dungeons::rtName()
{
  cout<<name<<endl;
}
int Dungeons::SizeofDng()
{
  return mobs.size();
}
