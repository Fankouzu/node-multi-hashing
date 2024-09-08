#ifndef TAPROOT_H
#define TAPROOT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void taproot_hash(const char* input, char* output, uint32_t input_len);

#ifdef __cplusplus
}
#endif

#endif