//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSPData;

__attribute__((visibility("hidden")))
@interface KNMovieSegment : NSObject
{
    TSPData *mMovieData;
    double mStartTime;
}

@property(readonly, nonatomic) double startTime; // @synthesize startTime=mStartTime;
@property(readonly, nonatomic) TSPData *movieData; // @synthesize movieData=mMovieData;
- (id)movieSegmentByAddingTimeOffset:(double)arg1;
@property(readonly, nonatomic, getter=isEmptySegment) _Bool emptySegment;
- (void)dealloc;
- (id)init;
- (id)initEmptySegmentWithStartTime:(double)arg1;
- (id)initWithMovieData:(id)arg1 startTime:(double)arg2;
- (void)saveToArchive:(struct MovieSegmentArchive *)arg1 archiver:(id)arg2;
- (id)initWithContext:(id)arg1 archive:(const struct MovieSegmentArchive *)arg2 unarchiver:(id)arg3;

@end

