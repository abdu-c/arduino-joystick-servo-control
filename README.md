# Arduino Joystick Controlled Servo Motor with Reset Button

[TR] Bu proje, bir XY Joystick modülünün X ekseni verisini kullanarak bir SG90 servo motorun açısını kontrol eder. Joystick butonuna basıldığında motor otomatik olarak 90 dereceye (merkez pozisyonu) kilitlenir.
[EN] This project controls the angle of an SG90 servo motor using the X-axis data from an XY Joystick module. When the joystick push-button is pressed, the servo automatically centers at 90 degrees.



## Donanım Gereksinimleri / Hardware Requirements
- 1x Arduino Uno
- 1x SG90 Mikro Servo Motor
- 1x XY Joystick Modülü / Module
- Breadboard & Jumper Kablolar / Jumper Wires

## Bağlantı Şeması / Pin Configuration
- **Joystick VRx:** `A0`
- **Joystick SW (Buton):** Dijital Pin `2`
- **Joystick +5V:** `5V`
- **Joystick GND:** `GND`
- **Servo Sinyal (PWM):** Dijital Pin `3`
- **Servo VCC:** `5V`
- **Servo GND:** `GND`

## Çalışma Mantığı / Working Principle
- **Joystick Hareketi / Movement:** Analog okuma (0-1023), `map()` fonksiyonu ile 0-180 derece açıya dönüştürülür ve servo motora iletilir.
- **Buton / Button Press:** Dahili pull-up direnci (`INPUT_PULLUP`) kullanılarak buton basımı algılanır ve motor sabit olarak 90 dereceye yönlendirilir.
