//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject
{
    long long _idiom;
    int _type;
}

+ (_Bool)isItemWithTypeExclusive:(int)arg1 orSuppressingTypes:(id *)arg2;
+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3;
+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;
+ (_Bool)typeIsValid:(int)arg1;
+ (id)itemWithType:(int)arg1 idiom:(long long)arg2;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (long long)compareCenterOrder:(id)arg1;
- (long long)compareRightOrder:(id)arg1;
- (long long)compareLeftOrder:(id)arg1;
- (long long)comparePriority:(id)arg1;
- (_Bool)appearsInRegion:(int)arg1;
- (_Bool)appearsOnRight;
- (_Bool)appearsOnLeft;
@property(readonly, nonatomic) NSString *indicatorName;
- (int)centerOrder;
@property(readonly, nonatomic) int rightOrder;
@property(readonly, nonatomic) int leftOrder;
@property(readonly, nonatomic) int priority;
@property(readonly, nonatomic) Class viewClass;
- (id)initWithType:(int)arg1;

@end

