//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, CADisplayLink, CKMediaObject, NSString;
@protocol CKAudioPlayerDelegate;

@interface CKAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    CKMediaObject *_mediaObject;
    id <CKAudioPlayerDelegate> _delegate;
    AVAudioPlayer *_audioPlayer;
    CADisplayLink *_displayLink;
    double _prevCurrentTime;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double prevCurrentTime; // @synthesize prevCurrentTime=_prevCurrentTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <CKAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (void)displayLinkFired:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
@property(nonatomic) float volume;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)prepareToPlay;
- (void)pause;
- (void)stop;
- (void)playAfterDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

