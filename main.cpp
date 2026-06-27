#include <jni.h>
#include <pthread.h>
#include "hooks.cpp"

void* start_thread(void* arg) {
    // Ждем, пока игра загрузится
    sleep(5); 
    
    Log("Загрузка DefineClient...");
    init_hooks();
    
    return nullptr;
}

// Стандартная точка входа для Android библиотек
jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    pthread_t thread;
    pthread_create(&thread, nullptr, start_thread, nullptr);
    return JNI_VERSION_1_6;
}
