//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSUUID, TSPPersistedObjectUUIDMap;

@protocol TSPPersistedObjectUUIDMapDelegate
- (void)persistedObjectUUIDMap:(TSPPersistedObjectUUIDMap *)arg1 foundDuplicateUUID:(NSUUID *)arg2 firstObjectLocation:(struct ObjectLocation)arg3 secondObjectLocation:(struct ObjectLocation)arg4;
- (NSString *)persistedObjectUUIDMap:(TSPPersistedObjectUUIDMap *)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3;
@end

