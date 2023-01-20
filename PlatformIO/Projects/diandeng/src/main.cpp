#include <Arduino.h>
int LED_BUILTIN=02;
// setup函数只运行一次
void setup() {
  // 初始化LED_BUILTIN引脚为输出引脚
  pinMode(LED_BUILTIN, OUTPUT);
}
// loop函数会一直循环运行
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // 点亮LED（配置引脚输出高电平）
  delay(1000);                       // 等待1s
  digitalWrite(LED_BUILTIN, LOW);    // 熄灭LED（配置引脚输出低电平）
  delay(1000);                       // 等待1s
}
