純音(一つの正弦波だけで作られる音)を作る。  
ヘッダ無し。  
プログラムを実行してバイナリデータを作る。  
`./prog_sin > prog_sin.raw`

これにヘッダを付けて  
`sox -r 16000 -c 1 --bits 8 -e signed prog_sin.raw prog_sin.wav`  
※putcharで出力しているのでbit深度は「1」（値の範囲は127〜-128）←limit.hの`CHAR_MAX``CHAR_MIN`から確認  


aplayなどで再生すると音が出る。  
`aplay -f S8 prog_sin.wav`  
`警告: フォーマットは U8 に変更されます`
`再生中 WAVE 'prog_sin.wav' : Unsigned 8 bit, レート 16000 Hz, モノラル`  
(確認中)符号有りで作っているが、符号無しで認識される。。。符号無しでデータを作るべきなのか？？  

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

  
