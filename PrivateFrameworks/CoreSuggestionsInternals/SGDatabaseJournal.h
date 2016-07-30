//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SGDatabaseJournalFile;
@protocol OS_dispatch_queue;

@interface SGDatabaseJournal : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    _Bool _journaling;
    _Bool _inMemory;
    SGDatabaseJournalFile *_currentFile;
    id _closeCurrentFilesObserver;
}

+ (CDUnknownBlockType)_binderForDictionary:(id)arg1;
+ (id)journalForInMemoryDb;
+ (id)journalWithName:(id)arg1;
@property(readonly, nonatomic) _Bool journaling; // @synthesize journaling=_journaling;
- (void).cxx_destruct;
- (_Bool)stopJournaling;
- (_Bool)startJournaling;
- (_Bool)deleteAllJournaledQueries;
- (_Bool)executeQueriesFromAllJournalFilesOnDatabase:(id)arg1;
- (_Bool)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(_Bool *)arg3;
- (void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3;
- (void)dealloc;

@end

