import serial

ser = serial.Serial('/dev/ttyACM0', baudrate=115200, timeout=1)

while True:
    data = ser.read(3)  # read 4 bytes
    print(f"Received: {data}")