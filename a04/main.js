const i = parseInt(require("fs").readFileSync("/dev/stdin", "utf8").trim()).toString(2).padStart(10, "0");
console.log(i);
