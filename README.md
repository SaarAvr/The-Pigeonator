# Pigeonator

Pigeons at a balcony are a nuisance that have yet to face a real solution. Scarecrows dont work for a long time, spikes are taking the fun out of the balcony, and short of standing there all day scaring them away there isnt much we can do. Enter The Pigeonator. This device should pose the ultimate counter against the flying menace.

The plan is simple. Have a pan and tilt device hooked to a camera and a water pump, capable of shooting water at the same direction as the camera. Using TensorFlow Lite libraries on Raspberry Pi 4, and a model trained specifically to detect pigeons, the program will detect and mark a pigeon in its field of view. After a simple calculation, the program will decide which direction to move the camera so the marked enemy would end at its center. Then, using serial communication, a command will be sent to the Arduino, which will move the step motors to the desired position. Once the pigeon is at the center of the camera field of view, another command will be sent to the Arduino, activating the water gun to repel the troublesome foe.

This is a work in progress, I will continue to update this page as I add functionalities to this project.
