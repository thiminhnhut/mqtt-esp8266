# GIAO TIẾP GIỮA 2 ESP8266 QUA GIAO THỨC MQTT

* **Thực hiện:** Thi Minh Nhựt - **Email:** thiminhnhut@gmail.com

* **Thời gian:** Ngày 22 tháng 07 năm 2018

## Nội dung thực hiện

### Mục tiêu

* Truyền nhận dữ liệu giữa 2 ESP8266 qua giao thức MQTT với Broker được xây dựng trên Raspberry Pi (Raspberry Pi Zero).

### Sơ đồ mạch nguyên lý

* Sơ đồ trên Breadboard:

    ![](https://github.com/thiminhnhut/mqtt-esp8266/blob/master/10.Schematic/MQTT_ESP8266_bb.png)

* Sơ đồ mạch nguyên lý:

    ![](https://github.com/thiminhnhut/mqtt-esp8266/blob/master/10.Schematic/MQTT_ESP8266_schem.png)

* Cách hoạt động:

    + Sử dụng nút nhấn của ESP8266 No.1 để điều khiển LED của ESP8266 No.2.

    + Sử dụng nút nhấn của ESP8266 No.2 để điều khiển LED của ESP8266 No.1.

    + Sử dụng 1 nút nhấn cho chức năng ON và OFF LED.

### Chương trình điều khiển

* File Configuration: [Configuration.h](https://github.com/thiminhnhut/mqtt-esp8266/blob/master/20.Firmware/CustomLib/Configuration/Configuration.h)

* Chương trình điều khiển trên ESP8266 No.1: [Firmware-ESP8266-No1](https://github.com/thiminhnhut/mqtt-esp8266/blob/master/20.Firmware/Firmware-ESP8266-No1) (file [main.cpp](https://github.com/thiminhnhut/mqtt-esp8266/blob/master/20.Firmware/Firmware-ESP8266-No1/src/main.cpp))

* Chương trình điều khiển trên ESP8266 No.2: [Firmware-ESP8266-No2](https://github.com/thiminhnhut/mqtt-esp8266/blob/master/20.Firmware/Firmware-ESP8266-No2) (file [main.cpp](https://github.com/thiminhnhut/mqtt-esp8266/blob/master/20.Firmware/Firmware-ESP8266-No2/src/main.cpp))
