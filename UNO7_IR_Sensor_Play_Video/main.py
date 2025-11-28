import serial
import time
import os

PORT = "COM6"        
BAUDRATE = 9600     
VIDEO_PATH = "D:\Important files\courses\(Arduino)\IR_Sensor_Play_Video\spider.mp4"

video_playing = False

def play_video():
    global video_playing
    if not video_playing:
        os.system(f'start "" "vlc" "{VIDEO_PATH}"')
        video_playing = True

def stop_video():
    global video_playing
    if video_playing:
        os.system('taskkill /IM vlc.exe /F')
        video_playing = False

ser = serial.Serial(PORT, BAUDRATE, timeout=1)
time.sleep(2) 

print("Listening to Arduino...")

while True:
    line = ser.readline().decode('utf-8', errors='ignore').strip()
    if not line:
        continue

    print("From Arduino:", line)

    if line == "BOX_ON":
        play_video()
    elif line == "BOX_OFF":
        stop_video()
