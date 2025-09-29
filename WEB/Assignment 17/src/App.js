import logo from './logo.svg';
import './App.css';
import LifecycleDemo from "./LifecycleDemo";
import Counte from './Counter2';
import Counts from './Counter3';
import List from './List';

function App() {
  return (
    <div className="App">
      <LifecycleDemo />
      <hr/>
      <Counte/>
      <hr/>
      <Counts/>
      <hr/>
      <List/>
     
    </div>
  );
}

export default App;
