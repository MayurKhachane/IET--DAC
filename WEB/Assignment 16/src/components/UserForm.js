import React, { useState } from "react";
import GraduateComponent from "./GraduateComponent";
import PGComponent from "./PGComponent";
import UnderGradComponent from "./UnderGradComponent";

function UserForm() {
  const [userDetails, setUserDetails] = useState({
    name: "",
    email: "",
    type: "",
  });

  const [formData, setFormData] = useState({});

  return (
    <div style={{ padding: "20px" }}>
      <h2>User Details Form</h2>
      <label>
        Name:
        <input
          type="text"
          value={userDetails.name}
          onChange={(e) =>
            setUserDetails({ ...userDetails, name: e.target.value })
          }
        />
      </label>
      <br />
      <br />
      <label>
        Email:
        <input
          type="email"
          value={userDetails.email}
          onChange={(e) =>
            setUserDetails({ ...userDetails, email: e.target.value })
          }
        />
      </label>
      <br />
      <br />
      <label>
        Qualification:
        <select
          value={userDetails.type}
          onChange={(e) =>
            setUserDetails({ ...userDetails, type: e.target.value })
          }
        >
          <option value="">Select</option>
          <option value="Graduate">Graduate</option>
          <option value="PG">PG</option>
          <option value="UnderGrad">UnderGrad</option>
        </select>
      </label>

      <div style={{ marginTop: "20px" }}>
        {userDetails.type === "Graduate" && (
          <GraduateComponent formData={formData} setFormData={setFormData} />
        )}
        {userDetails.type === "PG" && (
          <PGComponent formData={formData} setFormData={setFormData} />
        )}
        {userDetails.type === "UnderGrad" && (
          <UnderGradComponent formData={formData} setFormData={setFormData} />
        )}
      </div>

      <br />
      <br />
      <button
        onClick={() => {
          console.log("User:", userDetails);
          console.log("Form Data:", formData);
          alert("Form submitted  .");
        }}
      >
        Submit
      </button>
    </div>
  );
}

export default UserForm;
