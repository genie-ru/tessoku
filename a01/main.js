'use strict';

const main = input => {
  const n = parseInt(input.trim(), 10);
  const area = n * n;
  console.log(area);
};

main(require('fs').readFileSync('/dev/stdin', 'utf8'));
