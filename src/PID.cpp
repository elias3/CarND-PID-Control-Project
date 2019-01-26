#include "PID.h"

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_)
{
  p_error = i_error = d_error = 0.0;

  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
}

void PID::UpdateError(double cte)
{
  i_error += cte;
  d_error = cte - p_error;
  p_error = cte;
}

double PID::TotalError()
{
  return Kp * p_error + Ki * i_error + Kd * d_error;
}
