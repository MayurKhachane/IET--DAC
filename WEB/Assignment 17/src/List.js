import React, { useState } from "react";

export default function List() {
  const [inputValue, setInputValue] = useState("");
  const [list, setList] = useState([]);

  function handleBlur() {
    if (inputValue.trim() !== "") {
      setList([...list, inputValue.trim()]);
      setInputValue("");
    }
  }

  return (
    <div>
      <input
        type="text"
        value={inputValue}
        placeholder="Enter data"
        onChange={(e) => setInputValue(e.target.value)}
        onBlur={handleBlur}
      />
      <h3>Entered Data</h3>
      <ol>
        {list.map((item, index) => (
          <li key={index}>{item}</li>
        ))}
      </ol>
    </div>
  );
}
