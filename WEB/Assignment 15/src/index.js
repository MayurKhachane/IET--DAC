import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import Factorial from './Factorial';
import Custom from './custom';
import Calulator from './Calculation';
import MyFunction from './MyFunction';
import TextCaseConverter from './componet';


import { Function2, Function3 } from './MyFunction';
import reportWebVitals from './reportWebVitals';

const root = ReactDOM.createRoot
  (document.getElementById('root'));

root.render(
   <React.StrictMode>

    <Factorial number={5}/>
    <Calulator num1 = {10} num2 = {20}/>
    <TextCaseConverter/>


  </React.StrictMode>

)