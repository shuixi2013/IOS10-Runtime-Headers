//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCProgress, BRCServerZone, NSIndexSet;

__attribute__((visibility("hidden")))
@interface BRCDownloadContent : BRCDownload
{
    unsigned long long _liveFileID;
    unsigned int _liveDocumentID;
    _Bool _liveItemIsPackage;
    BRCServerZone *_zone;
    _Bool _isFinderBookmark;
    _Bool _requiresTwoPhase;
    NSIndexSet *_desiredIndices;
}

@property(readonly, nonatomic) unsigned long long liveFileID; // @synthesize liveFileID=_liveFileID;
@property(readonly, nonatomic) NSIndexSet *desiredIndices; // @synthesize desiredIndices=_desiredIndices;
@property(readonly, nonatomic) unsigned int liveDocumentID; // @synthesize liveDocumentID=_liveDocumentID;
@property(readonly, nonatomic) _Bool liveItemIsPackage; // @synthesize liveItemIsPackage=_liveItemIsPackage;
@property(readonly, nonatomic) _Bool requiresTwoPhase; // @synthesize requiresTwoPhase=_requiresTwoPhase;
- (void).cxx_destruct;
- (_Bool)_stageWithSession:(id)arg1 error:(id *)arg2;
- (_Bool)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 xattrsPackage:(id)arg4 error:(id *)arg5;
- (_Bool)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id *)arg4;
- (id)description;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
- (int)kind;
@property(retain, nonatomic) BRCProgress *progress; // @dynamic progress;

@end

