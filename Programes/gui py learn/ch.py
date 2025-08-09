import sys
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QTableWidget, QTableWidgetItem

class DictViewer(QWidget):
    def __init__(self, data_dict):
        super().__init__()
        self.setWindowTitle("Dictionary Viewer")
        self.setGeometry(100, 100, 400, 300)

        layout = QVBoxLayout()

        # Create TableWidget
        self.table = QTableWidget()
        self.table.setRowCount(len(data_dict))
        self.table.setColumnCount(2)  # Key-Value pair

        # Set headers
        self.table.setHorizontalHeaderLabels(["Key", "Value"])

        # Populate table
        for row, (key, value) in enumerate(data_dict.items()):
            self.table.setItem(row, 0, QTableWidgetItem(str(key)))
            self.table.setItem(row, 1, QTableWidgetItem(str(value)))

        layout.addWidget(self.table)
        self.setLayout(layout)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    
    # Sample Dictionary
    sample_dict = {
        "Name": "Sukhnam",
        "Age": 21,
        "Course": "BCA AI & DS",
        "Location": "Moga"
    }

    viewer = DictViewer(sample_dict)
    viewer.show()
    
    sys.exit(app.exec_())
