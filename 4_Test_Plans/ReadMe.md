# Test Plans

|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Is person seated  | push button=1| push button=1| PASS  |
| TID_02  | Is person not seated  | push button=0| push button=0 | PASS  |
| TID_03  | Temperature Request | Temp=0| heater=Off | PASS  |
| TID_04  | Temperature Request | Temp=20| heater=20 degree generation | PASS  |
| TID_05  | Temperature Request | Temp=25| heater=25 degree generation | PASS  |
| TID_06  | Temperature Request | Temp=29| heater=29 degree generation | PASS  |
| TID_07  | Temperature Request | Temp=33| heater=33 degree generation | PASS  |
| TID_08  | LED ON | Button=1 && Heater=1| LED=1 | PASS  |
| TID_09  | LED OFF | Button=0 && Heater=0| LED=0 | PASS  |
| TID_10  | LCD Display | Temperature :)<br />20 deg Cel| Temperature :)<br />20 deg Cel| PASS  |
