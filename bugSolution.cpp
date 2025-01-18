std::vector<int> vec = {1, 2, 3, 4, 5};
int size = vec.size();
for (int i = 0; i < size; ++i) {
  // Access elements within bounds only
  std::cout << vec[i] << " ";
}
std::cout << "\n";

// Alternative: using at() for bounds checking
try {
  vec.at(5) = 6; // This will throw an exception if out of bounds
} catch (const std::out_of_range& oor) {
  std::cerr << "Out of Range error: " << oor.what() << '\n';
}

// Better way to add an element to the vector
vec.push_back(6); // This adds the element to the end of the vector
for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}
std::cout << "\n";