//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue
{
    long long _stationID;
    NSString *_stationStringID;
}

@property(readonly, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(readonly, nonatomic) long long stationID; // @synthesize stationID=_stationID;
- (void).cxx_destruct;
- (_Bool)verifyWithError:(id *)arg1;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

