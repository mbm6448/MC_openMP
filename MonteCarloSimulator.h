#ifndef MONTE_CARLO_SIMULATOR_H
#define MONTE_CARLO_SIMULATOR_H

class MonteCarloSimulator {
private:
    unsigned int num_samples_;

public:
    MonteCarloSimulator(unsigned int num_samples);
    double runSimulation();
};

#endif
