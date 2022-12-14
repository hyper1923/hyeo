#pragma once
#include "../inc/typedefs.h"
#include "../inc/tty.h"

void* memcpy(void* dest, void* src, uint32_t size);
void* memset(void* dest,uint8_t val, uint32_t size);
void* memcut(void* dest, void* src, uint32_t size);
uint32_t strlen(char* data);
bool strcmp(char* str1, char* str2);
