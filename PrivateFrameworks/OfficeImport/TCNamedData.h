//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TCNamedData : NSObject
{
    NSData *mData;
    NSString *mName;
}

+ (id)namedDataWithData:(id)arg1 named:(id)arg2;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property(readonly, nonatomic) NSData *data; // @synthesize data=mData;
- (void)dealloc;
- (id)initWithData:(id)arg1 named:(id)arg2;

@end
