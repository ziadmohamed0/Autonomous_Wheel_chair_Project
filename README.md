💥 Excited to share this with you. My friends and I presented our project presentation on Tuesday, February 12, under the supervision of Dr. Abeer, Misr International Technological University.

--------------------------------------------------------------------------------------------

• The project : Autonomous Wheel chair

❑ The idea :

Our autonomous wheelchair is designed to address common challenges faced by patients in hospitals, offering a user-centric and technologically advanced solution. It aims to enhance independence
and improve mobility for patients in hospital environments.The autonomous wheelchair effortlessly identifies its destination, whether it's the radiology room, a patient's room, or any specific location within the hospital.

--------------------------------------------------------------------------------------------

❑ Project characteristics : 

1- The wheelchair moves efficiently navigating through hospital spaces and reaching designated destinations without outer guidance.

2- Capable of recognizing specific locations such as radiology rooms or patient areas, ensuring precise transportation within the hospital.

3- Offers a unique feature allowing the chair to seamlessly transform into a bed, providing patients with an additional level of comfort.

4- Flexibility to choose between self-driving mode for hands-free navigation or manual control using a joystick.

--------------------------------------------------------------------------------------------

❑ Mechanism of Action :

1. Start
2. Run the program
3. Open the web page
4. Choose a room (pharmacy, X-ray lab, laboratory)
5. Send room selection data to the server (esp8266)
6. If the X-ray room is chosen:
    - Move motors straight for 4 seconds
    - Stop motors
    - Turn right motor for 1 second (facing right)
    - Stop motors
    - Move forward for 1 second
    - Stop motors
    - Move forward for 2 seconds
    - Stop motors
7. If the laboratory room is chosen:
    - Move motors straight for 4 seconds
    - Stop motors
    - Turn left motor for 1 second (facing left)
    - Stop motors
    - Move forward for 1 second
    - Stop motors
    - Move forward for 2 seconds
    - Stop motors
8. If the pharmacy room is chosen:
    - Move motors straight for 2 seconds
    - Stop motors
    - Turn right motor for 2 seconds (facing right)
    - Stop motors
    - Move forward for 4 seconds
    - Stop motors
9. When the chair arrives in the room:
    - Signal the room's green hand for lighting
10. End

--------------------------------------------------------------------------------------------

❑ components : 

• 1 * ESP8266 
• 1 * Arduino uno 
• 4 * IR Sensors
• 1 * UltraSonic Sensors
• 2 * Motors 
• 1 * H-Bridge (L298N)
• Wires
• Battery

--------------------------------------------------------------------------------------------

❑ Team members :

• Zohier Raafat Hassan(leader)
• Rawan Ebrahem desoky
• Doaa Mohamed Ebrahem
• Asmaa Osama Eid
• Ziad Mohammed fathi
 
