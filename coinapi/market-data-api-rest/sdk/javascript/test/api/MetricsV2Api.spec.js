/**
 * CoinAPI Market Data REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.CoinApiMarketDataRestApi);
  }
}(this, function(expect, CoinApiMarketDataRestApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new CoinApiMarketDataRestApi.MetricsV2Api();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('MetricsV2Api', function() {
    describe('v2MetricsAssetHistoryGet', function() {
      it('should call v2MetricsAssetHistoryGet successfully', function(done) {
        //uncomment below and update the code to test v2MetricsAssetHistoryGet
        //instance.v2MetricsAssetHistoryGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v2MetricsAssetListingGet', function() {
      it('should call v2MetricsAssetListingGet successfully', function(done) {
        //uncomment below and update the code to test v2MetricsAssetListingGet
        //instance.v2MetricsAssetListingGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v2MetricsChainHistoryGet', function() {
      it('should call v2MetricsChainHistoryGet successfully', function(done) {
        //uncomment below and update the code to test v2MetricsChainHistoryGet
        //instance.v2MetricsChainHistoryGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v2MetricsChainListingGet', function() {
      it('should call v2MetricsChainListingGet successfully', function(done) {
        //uncomment below and update the code to test v2MetricsChainListingGet
        //instance.v2MetricsChainListingGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v2MetricsExchangeHistoryGet', function() {
      it('should call v2MetricsExchangeHistoryGet successfully', function(done) {
        //uncomment below and update the code to test v2MetricsExchangeHistoryGet
        //instance.v2MetricsExchangeHistoryGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v2MetricsExchangeListingGet', function() {
      it('should call v2MetricsExchangeListingGet successfully', function(done) {
        //uncomment below and update the code to test v2MetricsExchangeListingGet
        //instance.v2MetricsExchangeListingGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('v2MetricsListingGet', function() {
      it('should call v2MetricsListingGet successfully', function(done) {
        //uncomment below and update the code to test v2MetricsListingGet
        //instance.v2MetricsListingGet(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
