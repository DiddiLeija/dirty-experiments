"""
Use the package 'cowsay' to wite a
congratulations message from
Tux (the Linux penguin) inside a text
file.
"""

import cowsay

text = """Hi, my dear friend!
I am Tux, the world-famous Linux penguin. I am
here to tell you that you are awesome,
believe me. Congratulations!"""

with open("cowsay_tux.txt", "w") as f:
    f.write(cowsay.get_output_string("tux", text))
    f.write("\n\n(Code written by Diego Ramirez)")

print("See the results at 'cowsay_tux.txt'")
