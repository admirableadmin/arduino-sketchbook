/**********************************************************************************************************/
/**********************************************************************************************************/
/***  Create minute and hour cycles  ***/
void clockGen(){
  minutes += 1;
  if (minutes >= 60){
    minutes = 0;
    hours += 1;
  }
  if (hours > 12){
    hours = 1;
  }
  Serial.print(hours);
  Serial.print(":");
  Serial.println(minutes);
}                                                  // Minute and hour hour cycle generation
/**********************************************************************************************************/
/**********************************************************************************************************/


