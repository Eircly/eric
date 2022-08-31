%% 导入声音
IR= audioread('IR.wav');
talk = audioread ('talk.wav');

%% 卷积
mix(:,1) = conv(talk(:,1), IR(:,1));
mix(:,2) = conv(talk(:,2), IR(:,2));

%% 播放
sound(mix,44100);


