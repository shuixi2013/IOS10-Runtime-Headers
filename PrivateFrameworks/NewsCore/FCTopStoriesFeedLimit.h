//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@interface FCTopStoriesFeedLimit : NSObject <NSCopying>
{
    CDUnknownBlockType _cutoffDateProvider;
    CDUnknownBlockType _headlinesLimitProvider;
}

+ (id)feedLimitWithCutoffDate:(id)arg1 headlinesLimit:(unsigned long long)arg2;
+ (id)feedLimitWithCutoffDateProvider:(CDUnknownBlockType)arg1 headlinesLimitProvider:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType headlinesLimitProvider; // @synthesize headlinesLimitProvider=_headlinesLimitProvider;
@property(copy, nonatomic) CDUnknownBlockType cutoffDateProvider; // @synthesize cutoffDateProvider=_cutoffDateProvider;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCutoffDateProvider:(CDUnknownBlockType)arg1 headlinesLimitProvider:(CDUnknownBlockType)arg2;
- (id)init;

@end

