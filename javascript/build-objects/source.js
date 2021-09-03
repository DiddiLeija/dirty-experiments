// Build an "object" using JavaScript, and make some experiments.

// define a counter, to interact
var counter = 1;

// start to build stuff
var Main = {
  add_one: function() {
    // add one to "counter"
    counter = counter + 1;
  },
  add_count: function(amount) {
    // add a specific amount
    counter = counter + amount;
  },
  reset_count: function() {
    // reset the "counter"
    counter = 1;
  }
};

