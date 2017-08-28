# bt_trasmiter
- bt_transmitter_0 is a GFSK transmitter; it uses USRPB210 to transmit bt pkts.. 
- at the receiver side, bt pkts were received succsuffly via ubertooth one (Ubertooth-2014-02-R2_BlueEar) and gr-bluetooth..

CMDs 
------
- GNURadio (gr-bluetooth) : ./btrx --freq 2404000000  -i 2MHz_BTC_2404_3_verynice --samp-rate 2e6 -S  -t 30 >> 2MHz_BTC_2404_3_verynice_out
- Ubertooth_BlueEar (/Ubertooth-2014-02-R2_BlueEar/host/build/ubertooth-tools/src$ sudo ./ubertooth-rx_BASIC4) 

Burst tagger
------
- https://oshearesearch.com/index.php/2015/03/15/burst-transmission-in-gnu-radio-sample-streams-with-eventstream/
