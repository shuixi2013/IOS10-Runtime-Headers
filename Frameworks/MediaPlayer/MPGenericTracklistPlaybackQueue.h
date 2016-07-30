//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSArray;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue
{
    NSArray *_trackIdentifiers;
    long long _shuffleType;
}

@property(readonly, nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) NSArray *trackIdentifiers; // @synthesize trackIdentifiers=_trackIdentifiers;
- (void).cxx_destruct;
- (_Bool)verifyWithError:(id *)arg1;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

