import pyedflib
import numpy as np

edf = pyedflib.EdfReader("file.edf") # Change file names
signal = edf.readSignal(0)  # EEG channel 0
edf._close()

# Normalize and downsample
signal = signal - np.min(signal)
signal = (signal / np.max(signal) * 255).astype(np.uint8)
signal = signal[::int(len(signal) / 1000)]  # ~1000 samples

with open("eeg_data.h", "w") as f:
    f.write("const uint8_t eeg_data[] = {\n")
    for i, val in enumerate(signal):
        f.write(f"{val}, ")
        if i % 16 == 15:
            f.write("\n")
    f.write("};\n")
    f.write(f"const int eeg_length = {len(signal)};\n")
