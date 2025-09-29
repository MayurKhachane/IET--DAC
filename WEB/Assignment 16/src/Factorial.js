import React, { useState } from "react";

export default function Factorial({ number }) {
  const [num, setNum] = useState(number || 0);
  const [fact, setFact] = useState(calculateFactorial(num));

  function calculateFactorial(n) {
    if (n < 0) return "Invalid input";
    if (n === 0) return 1;
    let res = 1;
    for (let i = 1; i <= n; i++) res *= i;
    return res;
  }

  function onChangeHandler(e) {
    const val = parseInt(e.target.value);
    if (!isNaN(val) && val >= 0) {
      setNum(val);
      setFact(calculateFactorial(val));
    } else {
      setFact("Invalid input");
    }
  }

  return (
    <div>
      <h2>Factorial Calculator</h2>
      <input type="number" value={num} onChange={onChangeHandler} min="0" />
      <p>Factorial of {num} is: {fact}</p>
    </div>
  );
}
