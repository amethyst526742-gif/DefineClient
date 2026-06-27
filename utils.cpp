#include <iostream>
#include <android/log.h>

#define LOG_TAG "DefineClient"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

// Простая функция для логов
void Log(const char* message) {
    LOGI("%s", message);
}
