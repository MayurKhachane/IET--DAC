import React, { useState, useEffect } from "react";

export default function LifecycleDemo() {
  const [count, setCount] = useState(0);

 
  useEffect(() => {
    console.log("Component mounted useEffect with empty dependency array");

    return () => {
      console.log("Component unmounted cleanup in useEffect");
    };
  }, []);


  useEffect(() => {
    if (count === 0) return; 
    console.log(`Component updated, count changed to ${count}`);
  }, [count]);

  function incrementHandler() {
    setCount(count + 1);
  }

  return (
    <>
      <h2>React Functional Component Lifecycle Demo</h2>
      <p>Count: {count}</p>
      <button onClick={incrementHandler}>Increment Count</button>
    </>
  );
}
