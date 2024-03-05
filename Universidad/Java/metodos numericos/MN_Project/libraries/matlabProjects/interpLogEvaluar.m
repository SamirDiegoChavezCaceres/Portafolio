function [xEval] = interpLogEvaluar(ec, x)
    z=@(x) ec(1)*log(x) + ec(2);
    xEval=z(x);