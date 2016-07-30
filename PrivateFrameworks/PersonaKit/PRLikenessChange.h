//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PRLikenessChange : NSObject
{
    NSString *_identifier;
    unsigned long long _type;
    NSString *_changedLikenessID;
    NSNumber *_changedLikenessVersion;
    NSArray *_dirtyLikenessProperties;
}

+ (unsigned long long)changeTypeFromDescription:(id)arg1;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (id)changeForLikeness:(id)arg1 withType:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *dirtyLikenessProperties; // @synthesize dirtyLikenessProperties=_dirtyLikenessProperties;
@property(copy, nonatomic) NSNumber *changedLikenessVersion; // @synthesize changedLikenessVersion=_changedLikenessVersion;
@property(copy, nonatomic) NSString *changedLikenessID; // @synthesize changedLikenessID=_changedLikenessID;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;

@end

