import sys
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
def window():
    app=QApplication(sys.argv)
    w=QWidget()
    w.setGeometry(100,100,250,50)
    b=QLabel("hello world",w)
    # b.setText("Hello sukhnam")
    b.move(50,20)
    button=QPushButton("iam button",w)
    button.move(50,50)
    w.setWindowTitle("hello_world_1")
    w.show()
    sys.exit(app.exec_())

if __name__ =='__main__':
    window()

