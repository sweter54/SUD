#ifndef AREA_HPP
#define AREA_HPP
#include "mob.hpp"

#include <iostream>
#include <vector>

class Dungeons
{
private:

  std::string name;
  std::string description;
  int reqLvl;



public:

  std::vector<Mobs*> mobs;

  Dungeons(std::string,std::string,int);
  ~Dungeons();

  void add_mobs(std::string s,std::string s2,int a,int b,int c,int d,int e);
  void rmv_mobs();
  void rtName();

  int SizeofDng();

};

#endif /*Area.hpp*/
