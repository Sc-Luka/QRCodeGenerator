# Qt QR Code Generator

This is a simple Qt-based desktop application that generates QR codes from user input text using the `libqrencode` library.

## Features

- Input any text and generate a QR code instantly
- Clear button to reset the input and QR code display
- Centered window with fixed size
- Error handling for invalid QR generation

## Screenshots

![Screenshot (82)](https://github.com/user-attachments/assets/89701b4e-6439-4157-8628-6e47f45efa4b)
![Screenshot (81)](https://github.com/user-attachments/assets/a34dd543-d4c5-4f45-bd74-34fb913a57f2)


## Requirements

- Qt 5 or Qt 6
- C++17
- `libqrencode` (must be installed on your system)

## How to Install `libqrencode` (Linux)

```bash
sudo apt update
sudo apt install libqrencode-dev
