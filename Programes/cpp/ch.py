import nltk
from nltk.chat.util import Chat, reflections

# Pairs of patterns and responses
pairs = [
    (r"hi|hello|hey", ["Hello!", "Hi there!", "Hey!"]),
    (r"how are you", ["I'm good, thank you! How can I help you?"]),
    (r"what is your name", ["I am Chatbot. What's yours?"]),
    (r"sex|muje sex karna hai|mai chodna chata hu|please|mera lund|hila do", ["call Daksh", "Please call Daksh he can masturbate you","yeh sabhi kaam Daksh Btech wala kr skta hai","Daksh ki gand ik dam tight hai usee mna lo"]),
    (r"bye", ["Goodbye!", "See you later!"]),
]

# Create chatbot
chatbot = Chat(pairs, reflections)

# Start conversation
print("Chatbot: Hello! Type 'bye' to exit.")
chatbot.converse()
