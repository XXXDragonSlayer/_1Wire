#ifndef HEADER_GENERAL_H_
#define HEADER_GENERAL_H_

#include <stdint.h>


typedef int8_t CHAR;
typedef uint8_t BYTE;
typedef uint16_t WORD;
typedef int16_t SHORT;
typedef int32_t LONG;
typedef uint32_t DWORD;
typedef int32_t BOOL;

#define BUS_PORT		GPIOG
#define PIN_DATA		0
#define PIN_POWER		1

typedef struct __attribute__((__packed__)) ROMNUM{
	BYTE FamilyCode;
	BYTE Serialnumber[6];
	BYTE crc;
}ROM;


#endif /* HEADER_GENERAL_H_ */