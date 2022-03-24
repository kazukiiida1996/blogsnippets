import tkinter as tk


class MyWindow(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('私のウィンドウです')
        self.geometry('400x300')

        self.label = tk.Label(self, text='こんにちは、世界！')
        self.label.pack()


my_window = MyWindow()
my_window.mainloop()
