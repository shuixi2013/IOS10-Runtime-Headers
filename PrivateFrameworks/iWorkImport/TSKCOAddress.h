//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKCOAddress : NSObject
{
    TSKCOAddress *mParent;
    NSArray *mAllPathElements;
}

+ (id)newObjectForUnarchiver:(id)arg1 message:(const struct Message *)arg2;
+ (void)registerClass:(Class)arg1 forExtensionNumber:(unsigned int)arg2;
+ (id)typeRegistry;
@property(readonly, nonatomic) TSKCOAddress *parent; // @synthesize parent=mParent;
- (void)saveToArchiver:(id)arg1 message:(struct Address *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Address *)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)equals:(id)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)hasSamePrefix:(id)arg1;
@property(readonly, nonatomic) NSArray *allPathElements;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSString *pathElement;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

