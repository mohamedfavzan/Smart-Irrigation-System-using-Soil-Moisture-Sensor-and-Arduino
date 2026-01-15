# Smart-Irrigation-System-using-Soil-Moisture-Sensor-and-Arduino
The system reads soil moisture levels through the hygrometer sensor. If the moisture level falls below a predefined threshold, the Arduino triggers the relay to start the pump, which waters the plant. Once the moisture level rises above the threshold, the pump automatically stops, conserving water and ensuring optimal moisture levels for the plant.


Apparatus Required:
1. Arduino Nano
2. Soil Hygrometer Sensor
3. Jumper Wires
4. 5V Relay Module
5. Water Pump Motor
6. 9V Battery


Procedure:
1.Assemble the Circuit:
- Connect the soil moisture sensor to one of the analog input pins of
the Arduino Nano.
- Wire the 5V relay to the Arduino, which controls the water pump.
- Connect the water pump to the relay and power it using a 9V battery.
- Ensure proper connections between all components to avoid electrical
issues.
2.Programming the Arduino:
- Upload a code that continuously reads moisture sensor data.
- Set a threshold moisture value. If the soil moisture falls below this
value, the Arduino will signal the relay to turn on the pump.
- When the moisture level is restored, the pump will stop.
3.Testing the Setup:
- After uploading the code, test the system by placing the sensor in a
potted plant.
- As the soil dries, observe if the water pump starts automatically, and
when moisture is detected, check if the pump stops
