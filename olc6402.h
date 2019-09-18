#include <iostream>
#include "Bus.h"
class olc6402{
   public:
      olc6402();
      ~olc6402();
      void ConnectBus(Bus *bus);
   private:
      Bus *bus = nullptr;
      uint8_t read(uint16_t addr);
      void write(uint16_t addr,uint8_t data);
}