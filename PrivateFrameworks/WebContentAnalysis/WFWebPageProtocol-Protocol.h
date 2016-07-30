//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol WFWebPageProtocol
- (_Bool)hasShortRefresh;
- (_Bool)hasFrameset;
- (NSArray *)links;
- (NSString *)pageContent;
- (NSArray *)images;
- (NSArray *)scriptBlocks;
- (NSArray *)metaTagsUnlabeled;
- (NSDictionary *)metaTagsLabeled;
- (NSString *)metaTagKeywords;
- (NSString *)metaTagDescription;
- (NSString *)pageTitle;
- (NSString *)URLString;
@end
