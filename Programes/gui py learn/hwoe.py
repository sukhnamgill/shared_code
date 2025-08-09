import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QAction

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setWindowTitle("PyQt5 Menu Example")
        self.resize(500, 400)

        # Create menu
        menubar = self.menuBar()
        file_menu = menubar.addMenu("File")

        exit_action = QAction("Exit", self)
        exit_action.triggered.connect(self.close)
        file_menu.addAction(exit_action)

app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec_())
