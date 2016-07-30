//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPArchiverBase.h>

@class NSArray, NSHashTable, NSObject, NSUUID, TSPObject;
@protocol OS_dispatch_data, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface TSPArchiver : TSPArchiverBase
{
    BOOL _flags;
    NSHashTable *_alternates;
    NSArray *_unknownMessages;
    NSObject<OS_dispatch_group> *_archiveGroup;
    NSObject<OS_dispatch_group> *_serializeGroup;
    NSObject<OS_dispatch_data> *_serializedData;
    unsigned long long _documentReadVersion;
    unsigned long long _documentWriteVersion;
    NSHashTable *_aggregatedStrongReferences;
    NSHashTable *_aggregatedWeakReferences;
    NSHashTable *_aggregatedCommandToModelReferences;
    NSHashTable *_aggregatedLazyReferences;
    NSHashTable *_aggregatedDataReferences;
    NSUUID *_objectUUID;
    TSPObject *_explicitComponentRootObject;
}

@property(readonly, nonatomic) NSHashTable *alternates; // @synthesize alternates=_alternates;
@property(readonly, nonatomic) NSHashTable *aggregatedDataReferences; // @synthesize aggregatedDataReferences=_aggregatedDataReferences;
@property(readonly, nonatomic) NSHashTable *aggregatedLazyReferences; // @synthesize aggregatedLazyReferences=_aggregatedLazyReferences;
@property(readonly, nonatomic) NSHashTable *aggregatedCommandToModelReferences; // @synthesize aggregatedCommandToModelReferences=_aggregatedCommandToModelReferences;
@property(readonly, nonatomic) NSHashTable *aggregatedWeakReferences; // @synthesize aggregatedWeakReferences=_aggregatedWeakReferences;
@property(readonly, nonatomic) NSHashTable *aggregatedStrongReferences; // @synthesize aggregatedStrongReferences=_aggregatedStrongReferences;
@property(readonly, nonatomic) unsigned long long documentWriteVersion; // @synthesize documentWriteVersion=_documentWriteVersion;
@property(readonly, nonatomic) unsigned long long documentReadVersion; // @synthesize documentReadVersion=_documentReadVersion;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // @synthesize serializedData=_serializedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *serializeGroup; // @synthesize serializeGroup=_serializeGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *archiveGroup; // @synthesize archiveGroup=_archiveGroup;
@property(readonly, nonatomic) TSPObject *explicitComponentRootObject; // @synthesize explicitComponentRootObject=_explicitComponentRootObject;
@property(readonly, nonatomic) NSUUID *objectUUID; // @synthesize objectUUID=_objectUUID;
- (void).cxx_destruct;
- (void)cleanup;
- (void)serialize;
- (_Bool)updateMessageInfo:(struct MessageInfo *)arg1 withArchiver:(id)arg2;
- (void)aggregateReferencesFromArchiver:(id)arg1;
- (void)archive;
@property(readonly, nonatomic) _Bool success;
- (void)fail;
- (_Bool)beginWrite;
@property(readonly, nonatomic) _Bool needsArchive;
- (_Bool)beginArchive;
- (id)addAlternateForMessageVersion:(unsigned long long)arg1;
- (void)requiresDocumentVersion:(unsigned long long)arg1;
- (void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool shouldSaveAlternates;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long messageVersion; // @dynamic messageVersion;

@end

