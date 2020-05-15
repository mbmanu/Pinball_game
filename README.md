# Pinball_game
A simple pinball game using sensors and actuators.

We all have played pinball game in our PC. It is an interesting game and playing is so much fun.
But building a pinball machine is much more exciting. We built a simple pinball machine using
Arduino UNO, sensors and actuators. Code 1 is built using Ardino UNO, HC-SR04, micro-servo motor,
and an IR sensor. HC-SR04 is used to sense the incoming ball. Servo motor is the actuator here
whose axle is connected to the paddle in the game. IR sensor is used to indicate whether or not 
the game has ended. When the ball is shot, HC-SR04 senses the ball passing within its vicinity.
The paddle which is attached to the servo shoots the ball up. The IR sensor beneath the servo
indicates whether the game is over or not. If it senses the ball, it sends the signal to the 
arduino indicating the game is over.

Code 2 is gyro controlled. GY-521 is used for the gyroscope reading. Placing it over our hand,
servo can be controlled by hand gestures. Tilting the palm up, paddle shoots the ball.

