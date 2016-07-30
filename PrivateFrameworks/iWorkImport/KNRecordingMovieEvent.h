//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNRecordingEvent.h>

@class TSDMovieInfo, TSPLazyReference;

__attribute__((visibility("hidden")))
@interface KNRecordingMovieEvent : KNRecordingEvent
{
    TSPLazyReference *mMovieInfoReference;
    long long mMovieEventType;
    double mMovieEventValue;
}

@property(readonly, nonatomic) double movieEventValue; // @synthesize movieEventValue=mMovieEventValue;
@property(readonly, nonatomic) long long movieEventType; // @synthesize movieEventType=mMovieEventType;
- (_Bool)isIgnoredWhenSeeking;
@property(readonly, nonatomic) _Bool stopsPlayback;
@property(readonly, nonatomic) _Bool startsPlayback;
@property(readonly, nonatomic) _Bool endsScrubbing;
@property(readonly, nonatomic) _Bool beginsScrubbing;
@property(readonly, nonatomic) double rate;
@property(readonly, nonatomic) double seekTime;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 endingScrubbingForMovieInfo:(id)arg2 withRate:(double)arg3;
- (id)initWithStartTime:(double)arg1 beginningScrubbingForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 stoppingPlaybackForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 startingPlaybackForMovieInfo:(id)arg2;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 rate:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 seekTime:(double)arg3;
- (id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 movieEventType:(long long)arg3 movieEventValue:(double)arg4;
- (void)saveToArchive:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;
- (id)initWithContext:(id)arg1 archive:(const struct RecordingEventArchive *)arg2 unarchiver:(id)arg3;

@end

