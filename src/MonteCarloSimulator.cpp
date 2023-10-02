#include "MonteCarloSimulator.h"
#include <cmath>
#include <random>
#include <omp.h>

MonteCarloSimulator::MonteCarloSimulator(unsigned int num_samples)
    : num_samples_(num_samples) {}

double MonteCarloSimulator::runSimulation() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<> disR(10.0, 2.0);  // Mean = 10, Stddev = 2 for R
    std::normal_distribution<> disL(8.0, 1.5);  // Mean = 8, Stddev = 1.5 for L

    unsigned int failure_count = 0;

    #pragma omp parallel for reduction(+:failure_count)
    for (unsigned int i = 0; i < num_samples_; ++i) {
        double R = disR(gen);
        double L = disL(gen);
        if (R - L < 0) {
            failure_count++;
        }
    }

    return static_cast<double>(failure_count) / num_samples_;
}

