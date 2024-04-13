from rembg import remove
from PIL import Image
input_path = '/Users/abinmjoseph/Pictures/Balloon.jpg'
output_path = ' out.png'
input = Image.open(input_path)
output = remove(input)
output.save(output_path)