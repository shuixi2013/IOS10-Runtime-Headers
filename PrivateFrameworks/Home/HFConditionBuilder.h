//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class NSPredicate;

@interface HFConditionBuilder : HFItemBuilder
{
}

+ (id)_singleConditionBuilderForPredicate:(id)arg1 home:(id)arg2;
+ (id)conditionBuildersForPredicate:(id)arg1 home:(id)arg2;
+ (_Bool)canHandlePredicate:(id)arg1;
+ (Class)homeKitRepresentationClass;
- (id)commitItem;
- (id)_performValidation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSPredicate *predicate;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

