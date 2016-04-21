#ifndef __LETMECREATE_CORE_SPI_H__
#define __LETMECREATE_CORE_SPI_H__

#include <stdint.h>

int spi_init(const uint8_t bus_index, const uint32_t mode);
int spi_select_bus(const uint8_t bus_index);
int spi_transfer(const uint8_t *tx_buffer, uint8_t *rx_buffer, const uint32_t count);
int spi_release(const uint8_t bus_index);

#endif