from twilio.rest import TwilioRestClient
 
# Your Account Sid and Auth Token from twilio.com/user/account
account_sid = "AC5ec24a68887ecb575214b22e27c9941b"
auth_token  = "f89d01034bf8be5b8f8881b839d684d3"
client = TwilioRestClient(account_sid, auth_token)
 
message = client.messages.create(body="Hi",
    to="+17347767695",    # Replace with your phone number
    from_="+17343451174") # Replace with your Twilio number
print message.sid