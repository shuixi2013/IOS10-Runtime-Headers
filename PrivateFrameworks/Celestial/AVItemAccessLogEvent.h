//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Celestial/NSCopying-Protocol.h>

@class AVItemAccessLogEventInternal, NSDate, NSString;

@interface AVItemAccessLogEvent : NSObject <NSCopying>
{
    AVItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly, nonatomic) long long numberOfDroppedVideoFrames;
- (double)averageAudioBitrate;
- (double)averageVideoBitrate;
@property(readonly, nonatomic) double indicatedBitrate;
@property(readonly, nonatomic) double observedBitrate;
@property(readonly, nonatomic) long long numberOfBytesTransferred;
@property(readonly, nonatomic) long long numberOfStalls;
@property(readonly, nonatomic) double durationWatched;
@property(readonly, nonatomic) double segmentsDownloadedDuration;
@property(readonly, nonatomic) double playbackStartOffset;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) long long numberOfServerAddressChanges;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSDate *playbackStartDate;
@property(readonly, nonatomic) long long numberOfSegmentsDownloaded;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
