import * as fs from 'fs';

const input: number = parseInt(fs.readFileSync('/dev/stdin', 'utf-8').trim(), 10);
const binaryString: string = input.toString(2).padStart(10, '0');
console.log(binaryString);
