import React from "react";

function UnderGradComponent({ formData, setFormData }) {
  return (
    <div>
      <label>
        SSC:
        <input
          type="text"
          value={formData.ssc || ""}
          onChange={(e) => setFormData({ ...formData, ssc: e.target.value })}
        />
      </label>
      <br />
      <label>
        HSC:
        <input
          type="text"
          value={formData.hsc || ""}
          onChange={(e) => setFormData({ ...formData, hsc: e.target.value })}
        />
      </label>
    </div>
  );
}

export default UnderGradComponent;
