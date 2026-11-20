/* print fast.c's table of sine words for the first half turn. each word
 * comes from the sa_fsca this program links, so the two can't part */
#include "play_math.h"

#include <stdio.h>
#include <string.h>

int main(void)
{
    uint32_t angle;

    printf("static const uint32_t sine_words[0x8000] = {");
    for (angle = 0; angle < 0x8000; angle++) {
        float pair[2];
        uint32_t word;

        sa_fsca(angle, pair);
        memcpy(&word, &pair[0], sizeof word);
        printf("%s0x%08xU,", angle % 6 == 0 ? "\n    " : " ", word);
    }
    printf("\n};\n");
    return 0;
}
