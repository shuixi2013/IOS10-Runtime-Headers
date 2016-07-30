//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLitePredicate.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDSQLitePropertyComparisonPredicate : HDSQLitePredicate <NSCopying>
{
    NSString *_lhObjectPropertyName;
    NSString *_rhObjectPropertyName;
    long long _comparisonType;
}

+ (id)predicateWithLeftHandObjectPropertyName:(id)arg1 rightHandObjectPropertyName:(id)arg2 comparisonType:(long long)arg3;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
@property(readonly, nonatomic) NSString *rhObjectPropertyName; // @synthesize rhObjectPropertyName=_rhObjectPropertyName;
@property(readonly, nonatomic) NSString *lhObjectPropertyName; // @synthesize lhObjectPropertyName=_lhObjectPropertyName;
- (void).cxx_destruct;
- (id)description;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonOperator;

@end

