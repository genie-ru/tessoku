const main = (): void => {
    const input = parseInt(require('fs').readFileSync('/dev/stdin', 'utf8').trim(), 10);
    const area = input * input;
    console.log(area);
  };
  
  main();
  