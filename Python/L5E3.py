import datetime
today = datetime.date.today()
yesterday = today - datetime.timedelta(days=1)
tommorow = today + datetime.timedelta(days=1)
print("today:",today)
print("yesterdat:",yesterday)
print("tomorrow:",tommorow)