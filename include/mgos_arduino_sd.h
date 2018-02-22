#ifdef __cplusplus
#include "SD.h"
#else
typedef struct SDtag SD;
typedef struct Filetag File;
#endif

#ifdef __cplusplus
extern "C"
{
#endif


// SD *mgos_arduino_sd_create();

void mgos_arduino_sd_close();
//
// void mgos_arduino_sd_init(SD *sd);

void mgos_arduino_sd_begin();

File mgos_arduino_sd_openFile(const char *filename);

// void mgos_arduino_sd_closeFile(FILE *f);

// int mgos_arduino_sd_readFile(const char *filename, uint8_t** buffer);

int mgos_arduino_sd_read(File *f, uint8_t* buffer, size_t toRead);

//int mgos_arduino_sd_read_from_position(FILE *f, int position, uint8_t* buffer, size_t toRead);

// int mgos_arduino_sd_get_position(FILE *f);
//
// int mgos_arduino_sd_go_to_position(FILE *f, int pos);

// int mgos_arduino_sd_write(FILE *f, int* buffer);
//
void mgos_sd_print_card_info();

void mgos_arduino_sd_listFiles();

#ifdef __cplusplus
}
#endif  /* __cplusplus */
