//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRContainer, NSDictionary, NSURL;

@protocol BRContainerHelper <NSObject>
- (BRContainer *)fetchContainerForURL:(NSURL *)arg1;
- (NSDictionary *)fetchAllContainersByID;
- (_Bool)canFetchAllContainersByID;
@end

