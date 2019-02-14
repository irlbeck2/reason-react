[@bs.config {jsx: 3}];

[@react.component]
let make = (~a, ~b, _) => {
    Js.log("This function should be named `Test`");
    <div />
};


module Foo = {
    [@react.component]
    [@bs.module "Foo"]
    external component: (~a:int, ~b:string, _) => React.element = "";
};

<Foo.component a=1 b="1" />;

