#include <stdio.h>
#include "tensorflow/lite/version.h"
int main() {
    // 打印 "Hello World"
    printf("Hello World\n");

    // 打印 TensorFlow Lite 的版本信息
    printf("TensorFlow Lite Version: %s\n", TFLITE_VERSION_STRING);
    
    return 0;
}
