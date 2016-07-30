//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVController, MPMediaItemCollection, MPMediaPlaylist, MusicLocalPlaybackEventDataSource, NSOperationQueue;

@interface MusicPlaybackObserver : NSObject
{
    NSOperationQueue *_addOperationQueue;
    MusicLocalPlaybackEventDataSource *_localPlaybackEventDataSource;
    MPMediaPlaylist *_lastIncrementedPlaylist;
    MPMediaItemCollection *_lastIncrementedAlbum;
    MPAVController *_player;
}

+ (id)playbackObserverForPlayer:(id)arg1;
@property(readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_itemArtworkDidChangeNotification:(id)arg1;
- (void)_currentItemDidChange:(id)arg1;
- (void)_currentItemWillChange:(id)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
@property(readonly, nonatomic) MusicLocalPlaybackEventDataSource *localPlaybackEventDataSource;
- (void)setPlayer:(id)arg1;
- (void)dealloc;
- (id)_initWithPlayer:(id)arg1;
- (id)init;

@end

