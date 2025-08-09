


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(400, 300)
        Form.setStyleSheet("background-color:rgb(172, 197, 224)\n"
"")
        self.label = QtWidgets.QLabel(Form)
        self.label.setGeometry(QtCore.QRect(0, 0, 401, 41))
        self.label.setStyleSheet("background-color:rgb(193, 255, 175);\n"
"font: 75 18pt \"MS Shell Dlg 2\";\n"
"padding-left:20px;")
        self.label.setObjectName("label")
        self.lineEdit = QtWidgets.QLineEdit(Form)
        self.lineEdit.setGeometry(QtCore.QRect(140, 90, 221, 31))
        self.lineEdit.setObjectName("lineEdit")
        self.lineEdit_2 = QtWidgets.QLineEdit(Form)
        self.lineEdit_2.setGeometry(QtCore.QRect(140, 140, 221, 31))
        self.lineEdit_2.setObjectName("lineEdit_2")
        self.lineEdit_3 = QtWidgets.QLineEdit(Form)
        self.lineEdit_3.setGeometry(QtCore.QRect(140, 180, 221, 31))
        self.lineEdit_3.setObjectName("lineEdit_3")
        self.label_2 = QtWidgets.QLabel(Form)
        self.label_2.setGeometry(QtCore.QRect(10, 100, 121, 21))
        self.label_2.setStyleSheet("font: 12pt \"MS Shell Dlg 2\";")
        self.label_2.setObjectName("label_2")
        self.label_3 = QtWidgets.QLabel(Form)
        self.label_3.setGeometry(QtCore.QRect(50, 150, 81, 16))
        self.label_3.setStyleSheet("font: 12pt \"MS Shell Dlg 2\";")
        self.label_3.setObjectName("label_3")
        self.label_4 = QtWidgets.QLabel(Form)
        self.label_4.setGeometry(QtCore.QRect(0, 190, 141, 16))
        self.label_4.setStyleSheet("font: 12pt \"MS Shell Dlg 2\";")
        self.label_4.setObjectName("label_4")
        self.pushButton = QtWidgets.QPushButton(Form)
        self.pushButton.setGeometry(QtCore.QRect(250, 230, 111, 31))
        self.pushButton.setStyleSheet("background-color:rgb(38, 143, 255);\n"
"alternate-background-color: rgb(252, 162, 255);")
        self.pushButton.setObjectName("pushButton")
        self.commandLinkButton = QtWidgets.QCommandLinkButton(Form)
        self.commandLinkButton.setGeometry(QtCore.QRect(290, 50, 101, 31))
        self.commandLinkButton.setMouseTracking(True)
        self.commandLinkButton.setTabletTracking(True)
        self.commandLinkButton.setCheckable(True)
        self.commandLinkButton.setDefault(False)
        self.commandLinkButton.setObjectName("commandLinkButton")
        self.pushButton_2 = QtWidgets.QPushButton(Form)
        self.pushButton_2.setGeometry(QtCore.QRect(140, 230, 91, 31))
        self.pushButton_2.setStyleSheet("background-color: rgb(255, 0, 4);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";\n"
"selection-color: rgb(0, 0, 0);")
        self.pushButton_2.clicked.connect(self.hd,self)
        def hd(self):
                print("Submitted")
        self.pushButton_2.setObjectName("pushButton_2")
        self.label_5 = QtWidgets.QLabel(Form)
        self.label_5.setGeometry(QtCore.QRect(260, 10, 111, 31))
        self.label_5.setObjectName("label_5")

        self.retranslateUi(Form)
        self.lineEdit_2.textEdited['QString'].connect(self.lineEdit_2.copy) # type: ignore
        QtCore.QMetaObject.connectSlotsByName(Form)
        Form.setTabOrder(self.commandLinkButton, self.lineEdit)
        Form.setTabOrder(self.lineEdit, self.lineEdit_2)
        Form.setTabOrder(self.lineEdit_2, self.lineEdit_3)
        Form.setTabOrder(self.lineEdit_3, self.pushButton)

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "Form"))
        self.label.setText(_translate("Form", "S-Password"))
        self.label_2.setText(_translate("Form", "Enter Username"))
        self.label_3.setText(_translate("Form", "Password"))
        self.label_4.setText(_translate("Form", "Re-Enter Password"))
        self.pushButton.setText(_translate("Form", "submit"))
        self.commandLinkButton.setText(_translate("Form", "Login"))
        self.pushButton_2.setText(_translate("Form", "Cancel"))
        self.label_5.setText(_translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'MS Shell Dlg 2\'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-style:italic;\">Signup Page</span></p></body></html>"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Form = QtWidgets.QWidget()
    ui = Ui_Form()
    ui.setupUi(Form)
    Form.show()
    sys.exit(app.exec_())
