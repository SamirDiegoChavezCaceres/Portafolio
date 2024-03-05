function [xEval] = interpExpEvaluar(ec, x)
    z=@(x) exp(ec(2))*exp(x*ec(1));
    xEval=z(x);