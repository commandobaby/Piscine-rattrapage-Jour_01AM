#!/bin/bash
grep "ept" $1 | cut -d: -f1,4 |grep 32 | sed -e "s/:3/;epitech_/g" > epi_csv.csv

