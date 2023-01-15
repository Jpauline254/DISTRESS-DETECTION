# DISTRESS-DETECTION[Uploading DESIGNING A SYSTEM TO DETECT DISTRESS SOUNDS. PROJECT REPORT (1).pdf…]()



SCHOOL OF SCIENCE, ENGINEERING AND TECHNOLOGY

DEPARTMENT OF TELECOMMUNICATIONS

PROJECT REPORT: DESIGNING A SYSTEM TO DETECT DISTRESS SOUNDS

PAULINE NAMWAKIRA

TLCM/MG/2705/09/19

A PROJECT REPORT SUBMITTED IN PARTIAL FULFILLMENT OF THE
REQUIREMENTS FOR THE BACHELOR’S DEGREE IN TELECOMMUNICATIONS,
DECEMBER 2022

ABSTRACT

Distress is a sophisticated condition which exerts influence on a remarkable percentage of human 
beings. Distress can cause anxiety, depression, fear, anger, sadness, and suicide, among others. 
Detection of distress is one way in which we can facilitate prompt response and improvements to 
human well being both physically and psychologically therefore improving the overall quality of 
life. However, distress detection has not yet been implemented widely as research is still ongoing 
in this sector of Automatic Speech Recognition (ASR). Researchers are making efforts to exploit
cost effective Voice Recognition technologies for detecting distress. In this paper, I design a 
system for distress detection utilizing the Elechouse V3 Voice Recognition module and sending 
alert on distress situations using GSM. ATMEGA 328 PU Microcontroller was used to 
implement this project.
Keywords – Distress detection; GSM (Global Systems for Mobile Communications), GPS 
(Global Positioning System), LCD (Liquid Crystal Display), ATMEGA 328 PU Microcontroller, 
Voice Recognition.

1. INTRODUCTION


1.1 BACKGROUND OF THE STUDY

Detection of distress in human beings has attracted a great deal of study in the modern world 
because of its profound influence on living. There is immense ongoing research in the field of 
stress detection as it is an especially important concept in our daily lives. Current day-to-day 
living standards pose threatening circumstances including burglary, house breaking, falls, 
physical attacks, abductions and sexual assaults or any sorts of brutal crimes of which you can 
think. In these circumstances, the casualty perceives risk and insecurity therefore needs instant 
aid. Another situation at hand is regarding old people who live alone, it is quite important that we 
keep track of their actions and conduct. Other sources of stress might be finance issues and
health-related problems, among others. These factors might result in depression or severe 
injuries. There is a need for automatic detection, surveillance, and alert of emergency issues e.g.,
predicting falls, sounds of pain in patients or a cry for help early enough to react appropriately 
and provide immediate assistance. In this project, I designed a system which can help us
automatically detect distress sounds from speech using Voice recognition.


1.2 PROBLEM STATEMENT

Spoken words might be interpreted differently according to how the receiver perceives it. 
However, conception of what is said will never be enough to interpret the emotions behind the 
speaker. It is important that we grasp the non-lexical components of a speech to realize emotions 
behind the words, and this might help us detect distress in a speaker’s voice
There has been ongoing research in this field of study and researchers have produced all sorts of
innovative strategies, utilizing AI systems to analyze scenes of surroundings which are not 
controlled. However, most of this research focused on motion sensors on hospital beds which has 
aided doctors and caregivers in tracking their patients’ activities. Less research has been
undertaken in trying to recognize distress sounds from individuals to detect emergencies. The 
few classic Automatic Speech recognition Systems that have been put in place still reveal 
mediocre performance especially with older age groups as most of the machine learning models 
have been trained using younger age group samples. (Frederic Aman, Michel Vacher, Solange 
Rossato, Francois Portet, Speech recognition of elderly voices.)
The speech recognition systems developed mostly focus on gender recognition compared to 
distress detection. Therefore, there is an exceptionally large gap in the field of research 
associated with detection of distress. Accuracy is also a factor which has always affected ASR 
systems and since Distress detection is one of the new things in the Voice Recognition 
Technology realm, we expect some inaccuracy factors until much more research is undertaken.
In my project, I want to design a system that will help us automate the detection of distress 
sounds in this evolving world. This will generate a solution to late detection or late responses to 
emergencies and hopefully increase life expectancy. My solution will help reduce the number of 
suicidal cases as we will be able to detect distress from speakers at an early stage and deal with
the situation accordingly. In my project, I will integrate a GPS tracker in the system which will 
also help us know the location from where we are getting these emergency sounds; be it from 
any form of physical assault or pain, a commotion and remediate an action appropriately.


1.3 OBJECTIVES 

To design a system that will be used to detect distress sounds.

