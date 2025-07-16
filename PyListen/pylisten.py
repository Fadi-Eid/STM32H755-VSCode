import serial

ser = serial.Serial('/dev/ttyACM0', baudrate=115200, timeout=1)

while True:
    data = ser.read(1)
    if data:
        print("Received:", " ".join(f"{b:02X}" for b in data))
