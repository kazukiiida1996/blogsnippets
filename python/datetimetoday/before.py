from datetime import datetime, timedelta


today = datetime.today()
dt = today - timedelta(hours=1)

print(dt)
# 2021-04-21 21:22:14.545597