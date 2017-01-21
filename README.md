純音(一つの正弦波だけで作られる音)を作る。  
ヘッダ無し。  
プログラムを実行してバイナリデータを作る。  
`./prog_sin > prog_sin.raw`

これにヘッダを付けて  
`sox -r 16000 -c 1 --bits 32 --encoding signed-integer prog_sin.raw prog_sin.wav`  
(確認中)量子化深度は処理系に依存（`sizeof(int)`が4なら32bit）、エンディアンの考慮も必要  


aplayなどで再生すると音が出る。  
`aplay prog_sin.wav `  
`再生中 WAVE 'prog_sin.wav' : Signed 32 bit Little Endian, レート 16000 Hz, モノラル`


- smp_freq : サンプリングレート(Hz)、毎秒***回サンプリング、1秒間にいくつ区切るか  
  - [DAT]              
    - 48kHz (wavesufferのデフォルト)                
    - 24kHz                
    - 16kHz                
    - 8kHz (電話)                 
  - [CD]
    - 44100Hz

- freq : 出す音の周波数
  - 440Hz(ラ)

- len : 音を出す時間（sec）

  
