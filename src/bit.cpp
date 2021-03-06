#include "bit.h"

uint32_t GetNumFromMask(uint32_t reg) {
    for(int i = 0; i < 32; i++) {
        if(reg & (1 << i)) {
            return i;
        }
    }
    return 0;
}

uint32_t GetMaskFromNum(uint32_t num) {
    return (0x01 << num);
}