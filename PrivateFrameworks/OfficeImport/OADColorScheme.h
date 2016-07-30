//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject <NSCopying>
{
    NSString *mName;
    NSMutableDictionary *mColors;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)validateColorScheme;
- (_Bool)isEmpty;
- (void)setColor:(id)arg1 index:(int)arg2;
- (void)addColor:(id)arg1 index:(int)arg2;
- (id)colorForIndex:(int)arg1;
- (unsigned long long)colorCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

