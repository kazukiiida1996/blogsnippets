import tkinter as tk


class MyWindow(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('私のウィンドウです')
        self.geometry('400x300')


my_window = MyWindow()
my_window.mainloop()
