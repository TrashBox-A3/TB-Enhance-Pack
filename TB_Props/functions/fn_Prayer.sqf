private ["_mosque", "_times_to_play", "_played_times", "_i","_Minarets"];
_mosque = ["TB_Minaret"];
_times_to_play = [5, 12, 15, 18, 21];
_played_times = [0, 0, 0, 0, 0];
_i = 0;
_Minarets = getPos player nearObjects [_mosque select _i , 600];

if(!isServer)then{
while {true} do
{


   _i = 0;
   {
      if (abs (dayTime - _x) < 0.05) then
      {
         if ((_played_times select _i) == 0) then
         {
            _played_times set [_i, 1];
            {_x say3D "prayer_2"} forEach _Minarets ;
         };
      };
      _i = _i + 1;
   } forEach _times_to_play;

   if (dayTime > ((_times_to_play select 4) + 0.1)) then
   {
      _played_times = [0, 0, 0, 0, 0];
   };

   Sleep 10;
};

};
