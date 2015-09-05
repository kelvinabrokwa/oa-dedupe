#!/usr/bin/env bash

set -e -o pipefail

curl 'http://data.openaddresses.io/openaddresses-complete.zip'

unzip openaddresses-complete.zip
