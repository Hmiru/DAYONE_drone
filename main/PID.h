#ifndef PID_AXIS
#define PID_AXIS
class axis {
  
  private:
    float kP;
    float kI;
    float kD;
    float dt = 0.0;
    float t_tmp = 0.0;
    float e_tmp = 0.0;
    float err = 0.0;
    float inte = 0.0;
    float diff = 0.0;
    float PID_val = 0.0;

  public:
    axis(float kP, float kI, float kD);
    
    void cal_err(float target, float current);
    void cal_dt();
    void cal_inte();
    void cal_diff();
    void cal_PID();
    float get_PID();
    float get_kP();
    float get_kI();
    float get_kD();
    float get_err();
    void set_const(float kP, float kI, float kD);
};


#endif
