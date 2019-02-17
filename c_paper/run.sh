#!/bin/sh

make && ./paper
echo "TECHIO> open -s /project/target/ output.html"

php test.php