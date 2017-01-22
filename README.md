純音(一つの正弦波だけで作られる音)を作る。  
プログラムを実行してバイナリデータを作る（この状態ではヘッダ無し）。  
`./prog_sin > prog_sin.raw`  

値の範囲は「1〜255」（`od -t u1 prog_sin.raw`で確認）  
←1Byte（unsigned char）で表現可能  

これにヘッダを付けて（`sox -r 16000 -c 1 --bits 8 -e unsigned prog_sin.raw prog_sin.wav`）  
※putcharで出力しているのでbit深度は「8」（＝1Byte）  

[sox(Sound eXchange)コマンドのオプション]
- -r : sample rate in Hx
- -c : channel
- --bits : bit-depth
- -e : encoding

aplayなどで再生すると音が出る。  
`aplay -f U8 prog_sin.wav`  
`再生中 WAVE 'prog_sin.wav' : Unsigned 8 bit, レート 16000 Hz, モノラル`  

[コード中の変数の意味]
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
  - 880Hz(ラ)

- len : 音を出す時間（sec）

  
