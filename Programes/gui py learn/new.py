import sys
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QPushButton, QLabel

class MainWindow(QWidget):
    """This is the main window that appears after login."""
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Main Window")
        self.setGeometry(200, 200, 400, 300)

        layout = QVBoxLayout()
        label = QLabel("Welcome to the Main Window!", self)
        layout.addWidget(label)

        self.setLayout(layout)

class LoginWindow(QWidget):
    """This is the login window."""
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Login Window")
        self.setGeometry(200, 200, 300, 200)

        layout = QVBoxLayout()

        # Login Button
        self.login_button = QPushButton("Login", self)
        self.login_button.clicked.connect(self.open_main_window)
        layout.addWidget(self.login_button)

        self.setLayout(layout)

    def open_main_window(self):
        """Closes login window and opens main window."""
        self.main_window = MainWindow()
        self.main_window.show()
        self.close()  # Hide the login window

if __name__ == "__main__":
    app = QApplication(sys.argv)
    login = LoginWindow()
    login.show()
    sys.exit(app.exec_())
