# Process Optimasation 


Implementation of LQR, LQG, and MPC Controllers for Linear Systems

Description:

This project aims to implement and compare the performance of three popular control strategies, namely LQR (Linear Quadratic Regulator), LQG (Linear Quadratic Gaussian), and MPC (Model Predictive Control), for linear systems. Linear systems are common in control engineering, making these control strategies widely applicable.

The codebase includes the implementation of LQR, LQG, and MPC controllers, as well as the necessary simulation environments for testing and evaluating their performance. The simulation environment is based on MATLAB/Simulink, which enables users to easily simulate and analyze the controllers' behavior.

The LQR controller is a feedback control strategy that minimizes a cost function consisting of the state and control inputs. The LQG controller combines the LQR controller with a Kalman filter to estimate the system's state. The MPC controller optimizes a cost function over a finite horizon and selects the best control inputs based on the predicted system behavior.
