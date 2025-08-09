from twilio.rest import Client

# Twilio credentials
account_sid = "AC4497f8bb08a3fe3cb3ca5b8e1e4c76c2"
auth_token = "9d3ec980678148ac8cd922a023ecb33a"
client = Client(account_sid, auth_token)

# Send a WhatsApp message
message = client.messages.create(
    from_="whatsapp:+14155238886",  # Twilio's WhatsApp sandbox number
    to="whatsapp:+919815825437",  # Replace with the recipient's number
    body="Hello from Python via WhatsApp!"
)

print(f"Message sent with SID: {message.sid}")
