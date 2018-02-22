#include "mgos_arduino_sd.h"
#include "SPI.h"

void mgos_arduino_sd_begin() {
  SD.begin();
}

void mgos_arduino_sd_close() {
    SD.end();
}

// void mgos_arduino_sd_init(SD *sd) {
//   if (sd == nullptr) return;
//   sd->init();
// }

// int mgos_arduino_sd_begin(SD *sd, int pin_num_miso, int pin_num_mosi, int pin_num_clk, int pin_num_cs) {
//   if (sd == nullptr) return 0;
//   return sd->init(pin_num_miso, pin_num_mosi, pin_num_clk, pin_num_cs);
// }

File mgos_arduino_sd_openFile(const char *filename){
  return SD.open(filename, FILE_READ);
}

// void mgos_arduino_sd_closeFile(FILE *f){
//   if (sd == nullptr) return;
//   sd->closeFile(f);
// }

int mgos_arduino_sd_readFile(const char *filename, uint8_t** buffer) {
  File file = SD.open(filename, FILE_READ);
  return file.read();
}

int mgos_arduino_sd_read(File f, uint8_t* buffer, size_t toRead) {
  return f.read(buffer, toRead);
}

//int mgos_arduino_sd_read_from_position(SD *sd, FILE *f, int position, uint8_t* buffer, size_t toRead) {
//    if (sd == nullptr) return 0;
//    return sd->readFromPosition(f, position, buffer, toRead);
//}

// int mgos_arduino_sd_get_position(FILE *f) {
//   if (sd == nullptr) return -1;
//   return sd->getPosition(f);
// }
//
// int mgos_arduino_sd_go_to_position(FILE *f, int pos) {
//   if (sd == nullptr) return -1;
//   return sd->goToPosition(f, pos);
// }
//
// int mgos_arduino_sd_write(SD *sd, FILE *f, uint8_t* buffer) {
//   if (sd == nullptr) return 0;
//   return sd->write(f, buffer);
// }

// void mgos_arduino_sd_listFiles() {
//   if (sd == nullptr) return;
//   sd->listFiles();
// }
