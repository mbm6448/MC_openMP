#include <iostream>
#include "MonteCarloSimulator.h"

int main() {
    unsigned int num_samples = 1000000;  // for instance
    MonteCarloSimulator simulator(num_samples);
    double failure_probability = simulator.runSimulation();
    std::cout << "Failure probability: " << failure_probability << std::endl;
    return 0;
}

