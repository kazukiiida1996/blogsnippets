import tkinter as tk


class MyWindow(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('私のウィンドウです')


my_window = MyWindow()
my_window.mainloop()
