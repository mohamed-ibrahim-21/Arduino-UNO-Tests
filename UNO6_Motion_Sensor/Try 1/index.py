import serial
import os

arduino = serial.Serial('COM6', 57600)
video_path = "D:\Load Cell\spider.mp4"
video_playing = False

while True:
    value = arduino.readline().decode().strip()
    if value:
        try:
            data1 = float(value)  
            data2 = int(data1)
            print("Received value (number):", data2)
        except ValueError:
            print("Received invalid data:", value)

    if data2 == 0 and not video_playing:
        print("Product detected Play video")
        os.startfile(video_path)
        video_playing = True
    else:
        os.system("taskkill /im vlc.exe /f")
        video_playing = False

