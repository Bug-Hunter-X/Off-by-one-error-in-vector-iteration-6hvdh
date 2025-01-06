std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { // Corrected: Accessing vec[vec.size()-1] is within bounds
  std::cout << vec[i] << " ";
}
std::cout << std::endl; 
//or using iterators for better code style
for (int x : vec) {
  std::cout << x << " ";
}
std::cout << std::endl;