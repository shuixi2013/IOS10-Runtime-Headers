//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IFCentroidScoringParameters : NSObject
{
    NSDictionary *_scale;
    long long _divergence;
}

+ (id)defaultParameters;
@property long long divergence; // @synthesize divergence=_divergence;
@property(copy) NSDictionary *scale; // @synthesize scale=_scale;
- (void).cxx_destruct;

@end

