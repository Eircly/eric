%% ��������
IR= audioread('IR.wav');
talk = audioread ('talk.wav');

%% ���
mix(:,1) = conv(talk(:,1), IR(:,1));
mix(:,2) = conv(talk(:,2), IR(:,2));

%% ����
sound(mix,44100);


