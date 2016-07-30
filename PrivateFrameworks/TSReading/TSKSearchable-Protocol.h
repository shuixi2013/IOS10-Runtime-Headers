//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSKModel-Protocol.h>

@class NSString, TSKReplaceAllChildCommand, TSKReplaceAllCommand, TSKSearch;

@protocol TSKSearchable <TSKModel>

@optional
- (TSKReplaceAllChildCommand *)childCommandForReplaceAllCommand:(TSKReplaceAllCommand *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)continueSearch:(TSKSearch *)arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
- (TSKSearch *)searchForString:(NSString *)arg1 options:(unsigned long long)arg2 onHit:(void (^)(id <TSKSearchReference>))arg3;
@end

