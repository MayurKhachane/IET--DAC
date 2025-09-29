

import React from "react";

function GraduateComponent({ formData, setFormData }) {
  return (
    <div>
      <label>
        Degree:
        <input
          type="text"
          value={formData.degree || ""}
          onChange={(e) =>
            setFormData({ ...formData, degree: e.target.value })
          }
        />
      </label>
      <br />
    <br />
    <br />

      
      <label>
        Year:
        <input
          type="text"
          value={formData.year || ""}
          onChange={(e) => setFormData({ ...formData, year: e.target.value })}
        />
      </label>
      <br />
    <br />

      <label>
        Final Year Score:
        <input
          type="text"
          value={formData.score || ""}
          onChange={(e) => setFormData({ ...formData, score: e.target.value })}
        />
      </label>
      <br />
            <br />
            <br />

      <label>
        University:
        <input
          type="text"
          value={formData.univ || ""}
          onChange={(e) => setFormData({ ...formData, univ: e.target.value })}
        />
      </label>
    </div>
  );
}

export default GraduateComponent;
