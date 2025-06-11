#include "TaskPIR.h"


void TaskMotion(void *pvParameters)
{
    while (true)
    {
        getValuePIR();
        vTaskDelay(delay_time_2 / portTICK_PERIOD_MS);
    }
}

void getValuePIR()
{
    int motion = digitalRead(PIR_PIN);
    if (motion == HIGH) 
    {
        Serial.println("Motion detected!");
        publishData("feed_2", "Motion detected");
    } else {
        Serial.println("No motion");
        publishData("feed_2", "No motion");
    }
}

void initPIR()
{
    pinMode(PIR_PIN, INPUT);
    Serial.println("PIR Initiate");
    xTaskCreate(TaskMotion, "Task_2", 2048, NULL, 1, NULL);
}