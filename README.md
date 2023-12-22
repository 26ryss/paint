# paint発展課題
課題1-3に追加機能を実装した 

## 追加機能
以下の追加機能を実装した

### 盤面の色を変更
- 機能  
盤面の描画の色を変更し、以降の描画の色も指定の色とする
- 実行方法
```
* > chcol (option)
```
option: r 赤色、b 青色、g 緑色、y 黄色、w 白色  

### 指定範囲を消去
- 機能  
長方形の描画と同じ方法で指定した範囲を消去する
- 実行方法
```
* > erase x0 y0 width height
```

### 図形を塗りつぶす
- 機能  
直前に描画された長方形か円を塗りつぶす  
- 実行方法  
```
* > fill
```
- 備考  
直前のコマンドが長方形か円の描画でなければエラーが発生する