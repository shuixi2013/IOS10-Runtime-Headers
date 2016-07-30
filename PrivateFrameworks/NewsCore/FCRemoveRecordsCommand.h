//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand
{
    NSArray *_recordIDs;
}

@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void).cxx_destruct;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)handleBatchOfRecordIDs:(id)arg1 internalPrivateDataContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleRecordIDsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2;
- (id)recordZoneName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (id)init;

@end

