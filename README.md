# C++ Vector Out-of-Bounds Access Bug
This repository demonstrates a common C++ error: accessing elements outside the bounds of a `std::vector`.  Out-of-bounds access leads to undefined behavior, which can manifest in various ways, including crashes, subtle data corruption, or seemingly unpredictable results.

The `bug.cpp` file contains code that exhibits this error. The `bugSolution.cpp` file demonstrates the correct way to handle vector access, preventing out-of-bounds issues.

This example highlights the importance of careful array and vector indexing in C++ to ensure program stability and correctness.