1.3.1 SPECIFIC OBJECTIVES
1. Design a system to detect distress using Voice Recognition Technology.
2. Create a system that will be used to alert others in case of distress situations.
3. Integrate a GPS tracker in the Distress Detection System.
4. Provide instructions on how to design and construct the Distress Detection System.


1.4 RELEVANCE TO TELECOMMUNICATIONS

One of the main goals of the telecommunications industry is to establish secure and reliable 
communication channels between users around the world with extremely low latencies and high 
availability. Communication is a very integral concept in our day to day lives for government 
communication, health sector, businesses and even the family and society concept. However just 
parsing information might not be enough. As Telecommunications systems advance especially in 
voice recognition systems for security systems in this evolving world, it is important that we also 
focus on the details that will help improve human life and expectancy as our daily living poses 
threatening situations and many forms of distress,
In this project I will suggest a framework and design a system that will be used to recognize 
sounds of distress among individuals using Voice Recognition Technology systems. This will 
utilize IOT systems and Machine learning systems but above all Telecommunications as the
parsing of information must be done over internet connectivity. This will be a great breakthrough 
in the telecommunications industry.


3. METHODOLOGY

3.1 METHODOLOGY DESCRIPTION 

In my project, I have designed a system that should be able to detect distress sounds. The system 
should alert the relevant authority in case a distress sound is detected. In addition to that a GPS 
tracker is included in the system for it to also send location specific details together with the 
alert.
The design of the system used to detect distress sounds was achieved using the Voice 
Recognition V3 MODULE with a microphone integrated with the Arduino Module. The Voice 
Recognition module V3 is a speaker dependent module. It supports up to 80 voice commands in 
all. Max 7 voice commands could work at the same time. Any sound could be trained as a 
command. Therefore, I trained the module first with distress sounds for example “HELP!” 
OUCH!!” etc. which could be used to recognize any forms of distress of that kind.
An LCD was integrated into the system. It displays information about the connection status of 
the system and all activities taking place in the system.
The system should alert the relevant personnel in cases where situations of distress are identified. 
In this case I utilized the GSM SIM 800L module with Arduino. A mobile phone with a sim card 
should be paired to our GSM module. Once a connection is established, THE GSM module can 
send an alert to the paired phone in form of SMS when it detects a distress sound.
In addition to that, I added a functionality where the affected person can press a buzzer if they 
are not able to speak but are undergoing distress. The GSM module still sends an alert to the 
paired smartphone when this buzzer is pressed.
Another form of alert is through a LED connected to the buzzer which lights up RED when a 
distress sound is detected by the voice Recognition module. Any person within proximity will 
notice the RED color and might offer help to the person in distress.
In my third objective, a GPS tracker was to be integrated to the system. This helps in providing 
location specific details on where distress situations are originating from. A GPS module was 
embedded into my system and the location details are send as SMS together with the alert 
through the GSM SIM 800L module. 
Instructions on how to design and construct the system have been provided in chapter 3.4


3.2 CIRCUIT COMPONENTS AND CODE

3.2.1 CIRCUIT COMPONENTS

1. ATMEGA 328 PU

