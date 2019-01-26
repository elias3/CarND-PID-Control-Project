# CarND-Controls-PID

Self-Driving Car Engineer Nanodegree Program

This project implements a basic PID controller. The controller controls the steering angle of the car by monitoring the CTE (cross track error).
Using a manual process of twiddle on the parameters, the parameters that helped drive the car smoothly were the following:

[//]: # "Image References"
[pid]: ./PID_en.svg "PID Controller"

- Kp = -0.5, Kp is the proportional gain; a high proportional gain results in a large change in the output for a given change in the error. In our case the error is the cross track error
- Ki = 0.001, Ki is proportional to the magnitude of the error and the total duration, since it monitors all the erros. Since the accumlated error is high the contribution, it is common that the contribution of this error is multiplied by a small factor
- Kd = -0.3, the derevative of the error which is the slope at a given point in time predicts the behavior of the system. Usually this value is kept lower than the Kp value because it can result to high-frequency noise

![alt text][pid]

Furthermore the throttle was fixed to 0.1 (instead of the original value of 0.3). This can be further improved by using another PID controller that incorporates the speed and the angle is input.

---

## Dependencies

- cmake >= 3.5
- All OSes: [click here for installation instructions](https://cmake.org/install/)
- make >= 4.1(mac, linux), 3.81(Windows)
  - Linux: make is installed by default on most Linux distros
  - Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  - Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
- gcc/g++ >= 5.4
  - Linux: gcc / g++ is installed by default on most Linux distros
  - Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  - Windows: recommend using [MinGW](http://www.mingw.org/)
- [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  - Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  - If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
- Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`.

Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)
