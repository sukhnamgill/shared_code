from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *
import sys
class First(QWidget):
    def __init__(self):
        super(First,self).__init__()
        self.resize(200,300)
        self.label=QLabel("iam sukhnam",self)
        self.label.move(20,20)
        self.font=QFont()
        self.font.setFamily('Apple')
        self.font.setPointSize(20)
        self.label.setFont(self.font)
        self.input=QLineEdit("enter Name",self)
        self.input.move(10,10)
        self.btn=QPushButton("h",self)
        self.btn.clicked.connect(self.btn_clicked)
        self.btn.move(50,60)
       
    def btn_clicked(self):
        self.label.setText(self.input.text())

if __name__=="__main__":
    app=QApplication(sys.argv)
    win=First()
    win.show()
    

    sys.exit(app.exec_())
