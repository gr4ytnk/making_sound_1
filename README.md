sin波で音を作る。  
ヘッダ無し。  
プログラムを実行してバイナリデータを作る。  
`./prog_sin > prog_sin.raw`

これにヘッダを付けてaplayなどで再生すると音が出る。  

- smp_freq : サンプリングレート(Hz)  
             毎秒***回サンプリング              
             1秒間にいくつ区切るか                
  - [DAT]              
    - 48kHz (wavesufferのデフォルト)                
    - 24kHz                
    - 16kHz                
    - 8kHz 電話                 
  - [CD]              
    - 44100Hz                

- freq : 出す音の周波数
  - 440Hz(ラ)

- len : 音を出す時間（sec）              
