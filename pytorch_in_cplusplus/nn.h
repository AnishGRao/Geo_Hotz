#include <bits/stdc++.h>

// does not implement !reduce
double nn_NLLLoss(std::vector<std::valarray<double>> logs, std::valarray<uint32_t> targets, bool reduce = true)
{
    // log loss
    double ll = 0;
    for (int i = 0; i < targets.size(); i++)
        ll += logs[i][targets[i]];
    return -ll / (double)logs.size();
}

double optim_SGD() {}