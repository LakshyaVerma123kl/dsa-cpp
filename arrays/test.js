// src/utils/mathUtils.js

/**
 * Utility functions for mathematical operations
 */

/**
 * Adds two numbers
 * @param {number} a - First number
 * @param {number} b - Second number
 * @returns {number} Sum of a and b
 */
export function add(a, b) {
  if (typeof a !== "number" || typeof b !== "number") {
    throw new Error("Inputs must be numbers");
  }
  return a + b;
}

/**
 * Multiplies an array of numbers
 * @param {number[]} numbers - Array of numbers to multiply
 * @returns {number} Product of all numbers
 */
export function multiply(numbers) {
  if (!Array.isArray(numbers) || numbers.length === 0) {
    throw new Error("Input must be a non-empty array of numbers");
  }
  return numbers.reduce((product, num) => {
    if (typeof num !== "number") {
      throw new Error("All elements must be numbers");
    }
    return product * num;
  }, 1);
}

/**
 * Calculates the factorial of a number
 * @param {number} n - Non-negative integer
 * @returns {number} Factorial of n
 */
export function factorial(n) {
  if (!Number.isInteger(n) || n < 0) {
    throw new Error("Input must be a non-negative integer");
  }
  if (n === 0 || n === 1) return 1;
  return n * factorial(n - 1);
}

/**
 * Checks if a number is prime
 * @param {number} n - Integer to check
 * @returns {boolean} True if n is prime, false otherwise
 */
export function isPrime(n) {
  if (!Number.isInteger(n) || n <= 1) return false;
  if (n === 2) return true;
  if (n % 2 === 0) return false;
  for (let i = 3; i <= Math.sqrt(n); i += 2) {
    if (n % i === 0) return false;
  }
  return true;
}

export default { add, multiply, factorial, isPrime };
