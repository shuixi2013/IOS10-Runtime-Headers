//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ObjectUpdates : NSObject
{
    NSMutableArray *_addedObjects;
    NSMutableArray *_removedObjects;
}

@property(readonly, nonatomic) NSMutableArray *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(readonly, nonatomic) NSMutableArray *addedObjects; // @synthesize addedObjects=_addedObjects;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

