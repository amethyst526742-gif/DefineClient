#include "dobby.h"
#include "utils.cpp" // Для использования логов

// Пример функции, которую мы хотим хукнуть
void* (*old_func)(void*) = nullptr;

void* new_func(void* arg) {
    Log("Функция игры была вызвана!");
    return old_func(arg);
}

void init_hooks() {
    // Адрес функции игры нужно найти через IDA или Ghidra (здесь пример)
    void* target_func = (void*)0x123456; 
    
    DobbyHook(target_func, (void*)new_func, (void**)&old_func);
    Log("Хук установлен успешно.");
}
