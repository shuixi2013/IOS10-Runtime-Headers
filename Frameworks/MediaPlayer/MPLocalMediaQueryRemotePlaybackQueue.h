//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPMediaItem, MPMediaQuery;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue
{
    MPMediaQuery *_mediaQuery;
    MPMediaItem *_firstItem;
    long long _shuffleType;
    long long _repeatType;
}

@property(readonly, nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(readonly, nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) MPMediaItem *firstItem; // @synthesize firstItem=_firstItem;
@property(readonly, nonatomic) MPMediaQuery *mediaQuery; // @synthesize mediaQuery=_mediaQuery;
- (void).cxx_destruct;
- (id)playbackItemMetadataForMediaItem:(id)arg1;
- (_Bool)verifyWithError:(id *)arg1;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

