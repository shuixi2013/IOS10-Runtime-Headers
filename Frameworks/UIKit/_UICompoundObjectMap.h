//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICompoundObjectMap : NSObject
{
    NSMutableDictionary *_mapTable;
}

+ (id)compoundObjectMap;
@property(retain, nonatomic) NSMutableDictionary *mapTable; // @synthesize mapTable=_mapTable;
- (void).cxx_destruct;
- (void)removeAllMappings;
- (void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3;
- (id)valueForObject:(id)arg1 andProperty:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)generateKeyForObject:(id)arg1 andProperty:(id)arg2;
- (id)init;

@end

