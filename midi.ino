// void onNoteOnBLE(uint8_t channel, uint8_t note, uint8_t velocity, uint16_t timestamp)
// {
//   synthESP32_TRIGGER(note % 12);
// }

// void handleNoteOn(byte channel, byte pitch, byte velocity){
//   synthESP32_TRIGGER_P(channel,pitch);
//   if (recording && playing){
//     bitWrite(pattern[channel],sstep,1);
//     melodic[channel][sstep]=pitch;    
//   }
//   Serial.print(channel);
//   Serial.print(" ");
//   Serial.println(pitch);
// }
// void handleCC(byte channel, byte ccnumber, byte value){
//   int nvalue=value;
//   // arreglar pan
//   if (ccnumber==6) {
//     nvalue=map(nvalue,0,127,-99,99);
//   }
//   // despreciar maximos y mínimos
//   if (nvalue>max_values[ccnumber]) return;
//   if (nvalue<min_values[ccnumber]) return;  
//   ROTvalue[channel][ccnumber]=nvalue;
//   setSound(channel);
//   Serial.print(channel);
//   Serial.print(" ");
//   Serial.print(ccnumber);
//   Serial.print(" ");
//   Serial.println(nvalue);
// }
