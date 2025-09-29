import React, { useState } from "react";

export default function Calulator({ num1, num2, operation }) {
  const [n1, setN1] = useState(parseFloat(num1) || 0);
  const [n2, setN2] = useState(parseFloat(num2) || 0);
  const [op, setOp] = useState(operation || "all");

  function calculateSingleOperation() {
    switch (op) {
      case "add":
        return n1 + n2;
      case "sub":
        return n1 - n2;
      case "mul":
        return n1 * n2;
      case "div":
        return n2 !== 0 ? (n1 / n2).toFixed(2) : "Cannot divide by zero";
      default:
        return "";
    }
  }

  return (
    <div>
      <h2>Calculator</h2>
      <input type="number" value={n1} onChange={e => setN1(parseFloat(e.target.value) || 0)} />
      <input type="number" value={n2} onChange={e => setN2(parseFloat(e.target.value) || 0)} />
      <select value={op} onChange={e => setOp(e.target.value)}>
        <option value="all">All Operations</option>
        <option value="add">Addition</option>
        <option value="sub">Subtraction</option>
        <option value="mul">Multiplication</option>
        <option value="div">Division</option>
      </select>

      {op === "all" ? (
        <div>
          <p>Addition: {n1 + n2}</p>
          <p>Subtraction: {n1 - n2}</p>
          <p>Multiplication: {n1 * n2}</p>
          <p>Division: {n2 !== 0 ? (n1 / n2).toFixed(2) : "Cannot divide by zero"}</p>
        </div>
      ) : (
        <p>Result: {calculateSingleOperation()}</p>
      )}
    </div>
  );
}
