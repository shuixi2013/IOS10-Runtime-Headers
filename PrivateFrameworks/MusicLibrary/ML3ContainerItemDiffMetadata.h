//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3ContainerItemDiffMetadata : NSObject
{
    long long _persistentID;
    long long _containerPersistentID;
    long long _itemPersistentID;
    long long _newPosition;
    long long _previousPosition;
}

+ (id)diffMetadataWithPersistentID:(long long)arg1 containerPersistentID:(long long)arg2 itemPersistentID:(long long)arg3 newPosition:(long long)arg4 previousPosition:(long long)arg5;
+ (id)diffMetadataWithPersistentID:(long long)arg1;
@property(nonatomic) long long previousPosition; // @synthesize previousPosition=_previousPosition;
@property(nonatomic) long long newPosition; // @synthesize newPosition=_newPosition;
@property(nonatomic) long long itemPersistentID; // @synthesize itemPersistentID=_itemPersistentID;
@property(nonatomic) long long containerPersistentID; // @synthesize containerPersistentID=_containerPersistentID;
@property(nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;

@end

