//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelPlayEvent, MPModelSong, NSData, NSString;

@interface MPCReportingPlaybackEventSource : NSObject
{
    _Bool _shouldReportPlayEventsToStore;
    double _eventDuration;
    unsigned long long _overrideItemType;
    NSString *_lyricsID;
    MPModelSong *_modelSong;
    NSString *_playbackSessionID;
    NSData *_trackInfo;
    MPModelPlayEvent *_modelPlayEvent;
    NSString *_featureName;
    NSData *_recommendationData;
}

@property(copy, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(retain, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property(copy, nonatomic) NSData *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) _Bool shouldReportPlayEventsToStore; // @synthesize shouldReportPlayEventsToStore=_shouldReportPlayEventsToStore;
@property(copy, nonatomic) NSString *playbackSessionID; // @synthesize playbackSessionID=_playbackSessionID;
@property(retain, nonatomic) MPModelSong *modelSong; // @synthesize modelSong=_modelSong;
@property(copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(nonatomic) unsigned long long overrideItemType; // @synthesize overrideItemType=_overrideItemType;
@property(nonatomic) double eventDuration; // @synthesize eventDuration=_eventDuration;
- (void).cxx_destruct;
- (id)initWithAVItem:(id)arg1;

@end

