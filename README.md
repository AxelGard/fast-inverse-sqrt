# fast-inverse-sqrt
Fast Inverse Square Root — A Quake III Algorithm in WASM 

how ever this seems slower


**from index.js**
```js 
function fastInverseSqrt(number) {
    setTimeout(() => {
      console.log(wasmExports.Q_rsqrt(number));
    }, 3000);
}

```
would love a pull request for some improments.

## Special thanks to 

Nemean - 
[Fast Inverse Square Root — A Quake III Algorithm](https://www.youtube.com/watch?v=p8u_k2LIZyo)


Code First - [Compile C Language Into WebAssembly](https://www.youtube.com/watch?v=_pHgILVlx3c)