#pragma once

#include <csp/csp_types.h>

typedef struct {
	uint16_t rx_count;          /* Received bytes */
	uint16_t remain;            /* Remaining packets */
	uint32_t cfpid;             /* Connection CFP identification number */
	uint32_t last_used;         /* Timestamp in ms for last use of buffer */
} csp_can_pbuf_element_t;

void csp_can_pbuf_free(csp_packet_t * buffer, int buf_free, int * task_woken);
csp_packet_t * csp_can_pbuf_new(uint32_t id, int * task_woken);
csp_packet_t * csp_can_pbuf_find(uint32_t id, uint32_t mask, int * task_woken);
void csp_can_pbuf_cleanup(void);
