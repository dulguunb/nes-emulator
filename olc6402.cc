#include "olc6402.h"
void olc6402::ConnectBus(Bus *bus){
   this->bus = bus;
}
uint8_t olc6402::read(uint16_t addr){
   return bus->read(addr,false);
}
void olc6402::write(uint16_t addr,uint8_t data){
   bus->write(addr,data);
}