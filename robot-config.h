vex::brain Brain;
vex::controller Controller = vex::controller(vex::controllerType::primary);
vex::controller Controller2 = vex::controller(vex::controllerType::partner);
vex::motor LeftMotor =vex::motor(vex::PORT2, false);
vex::motor RightMotor = vex::motor(vex::PORT1, true);
vex::motor LeftMotor2 = vex::motor(vex::PORT3, false);
vex::motor RightMotor2 = vex::motor(vex::PORT7,true);
vex::motor ArmMotor = vex::motor(vex::PORT10, false);
vex::motor Puncher = vex::motor(vex::PORT6, false);
vex::motor IntakeMotor = vex::motor(vex::PORT4, false);
