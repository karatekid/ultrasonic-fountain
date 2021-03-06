#ifndef __MOJO-COMS__H__
#define __MOJO-COMS__H__

#include <stdint.h>
#include <Arduino.h>

/*
 * command is form:
 *  7    [6:0]  [7:0]
 * [w/~r, len] [addr]
 */
void send_txn_command(bool write, uint8_t addr, uint8_t n);
void read_from_mojo(uint8_t addr, uint8_t *buf, uint8_t n);
void write_to_mojo(uint8_t addr, uint8_t *buf, uint8_t n);
#endif
