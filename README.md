# someip-mqtt-gateway

This project is a gateway for mqtt and someip(based commonapi)

## Dependencies

Before use this, make sure you have installed 
- [boost](https://boostorg.jfrog.io/artifactory/main/release/)
- [vsomeip](https://github.com/COVESA/vsomeip.git)
- [capicxx-core-runtime](https://github.com/COVESA/capicxx-core-runtime.git)
- [capicxx-someip-runtime](https://github.com/COVESA/capicxx-someip-runtime.git)
- [commonapi_core_generator](https://github.com/COVESA/capicxx-core-tools/releases/download/3.2.0.1/commonapi_core_generator.zip)
- [commonapi_someip_generator](https://github.com/COVESA/capicxx-someip-tools/releases/download/3.2.0.1/commonapi_someip_generator.zip)

## Code generate
Use commonapi_core_generator and commonapi_someip_generator to generate code:
```shell
${WORK_DIR}/commonapi_core_generator/commonapi-core-generator-linux-`uname -m`  -sk  ./fidl/Yours.fidl
${WORK_DIR}/commonapi_someip_generator/commonapi-someip-generator-linux-`uname -m`  -ll  verbose  ./fidl/Yours.fdepl
```
Then you will get src-gen directory

## Compile 
```shell
cmake -G Ninja -DPRJ_NAME=[your idl interface name] ..
ninja
```

## Run
```shell
export COMMONAPI_CONFIG=../commonapi4someip.ini
export LD_LIBRARY_PATH=/YOUR/LIB/PATH:$LD_LIBRARY_PATH
```

