*in switch statement we can use integer as well as char too value as 'case'* 
case label should be ended with break or return 
-> if for any reason we do not want to use break or return and execute the following all labels
*we have to make use of ([[fallthrough]]) introduced in c++17,this way*
compiler would not send any kind of errors/warnings
