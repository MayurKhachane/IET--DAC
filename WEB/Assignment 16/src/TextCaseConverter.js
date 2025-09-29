import React, { Component } from 'react';

class TextCaseConverter extends Component {
  constructor(props) {
    super(props);
    this.state = {
      inputText: '',
      caseType: ''  
    };
    console.log('Constructor: component is created');
  }

  componentDidMount() {
    console.log('componentDidMount: component added to DOM');
  }

  componentDidUpdate(prevProps, prevState) {
    console.log('componentDidUpdate: component updated');
    if (
      prevState.inputText !== this.state.inputText ||
      prevState.caseType !== this.state.caseType
    ) {
      console.log('Input text or case type changed');
    }
  }

  componentWillUnmount() {
    console.log('componentWillUnmount: component removed from DOM');
  }

  handleInputChange = (event) => {
    this.setState({ inputText: event.target.value });
  };

  handleCaseChange = (event) => {
    this.setState({ caseType: event.target.value });
  };

  convertText = () => {
    const { inputText, caseType } = this.state;
    if (!inputText) return '';

    switch (caseType) {
      case 'upper':
        return inputText.toUpperCase();
      case 'lower':
        return inputText.toLowerCase();
      case 'title':
        return inputText.toLowerCase()
          .split(' ')
          .map(word => word.charAt(0).toUpperCase() + word.slice(1))
          .join(' ');
      default:
        return inputText;
    }
  };

  render() {
    return (
      <div>
        <input
          type="text"
          placeholder="Enter text here"
          value={this.state.inputText}
          onChange={this.handleInputChange}
        />
        <div>
          <label>
            <input
              type="radio"
              value="upper"
              checked={this.state.caseType === 'upper'}
              onChange={this.handleCaseChange}
            />
            Uppercase
          </label>
          <label>
            <input
              type="radio"
              value="lower"
              checked={this.state.caseType === 'lower'}
              onChange={this.handleCaseChange}
            />
            Lowercase
          </label>
          <label>
            <input
              type="radio"
              value="title"
              checked={this.state.caseType === 'title'}
              onChange={this.handleCaseChange}
            />
            Title Case
          </label>
        </div>
        <h3>Output:</h3>
        <p>{this.convertText()}</p>
      </div>
    );
  }
}

export default TextCaseConverter;
