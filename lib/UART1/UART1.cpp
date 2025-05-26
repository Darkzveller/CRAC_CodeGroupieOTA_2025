#include <Arduino.h>
#include "UART1.h"
#include "Variable.h"

#define RXD2 16 // GPIO16 = RX
#define TXD2 17 // GPIO17 = TX

void setupUART1(int baudrate)
{
    Serial2.begin(baudrate);
    // Serial2.begin(baudrate, SERIAL_8N1, RXD2, TXD2); // RX, TX
}

void send_message_bw16(int id, int data0, int data1, int data2, int data3, int data4, int data5, int data6, int data7)
{
    Serial2.write(id);
    Serial2.write(data0);
    Serial2.write(data1);
    Serial2.write(data2);
    Serial2.write(data3);
    Serial2.write(data4);
    Serial2.write(data5);
    Serial2.write(data6);
    Serial2.write(data7);
}

void read_message_bw16()
{
    uint8_t BUFFER_SIZE = 9;
    uint8_t buffer[BUFFER_SIZE];
    // if (Serial2.available())
    // {
    //     Serial.println(Serial2.read());
    // }
    if (Serial2.available() )
    { // J'attends la reception de 9 donnée qui sont l'id et mes 8 data
        uint8_t bytesRead = Serial2.readBytes((char *)buffer, BUFFER_SIZE);
        Serial.print("Nombre de data reçue :  ");
        Serial.print(bytesRead);

        if (bytesRead == BUFFER_SIZE)
        {
            // Traitement du buffer
            Serial.print(" Trame reçue : ");
            Serial.print(" ID ");

            rxMsg.id = buffer[0];
            Serial.print(rxMsg.id);

            Serial.print(" Data ");
            for (int i = 1; i <= BUFFER_SIZE; i++)
            {
                rxMsg.data[i-1] = buffer[i];
                Serial.print(buffer[i], HEX); // Affiche chaque octet de données en hexadécimal
                Serial.print(" ");
            }
        }
        Serial.println();
    }
}
