import React from "react";

function PGComponent({ formData, setFormData }) {
  return (
    <div>
      <label>
        Year:
        <input
          type="text"
          value={formData.year || ""}
          onChange={(e) => setFormData({ ...formData, year: e.target.value })}
        />
      </label>
      <br />
      <label>
        Thesis Subject:
        <input
          type="text"
          value={formData.thesis || ""}
          onChange={(e) =>
            setFormData({ ...formData, thesis: e.target.value })
          }
        />
      </label>
    </div>
  );
}

export default PGComponent;
