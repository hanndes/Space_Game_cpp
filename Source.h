//
// Created by hande on 2.02.2025.
//

#ifndef SOURCE_H
#define SOURCE_H



class Source {
  float water;
  float mine;
  float energy;
public:
  Source();
  void setWater(float);
  void setMine(float);
  void setEnergy(float);
  float getWater();
  float getMine();
  float getEnergy();
  ~Source();
};



#endif //SOURCE_H
