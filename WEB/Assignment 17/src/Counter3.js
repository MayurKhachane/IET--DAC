import React, { useState, useEffect } from "react";

export default function Counts() {
  const [count, setCount] = useState(0);
  const [history, setHistory] = useState([]);

  useEffect(() => {
    if (count === 0) return; // Skip initial render if count = 0
    setHistory((prevHistory) => [...prevHistory, count]);
  }, [count]);

  function incrementHandler() {
    setCount(count + 1);
  }

  return (
    <>
      <h2>Counter Application</h2>
      <p>Count: {count}</p>
      <button onClick={incrementHandler}>Increment</button>

      <h3>Counter Value History</h3>
      <table border="1" cellPadding="5">
        <thead>
          <tr>
            <th>Index</th>
            <th>Count Value</th>
          </tr>
        </thead>
        <tbody>
          {history.map((value, index) => (
            <tr key={index}>
              <td>{index + 1}</td>
              <td>{value}</td>
            </tr>
          ))}
        </tbody>
      </table>
    </>
  );
}
