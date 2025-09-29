import React, { useState } from "react";

export default function Counte() {
  const [count, setCount] = useState(0);

  // Function called on button click to increment count
  function incrementHandler() {
    setCount(count + 1);
  }

  return (
    <div>
      <h2>Counter Application</h2>
      <p>Count: {count}</p>
      <button onClick={incrementHandler}>Increment</button>
    </div>
  );
}

