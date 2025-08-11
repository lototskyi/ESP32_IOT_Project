# WiFi based application on the ESP32 and Subscribe/Publish MQTT Messages to AWS IoT using ESP-IDF & FreeRTOS



> An example of WiFi based application using the ESP-IDF (Espressif IoT Development Framework), Integrating an ESP-IDF Components & Sensors Library and configuring the ESP32 to connect to AWS IoT and Publish/Subscribe messages via AWS IoT Core using the MQTT protocol.
>
Keep certificates in:
```
main/certs
```
Name the folder for AWS IOT SDK
```
esp-aws-iot/
```
Link to download old version of AWS IoT SDK [ESP AWS IoT v3.1.x](https://github.com/espressif/esp-aws-iot/tree/release/v3.1.x).  
Link to download new version of AWS IoT SDK [ESP AWS IoT](https://github.com/espressif/esp-aws-iot).  

For old SDK in sdkconfig in AWS settings you should provide Client ID (name of Thing in AWS IoT Core) and endpoint (Domain name in AWS IoT Core).  
For new SDK in sdkconfig in Example configuration section you should provide Client ID (name of Thing in AWS IoT Core) and endpoint (Domain name in AWS IoT Core).  

aws_iot.c and aws_iot.h files are used for old SDK version.  
For new SDK version example esp-aws-iot/examples/mqtt/tls_mutual_auth is used (some files from this example that are added to the main/ and are commited).