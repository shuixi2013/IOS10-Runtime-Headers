//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SKUIStoreIdentifier;

@interface SKUIStoreItemRelationship : NSObject
{
    SKUIStoreIdentifier *_singleParent;
    NSSet *_chidItems;
}

@property(readonly, copy, nonatomic) NSSet *chidItems; // @synthesize chidItems=_chidItems;
@property(readonly, copy, nonatomic) SKUIStoreIdentifier *singleParent; // @synthesize singleParent=_singleParent;
- (void).cxx_destruct;
- (id)initWithParent:(id)arg1 andChildren:(id)arg2;

@end

