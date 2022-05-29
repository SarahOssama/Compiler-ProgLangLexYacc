import sys
import os as os
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow

def run():
    pass

    
    
    

def window():
    app = QApplication(sys.argv)
    win = QMainWindow()
    win.setGeometry(20, 50, 1000, 700)
    win.setWindowTitle("GUI")
    

    b1 = QtWidgets.QPushButton(win)
    b1.setText("Run")
    b1.move(330, 500)
    b1.clicked.connect(run)

    runCommand1 = "flex lexer.l"
    os.system(runCommand1)
    runCommand2 = "bison -d parser.y"
    os.system(runCommand2)
    runCommand3 = "g++ lex.yy.c parser.tab.c"
    os.system(runCommand3)
    runCommand4 = "a.exe"
    os.system(runCommand4)
    os.system("pause")

    semanticErrors = open('Semantic Errors.txt', 'r')
    symbolTable = open('Symbol Table.txt', 'r')
    semanticErrorsString = semanticErrors.read()
    symbolTableString = symbolTable.read()

    symbolTableLabel = QtWidgets.QLabel(win)
    symbolTableLabel.setText("Symbol Table")
    symbolTableLabel.move(20, 20)

    semanticErrorsLabel = QtWidgets.QLabel(win)
    semanticErrorsLabel.setText("Semantic Errors")
    semanticErrorsLabel.move(600, 20)

    symbolTableText = QtWidgets.QLabel(win)
    symbolTableText.setText(symbolTableString)
    symbolTableText.move(20, 50)

    semanticErrorsText = QtWidgets.QLabel(win)
    semanticErrorsText.setText(semanticErrorsString)
    semanticErrorsText.move(600, 50)
    win.show()
    sys.exit(app.exec_())


window()