import React, { Component } from 'react';

class TextCaseConverter extends Component {
  constructor(props) {
    super(props);
    this.state = {
      inputText: ''
    };
  }

  handleChange = (event) => {
    this.setState({ inputText: event.target.value });
  };

  convertToUpperCase = () => {
    this.setState({inputText:this.state.inputText.toUpperCase()});
  };

  convertToLowerCase = () => {
    this.setState({inputText:this.state.inputText.toLowerCase()});
  };

  render() {
    return (
      <div>
        <input 
          type="text"
          value={this.state.inputText}
          onChange={this.handleChange}
          placeholder="Enter text here"
        />
        <button onClick={this.convertToUpperCase}>Upper Case</button>
        <button onClick={this.convertToLowerCase}>Lower Case</button>
      </div>
    );
  }
}

export default TextCaseConverter;
