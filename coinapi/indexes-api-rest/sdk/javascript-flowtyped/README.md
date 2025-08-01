## coin_api_indexes_rest_api@1.0.0

This generator creates Flow typed JavaScript client that utilizes [Fetch API](https://fetch.spec.whatwg.org/). The generated Node module can be used in the following environments:

Environment
* Node.js
* Webpack
* Browserify

Language level
* ES6

Module system
* ES6 module system

### Building

To build and compile the flow typed sources to javascript use:
```
npm install
# The dependency `babel-preset-react-app` requires that you specify `NODE_ENV` or `BABEL_ENV` environment variables
env BABEL_ENV={YOUR_ENV} npm run build
```

### Publishing

First build the package then run ```npm publish```

### Consuming

navigate to the folder of your consuming project and run one of the following commands.

_published:_

```
npm install coin_api_indexes_rest_api@1.0.0 --save
```

_unPublished (not recommended):_

```
npm install PATH_TO_GENERATED_PACKAGE --save
