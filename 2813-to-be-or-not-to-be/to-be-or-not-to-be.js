/**
 * @param {string|number|any} val
 * @return {Object}
 */
var expect = function(val) {
  var toBe = function(anotherVal) {
    if (val === anotherVal) {
      return true;
    } else {
      throw new Error("Not Equal");
    }
  };

  var notToBe = function(anotherVal) {
    if (val !== anotherVal) {
      return true;
    } else {
      throw new Error("Equal");
    }
  };

  // Return an object exposing the assertion functions
  return {
    toBe: toBe,
    notToBe: notToBe
  };
};

/* Examples:
 * expect(5).toBe(5);     // true
 * expect(5).notToBe(5);  // throws "Equal"
 */
