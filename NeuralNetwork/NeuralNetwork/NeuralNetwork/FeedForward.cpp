//
//  main.cpp
//  NeuralNetwork
//
//  Created by 박재성 on 2016. 9. 20..
//  Copyright © 2016년 박재성. All rights reserved.
//

#include <iostream>

#define MAX2(a,b) (a) > (b) ? (a) : (b)

class Neuron{
public:
    //단일 입력으로 가정
    double w_; //weight of one input
    double b_; //bias
    
    double getActivation(const double& x){
        //for linear or identity activation function
        //return x;
        
        //for ReLU activiation functions
        // return max value between 0.0 & x
        return MAX2(0.0, x);
    }
    
    double feedForward(const double& input){
        // output y = f(/sigma)
        // /sigma = w_ * input + b_
        // for multiple inputs, /simga = w0 _ * x0_ + w1_ * x1_ ... + b
        
        const double sigma = w_ * input + b_;
        
        return getActivation(sigma);
    }
};
/*
int main(int argc, const char * argv[]) {
    
    Neuron my_neuron;
    my_neuron.w_ = 2.0;
    my_neuron.b_ = 1.0;
    
    std::cout << "Input = 1.0" << my_neuron.feedForward(1.0)<<std::endl;
    std::cout << "Input = 2.0" << my_neuron.feedForward(2.0)<<std::endl;
    std::cout << "Input = 3.0" << my_neuron.feedForward(3.0)<<std::endl;
    
    return 0;
}
*/