#ifndef NEURAL_NETWORK_HPP
#define NEURAL_NETWORK_HPP

#include <vector>
  
class NeuralNetwork
{

public:
NeuralNetwork (int numNeurons);
  
void train (const std::vector < std::vector < double >>&trainingData,
	       const std::vector < std::vector < double >>&labels);
  
std::vector < double >predict (const std::vector < double >&input);

 
private:
 
};


 
#endif
