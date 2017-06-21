#ifndef _AQUABUS_H_
#define _AQUABUS_H_

/**
 * Protocol definitions
 */

typedef struct {
    uint8_t probe_code;
    uint8_t stage;
    uint8_t assign_address;
    uint16_t serial;
    uint8_t tail[3];
} ablib_probe_request_t;

typedef struct {
    uint8_t probe_code;
    uint8_t stage;
    uint8_t hardware_id;
    uint8_t hardware_version;
    uint8_t software_version;
    uint8_t assign_address;
    uint8_t tail[3];
} ablib_probe_response_t;

/**
 * State machinery
 */

/**
 * Define a set of states for the main loop
 * of the AquaBus transceiver
 */
 typedef enum {
    ABLIB_LISTEN,
    ABLIB_RX,
    ABLIB_RXTIMEOUT,
    ABLIB_TXWAIT,
    ABLIB_TX,
 } ABLIB_STATE;



#endif