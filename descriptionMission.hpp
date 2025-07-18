class lt_param_timeOfDay
{
    title = "Time of Day";
    values[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    texts[] = {"0:00","1:00","2:00","3:00","4:00","5:00","6:00","7:00","8:00","9:00","10:00","11:00","12:00","13:00","14:00","15:00","16:00","17:00","18:00","19:00","20:00","21:00","22:00","23:00","Use mission settings"};
    default = MISSION_TIME;
    function = "BEN_fnc_setTime";
};
class lt_param_weather
{
    title = "Weather";
    values[] = {0,1,2,3,4,5,6,7,8,9};
    texts[] = {"Clear (Calm)","Clear (Light Winds)","Clear (Strong Winds)","Overcast (Calm)","Overcast (Light Winds)","Overcast (Strong Winds)","Rain (Light Winds)","Rain (Strong Winds)","Storm","Use mission settings"};
    default = MISSION_WEATHER;
    function = "BEN_fnc_setWeather";
};
class lt_param_fog
{
    title = "Fog";
    values[] = {0,1,2,4};
    texts[] = {"None","Light","Heavy","Use mission settings"};
    default = MISSION_FOG;
    function = "BEN_fnc_SetFog";
};