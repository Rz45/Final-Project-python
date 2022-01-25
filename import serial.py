import serial
data = serial.Serial('COM3',9600) #nama port, baurate   #ketika run arduino harus konek dan cocokin kedua item ini

while (True) :
    car = input ("masukan nilai =") #menerina data input dari keyboard
    data.write("nilainya = " + str(car) + "\n") #data yg terinput akan ditampilkan LCD dan diakhiri enter

    print ("Program done")