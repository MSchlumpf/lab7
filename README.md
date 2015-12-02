# Lab 7
## Runge-Kutta I

Kutta's third order method has the coefficients
<p align="center">
<img src="stuffy_stuff/formula.png" width="200">
</p>
and consists out of two RK methods of order two and three. Both RK methods differ only in the weights *b_i*.

We want to use this method to find a stationary solution to the nonlinear Schrödinger equation
<p align="center">
<img src="stuffy_stuff/nls1.png" width="200">
</p>
of the type
<p align="center">
<img src="stuffy_stuff/nls2.png" width="200">
</p>
where \eta > 0.

In order to find <img src="stuffy_stuff/nls3.png" width="30"> you have to insert the Ansatz for <img src="stuffy_stuff/nls4.png" width="40"> into the time-dependent equation above. This yields a second order ordinary differential equation for <img src="stuffy_stuff/nls3.png" width="30">. Assuming that
<img src="stuffy_stuff/nls5.png" width="60"> as
<img src="stuffy_stuff/nls6.png" width="60"> we can find an analytic asymptotic expression for <img src="stuffy_stuff/nls3.png" width="30">. From the asymptotic expression we can generate initial conditions for the ODE integration.


Write a program which implements both RK methods as stated above. Output the solution from both algorithms.


Note: The solution for this problem can also be obtained analytically as
<p align="center">
<img src="stuffy_stuff/nls7.png" width="200">
</p>
