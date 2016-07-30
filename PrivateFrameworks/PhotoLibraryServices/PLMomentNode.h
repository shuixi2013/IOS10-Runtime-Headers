//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSNumber, NSString, PLMomentCluster;
@protocol NSCopying;

@interface PLMomentNode : NSObject
{
    _Bool _marked;
    _Bool _visited;
    NSObject<NSCopying> *__objectID;
    CLLocation *__location;
    NSDate *__creationDate;
    PLMomentCluster *__cluster;
    unsigned long long __userTagType;
    NSString *__userTag;
    NSNumber *_cacheInsertionIndex;
}

@property(retain, nonatomic) NSNumber *cacheInsertionIndex; // @synthesize cacheInsertionIndex=_cacheInsertionIndex;
@property(nonatomic, getter=isVisited) _Bool visited; // @synthesize visited=_visited;
@property(nonatomic, getter=isMarked) _Bool marked; // @synthesize marked=_marked;
@property(readonly, nonatomic) NSString *userTag; // @synthesize userTag=__userTag;
@property(readonly, nonatomic) unsigned long long userTagType; // @synthesize userTagType=__userTagType;
@property(nonatomic) PLMomentCluster *cluster; // @synthesize cluster=__cluster;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=__creationDate;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=__location;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=__objectID;
- (_Bool)isTagged;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)description;
- (void)dealloc;
- (id)initWithPartialFetchDictionary:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;

@end
