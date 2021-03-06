//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer;

@interface MCChatAudioPlayer : NSObject
{
    _Bool _isPause;
    AVAudioPlayer *_audioPlayer;
}

+ (id)sharedAudioPlayer;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;
- (_Bool)isPlaying;
- (void)pause;
- (void)stop;
- (_Bool)play;
- (_Bool)playWithData:(id)arg1 delegate:(id)arg2;

@end

