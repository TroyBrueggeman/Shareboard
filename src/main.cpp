

#include "../dependencies/miniaudio/miniaudio.h"
#include "../dependencies/miniaudio/miniaudio.c"

#include <stdio.h>

int main()
{
    ma_result result;
    ma_engine engine;

    result = ma_engine_init(NULL, &engine);
    if (result != MA_SUCCESS) {
        return -1;
    }

    int i = 0;
    while(i < 20) {
        getchar();
        ma_engine_play_sound(&engine, "../assets/bruh.mp3", NULL);
        i++;
    }

    //ma_engine_play_sound(&engine, "../assets/bruh.mp3", NULL);

    //https://youtu.be/n1SzitnRzY4

    printf("Press Enter to quit...");
    getchar();

    ma_engine_uninit(&engine);

    return 0;
}
