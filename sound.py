import time
import playsound
from threading import Thread

mp3=r"1234.mp3"

def play_music():
    playsound.playsound(mp3)
    
#thread for playing music
t=Thread(target=play_music)
t.daemon=True
t.start()
print("hellooooooooo")

start_time=time.time()
#condition (play/pause/volume)
while(time.time()-start_time)<10:
    print("running...") #running for 10 seconds only - 10