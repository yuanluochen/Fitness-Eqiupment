# !/bin/bash
export LD_LIBRARY_PATH=LD_LIBRARY_PATH:$(pwd)/userLib/UnitreeMotorSDK_A1Go1_Sup220423/lib
cd ./build;
make -j16;
cd ..
./build/Fitness-Equipment;
