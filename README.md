# 📏 Ultrasonic Distance Measurement System

An Arduino-based distance measurement system using the HC-SR04 ultrasonic sensor and a 16×2 LCD display. The system measures the distance to an object using ultrasonic sound waves and displays the measured distance in centimeters in real time.

## ✨ Features

- 📡 Distance measurement using the HC-SR04 ultrasonic sensor.
- 🖥️ Real-time distance display on a 16×2 LCD.
- 📏 Distance calculation based on ultrasonic echo time.
- 🔄 Continuous measurement and display updates.
- 🎓 Practical introduction to sensor interfacing and embedded systems.

## 🛠️ Hardware Components

- Arduino Uno or compatible microcontroller.
- HC-SR04 ultrasonic distance sensor.
- 16×2 LCD display.
- Jumper wires.
- Breadboard.
- USB cable or suitable power supply.

## 🔌 Circuit Connections

### HC-SR04 Ultrasonic Sensor

| HC-SR04 Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | Digital pin 9 |
| ECHO | Digital pin 10 |

### 16×2 LCD Display

The following example assumes the LCD is connected in 4-bit parallel mode.

| LCD Pin | Arduino Pin |
|---|---|
| RS | 12 |
| E | 11 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |
| VSS | GND |
| VDD | 5V |
| RW | GND |
| VO | Middle pin of a contrast potentiometer |

Connect the LCD backlight pins according to the display module's specifications. Use a suitable current-limiting resistor if required.

**Note:** These are example pin assignments. Adjust them to match your actual circuit and source code.

## ⚙️ How It Works

1. The Arduino sends a short trigger pulse to the HC-SR04.
2. The sensor emits an ultrasonic sound wave.
3. The wave reflects off an object and returns to the sensor.
4. The ECHO pin produces a pulse whose duration represents the sound's round-trip travel time.
5. The Arduino calculates the distance using the measured pulse duration.
6. The LCD displays the resulting distance in centimeters.

### Distance Formula

The distance is calculated using the speed of sound and the round-trip travel time.

```text
Distance = (Echo Time × Speed of Sound) / 2
```

For time measured in microseconds, a commonly used approximation is:

```text
Distance (cm) = Echo Time (µs) × 0.0343 / 2
```

The division by two accounts for the sound traveling to the object and back.

## 🚀 Getting Started

1. Clone or download this repository.
2. Connect the HC-SR04 and LCD according to your circuit.
3. Open `distance_sensor.ino` in the Arduino IDE.
4. Select your board and the correct serial port.
5. Compile and upload the program.
6. Place an object in front of the sensor and observe the measured distance on the LCD.

## 🎯 Learning Objectives

- Understand ultrasonic distance measurement.
- Work with digital input and output pins.
- Measure pulse duration using a microcontroller.
- Calculate distance from physical measurements.
- Interface an LCD using 4-bit communication.
- Display sensor readings in real time.

## 🔮 Future Improvements

- Add a buzzer when an object gets too close.
- Display a warning when the measured distance falls below a threshold.
- Add LED indicators for different distance ranges.
- Implement measurement averaging to reduce fluctuations.
- Build an obstacle-detection or parking-assistance system.

## ⚠️ Limitations

Measurement accuracy can be affected by object shape, surface material, sensor angle, temperature, and environmental noise. The HC-SR04 also has a limited measurement range, and readings may be unreliable when an object is too close to the sensor.

## 📄 License

Choose an appropriate open-source license before distributing or reusing this project.

---

**Built as a hands-on embedded systems learning project.**
