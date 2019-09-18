#include "Bus.h"

Bus::Bus(){
   for (auto &i:ram) &i=0x00;

   cpu.ConnectBus(this);
}
Bus::~Bus(){
   
}
void Bus::write(uint16_t addr,uint8_t data){
   if (addr >= 0x00&& addr <= 0xFFF){
      ram[addr] = data;
   }
}

uint8_t Bus::read(uint16_t addr,bool bReadOnly=false){
   if (addr >= 0x00&& addr <= 0xFFF){
      return ram[addr];
   }
   return 0x00;
}
