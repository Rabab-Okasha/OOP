cmake_minimum_required(VERSION 3.26)
project(OOPProjects)

# Add the executable for SubProject1
add_executable(Inheritace_challenge_15 main.cpp
        Account_Util.cpp
        Account.cpp
        Saving_Account.cpp
        Checking_Account.cpp
        Trust_Account.cpp)