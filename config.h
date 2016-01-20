#ifndef CONFIG_H
#define CONFIG_H

// Choose whether to use KISS or direct
// framing for serial data
//#define SERIAL_FRAMING SERIAL_FRAMING_KISS
#define SERIAL_FRAMING SERIAL_FRAMING_NMEA
#define NMEA_SKIP_SENTENCES 5

#endif