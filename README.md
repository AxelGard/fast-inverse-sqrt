# fast-inverse-sqrt
Fast Inverse Square Root — A Quake III Algorithm in WASM 

**wasmExports exist in index.js**
```js 
function fastInverseSqrt(number) {
    setTimeout(() => {
      console.log(wasmExports.Q_rsqrt(number));
    }, 3000);
}

```

would love a pull request for some improments.

However it seems slower then in raw js. 

```js
function inverseSqrt(number) { // in index.js
    return 1/(number**(1/2));
}
```

## Special thanks to 

Nemean - 
[Fast Inverse Square Root — A Quake III Algorithm](https://www.youtube.com/watch?v=p8u_k2LIZyo)


Code First - [Compile C Language Into WebAssembly](https://www.youtube.com/watch?v=_pHgILVlx3c)