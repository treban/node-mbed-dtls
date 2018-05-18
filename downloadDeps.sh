#!/bin/bash
rm mbedtls -rf
git clone https://github.com/ARMmbed/mbedtls.git mbedtls
cd mbedtls
git checkout mbedtls-2.8.0
cd ..
