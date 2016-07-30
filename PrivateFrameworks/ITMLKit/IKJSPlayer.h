//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSPlayer-Protocol.h>

@class IKAppPlayerBridge, IKDOMDocument, IKJSMediaItem, IKJSPlaylist, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer>
{
    IKJSPlaylist *_playlist;
    long long _playerState;
    _Bool _holdingSelfReference;
    NSMutableDictionary *_observedMetadataKeys;
    NSMutableDictionary *_timeListeners;
    NSMutableDictionary *_boundaryListeners;
    IKAppPlayerBridge *_bridge;
}

@property(readonly, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)_removeManagedReference;
- (void)_addManagedReference;
- (void)transportBarVisibilityDidChange:(_Bool)arg1;
- (_Bool)shouldChangeToMediaAtIndex:(unsigned long long)arg1;
- (void)playbackDidStall:(double)arg1;
- (void)playbackError:(id)arg1 shouldStopDueToError:(_Bool)arg2;
- (void)timeBoundaryDidCross:(double)arg1;
- (void)timeIntervalElapsed:(double)arg1 time:(double)arg2;
- (void)currentMediaItemDurationDidChange:(double)arg1;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;
- (_Bool)requestSeekToTime:(double *)arg1 currentTime:(double)arg2;
- (_Bool)shouldHandleStateEvent:(id)arg1;
- (void)stateWillChange:(id)arg1;
- (void)stateDidChange:(id)arg1;
- (void)removeEventListener:(id)arg1:(id)arg2;
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;
@property(readonly, nonatomic) NSString *playbackState;
@property(nonatomic) double playbackRate;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)play;
- (void)present;
- (long long)state;
@property(readonly, nonatomic) IKJSMediaItem *previousMediaItem;
@property(readonly, nonatomic) IKJSMediaItem *nextMediaItem;
@property(readonly, nonatomic) IKJSMediaItem *currentMediaItem;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property(readonly, nonatomic) NSDate *currentMediaItemDate;
- (void)seekToTime:(double)arg1;
@property(retain, nonatomic) IKJSPlaylist *playlist;
@property(retain, nonatomic) IKDOMDocument *modalOverlayDocument;
@property(nonatomic) _Bool modalOverlayDismissable;
@property(retain, nonatomic) IKDOMDocument *overlayDocument;
- (void)mediaItemDidChange:(long long)arg1;
- (void)mediaItemWillChange:(long long)arg1;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 bridge:(id)arg2;
- (id)init;

@end