The ATMEGA328P-PU is an enhanced RISC architecture-based CMOS 8-bit microcontroller 
with less power consumption.
By processing instructions in a single clock cycle, the devices achieve CPU throughput that is 
close to one million instructions per second (MIPS) per megahertz, enabling the system designer 
to balance power consumption and processing performance. (Arduino Microcontroller-based 
building by H.R. Hatem, J. N. Shehab, and I. Abdul-Rahman)
The picoPower 8-bit AVR RISC-based microcontroller has the following features: 32KB ISP 
flash memory with read-while-write capabilities, 1024B EEPROM, 2KB SRAM, 23 generalpurpose I/O lines, 32 general-purpose working registers, three flexible timer/counters with 
compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-
wire serial interface, SPI serial port, and a 6-channel 10-bit A/D converter (8- The device works 
with a voltage range of 1.8 to 5.5 volts. (Home automation using the Arduino interface and 
MATLAB (Avadhoot R. Telepatil, Amit N. Hambar, Pushkar S. Terwadkar)
• Widely used in projects and autonomous systems that call for a basic, inexpensive microcontroller.
• The popular Arduino development platform, specifically the Arduino Uno, Arduino Pro 
Mini, and Arduino Nano versions, is where the implementation is most frequently used.

2. V3 VOICE RECOGNITION MODULE

One of the most portable and user-friendly voice recognition modules available is Elechouse 
V3.
This module can be used in one of two ways: either through the built-in GPIO pins or the 
serial port. Up to eighty voice commands with a duration of 1500 milliseconds can be stored 
on the V3 board. This one will compare it with a library of voices rather than converting 
your orders to text. Therefore, using this product is not language-restricted technically. Any
sound can be recorded and used as a command. You can record your command in any 
language. Therefore, you must first train it before allowing it to understand voice 
commands.
Only seven of the module's eighty commands will result in outputs if you connect it to 
GPIO pins. The recognizer will send outputs to the appropriate GPIO pins if any of the 
voice commands you choose and load into it using this technique are recognized. We do not
need to worry about the restricted functionalities because we are using this with the 
Arduino.
The system operates with an input voltage range of 4.5 to 5 volts and uses less than 40 mA 
of current. If used properly, this module can operate with a 99% recognition accuracy. The 
performance of the module is significantly impacted by the microphone used and ambient 
noise. To get the most out of the module, it is preferable to pick a microphone with adequate 
sensitivity and to try to reduce background noise while issuing orders. (Khotimah, K., 
Santoso, A. B., Ma’arif, M., Azhiimah, A. N., Suprianto, B., Sumbawati, M. S., & Rijanto, T., 
Validation of voice recognition in various Google voice languages using voice recognition 
module V3 based on microcontroller.


3. SIM800L GSM MODULE

Simcom's SIM800L GSM/GPRS module is a tiny cellular GSM modem that can simply connect 
to any microcontroller and provide it with GSM capability as well as enable GPRS transfer. This 
module establishes a connection between the microcontroller and the mobile network so that it 
can send and receive text messages (SMS), make, and receive phone calls, and access the 
internet through GPRS, TCP, or IP. (Rahnema, M. (1993). Overview of the GSM system and 
protocol architecture)
This module may be integrated into many different IoT projects, making it ideal for any project 
that needs long-range communication.
Four essential parts make up the SIM800L GSM/GPRS module. These parts play crucial roles in 
the module's operation. The SIM800L GSM cellular chip, LED Status Indicators, Antennas, and 
Micro-SIM slot are these essential parts.
Power Supply for SIM800L GSM Module
The power source for the SIM800L GSM module is one of its main problems. The module will
not be able to connect to the cellular network or it will stop working altogether if the power
source is unable to deliver the necessary current.
The module's operational voltage range is 3.4 to 4.4 V. However, the SIM800L module's lack of
an internal voltage regulator is a separate issue. Therefore, we require an external power source
of 3.4 to 4.4 V. (Ideal 4.1V). Also keep in mind that this module consumes some power; peak
current consumption can reach 2 A. Therefore, the power source ought to be able to source 2A.
Application
• Emergency preparedness systems
• remote sensing
• communication
• home automation

4. 16 X 2 LCD MODULE

Due to their accessibility and affordability, Arduino LCD Display Modules are primarily employed 
in embedded projects. 16 Columns and 2 Rows are represented by the 162 Display LCD Module.
The Arduino 16x2 LCD Display Module contains an I2C interface and a 2-line LCD screen with 
16 characters per line. It shows two lines of sixteen characters each, with white characters on a 
blue background. The I2C communication interface is used by this 16 x 2 I2C Arduino LCD 
Display Module. This means that we may utilize VCC, GND, SDA, and SCL as the four pins for 
the display. As a result, we gain the benefit of saving 4 Arduino digital and analog pins.
3.2.2 CODE
In this project I used three different codes. This is because I needed two ATMEGA 328 PU 
microcontrollers. The first code is for the first microcontroller which deals with the GSM, GPS,
and LCD module. The second code is for the second microcontroller which focuses on the Voice 
Recognition module. The last code is for training my Voice Recognition module.

✓ CODE 1(GSM, GPS, LCD)

This code installs the GPS library, serial communication library for communication between 
Arduino and GSM and the LCD libraries. It then sets up how the LCD will display information.It also establishes how to pair the mobile phone’s Sim card to the GSM 
module, what commands will be used by the user to communicate with the GSM SIM 800 L and 
what should be displayed on the User’s screen.
Contains the GPS module code which helps in determining specific location where distress situation 
has occured. This part of code also determines what the LCD displays in case of distress detection.

✓ CODE 2

This code focuses on the Voice recognition module and is used for uploading trained distress 
sounds into the voice recognition module

✓ CODE 3 : TRAINING

This is the code which is used to train our Voice Recognition module V3


 3.3.1 CIRCUIT DESCRIPTION
 
The design of this distress detection system utilized two ATMEGA 320 PU microcontrollers. 
With reference to the pin out diagram below, I implemented the circuit as follows.

▪ ATMEGA 328 PU (1)

This is responsible for the GPS module, GSM module and LCD module.
For the global positioning system module, Digital pin 8 was used for the transmitter while 
Digital pin 9 was used for the receiver. The Liquid Crystal Display module utilized analog input 
5 for SCL and Analog input 4 for SDA. I then set the GSM module to use digital pin10 for the 
transmitter and Digital pin 11 for the receiver.

▪ ATMEGA 328 PU (2)

This is responsible for the Voice Recognition Module. I connected the Transmitter to the Digital 
pin 7 and the receiver to digital pin 8.
Digital pin 9 of ATMEGA 328 PU (2) is connected to Digital pin 12 of ATMEGA 328 PU (1) 
for serial communication. Digital pin 9 is always set to 0V. For it to send a signal, A voltage 0f 
5V(high) is applied to it.
A voltage regulator is added to the circuit to step down the voltage from 7-35v in to 5V out.
A 220 Ohm resistor is placed at the Light Emitting diode. This is because LED works on 3V. 
Since the power supply is 5V, there must be a resistor otherwise the circuit will burn.
A 10-microfarad electrolytic cap is placed at the power supply to smoothen the circuit.


3.4 WORKING PRINCIPLE

In this project, ATMEGA 328 PU is used for controlling whole the process.
The voice recognition module V3 is trained with different distress sounds. 
These sounds are stored in variables that I have specified. The sounds are then uploaded to 
ATMEGA 328 PU (2) and then stored.
Once someone utters a sound of Distress on the microphone, it is compared to the trained distress 
sounds stored in the microcontroller. (Yehav Alkaher, Osher Dahan and Yair Moshe. “Detection 
of distress in speech”), If the sound is recognized by the ATMEGA 328 PU (2) module, the LED 
lights up RED and a command is sent to the LCD to print “DANGER, SENDING ALERT”. A 
serial communication then occurs between the two microcontrollers and the GSM module is 
configured to send an SMS to a paired device.
The ATMEGA 328 PU (1), Gets location information from the GPS module and that information 
is integrated into the SMS that is sent to a paired device.
Alternatively, A buzzer can be pressed, and it acts as a detection of distress sound.


4. RESULTS and DISCUSSION
A system to detect distress sounds was designed.

OBJECTIVE 1: 

Design a system to detect distress using Voice Recognition Technology.
The system consists of Voice Recognition Module V3 which has a microphone, ATMEGA 328 
PU and a 16 x2 LCD. The microphone is used to give voice commands as input. The microphone 
converts the voice signal to an electric signal, which is then transmitted to the voice recognition 
module. The voice recognition module converts the analog signal into digital signal and the 
signal is transferred to ATMEGA 328 PU (2). Once someone utters a sound of Distress on the 
microphone, it is compared to the trained distress sounds stored in the microcontroller. If the 
sound is recognized by the ATMEGA 328 PU (2) module, the LED lights up RED and a 
command is sent to the LCD to print “DANGER, SENDING ALERT”. The system is shown 
below.


When the system is powered, here is a list of steps of what happens:
• Booting
• GSM, GPS, and Voice Recognition modules are configured.
• Once all modules are connected, system is ready to use.



• In case of detection of distress, sounds…. The LED lights up and a notification pops up 
on the LCD
• If GSM and GPS are well configured and a device is paired an Alert is sent to the paired 
device, else, it fails.




OBJECTIVE 2:

Create a system that will be used to alert others in case of distress situations.
A GSM SIM 800L Module was used to achieve this objective. Once a distress sound is detected 
an SMS is sent to a paired device to alert on the distress situation.
28





OBJECTIVE 3:

Integrate a GPS tracker in the Distress Detection System.
The GPS module was integrated into the system, and it sends information about where the 
distress is coming from.




OBJECTIVE 4: 

Provide instructions on how to design and construct the Distress Detection 
System.
Instructions on how to develop the system have been discussed in detail in Chapter 3.


5. CONCLUSION

The proposed system proposed a method for detecting distress sounds by utilizing Voice 
Recognition technology. This system is intended for people of all ages because distressing 
situations occur frequently in everyday life.
The developed system has been trained with known distress sounds and can detect similar sounds 
and alert the appropriate authorities. It is possible to conclude that this work based on the 
ATMEGA 328 PU microcontroller was a success.
Two ATMEGA 326 PU microcontrollers, a voice recognition module, a GSM module, a GPS 
module, and an LCD module comprise this system. It is simple to use and inexpensive. It 
consumes very little power, which reduces any power-related risks.
This research project's objectives have all been met. For variety, I recommend training the 
system with as many distress sounds as possible and using Voice Recognition modules that can 
store as many commands as possible.
