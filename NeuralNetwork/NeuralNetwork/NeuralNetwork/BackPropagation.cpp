//
//  BackPropagation.cpp
//  NeuralNetwork
//
//  Created by 박재성 on 2016. 9. 20..
//  Copyright © 2016년 박재성. All rights reserved.
//

#include "BackPropagation.hpp"
#include <iostream>

#define MAX2(a,b) (a) > (b) ? (a) : (b)

class Neuron{
public:
    Neuron() : w_(2.0), b_(1.0){};
    Neuron(const double& w_input, const double& b_input) : w_(w_input), b_(b_input){};
    
public: //Attributes
    //단일 입력으로 가정
    double w_; //weight of one input
    double b_; //bias
    
    double input_, output_; // saved for back-propagation
    
    double feedForward(const double& _input){
        
        input_ = _input;
        // output y = f(/sigma)
        // /sigma = w_ * input + b_
        // for multiple inputs, /simga = w0 _ * x0_ + w1_ * x1_ ... + b
        
        const double sigma = w_ * input_ + b_;
        output_ = getActivation(sigma);
        
        return output_;
    }
    
    double getActivation(const double& x){
        //for linear or identity activation function
        //return x;
        
        //for ReLU activiation functions
        // return max value between 0.0 & x
        return MAX2(0.0, x);
    }
    
    double getActivationGradient(const double& x){
        
        //for linear and identity function
        return 1.0;
        
        //for ReLU
        /*
         if(x > 0.0)
         return 1.0;
         else
         return 0.0;
         */
    }
    
    void propBackWard(const double& target){
        
        const double alpha = 0.1; //learning rate
        
        const double gradient = (output_ - target) * getActivationGradient(output_);
        
        w_ = w_ - alpha * gradient * input_; //last input) came from d(wx+b)/dw = x
        b_ = b_ - alpha * gradient * 1.0; //last 1.0 came from d(wx+b)/db = 1.0
        
    }
};

int main(int argc, const char * argv[]) {
    
    Neuron my_neuron;
    my_neuron.w_ = 2.0;
    my_neuron.b_ = 1.0;
    
    for (int i= 1; i<=100; i++) {
        std::cout<<"Training : "<<i <<std::endl;
        
        std::cout<<"Before Back-Propagation " << my_neuron.feedForward(1.0)<<std::endl;
        
        std::cout<<"Execute Back-Propagation"<<std::endl;
        my_neuron.propBackWard(4.0);
    
        std::cout<<"After Back-Propagation FeeForward " << my_neuron.feedForward(1.0)<<std::endl;
        std::cout<<"w_ : " <<my_neuron.w_ << " b_ : "<< my_neuron.b_ <<std::endl;
    }
    return 0;
}

