#!/bin/bash

groups=$(id -Gn | tr ' ' ',')

echo $groups
