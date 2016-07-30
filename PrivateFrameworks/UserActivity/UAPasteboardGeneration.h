//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface UAPasteboardGeneration : NSObject
{
    unsigned long long _generation;
    NSSet *_allTypes;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSSet *allTypes; // @synthesize allTypes=_allTypes;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
- (void).cxx_destruct;
- (_Bool)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2;
- (_Bool)addItem:(id)arg1;
- (id)initWithGeneration:(unsigned long long)arg1;

@end

