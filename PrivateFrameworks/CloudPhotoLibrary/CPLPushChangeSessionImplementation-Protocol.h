//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSessionImplementation-Protocol.h>

@class CPLChangeBatch;

@protocol CPLPushChangeSessionImplementation <CPLChangeSessionImplementation>
- (void)commitChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, unsigned long long, NSString *))arg2;
@end

