//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, WBSReaderFontManager;

@protocol SFReaderContext <NSObject>
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(NSString *)arg1;
- (void)setReaderLanguageTag:(NSString *)arg1;
- (void)setReaderFont:(NSString *)arg1;
- (void)setReaderUserVisibleWidth:(double)arg1;
- (WBSReaderFontManager *)fontManager;
- (NSDictionary *)configuration;
- (NSURL *)readerURL;
- (void)clearUnusedReaderResourcesSoon;
- (void)loadNewArticle;
- (void)clearAvailability;
- (void)createArticleFinder;
- (NSDictionary *)scrollPositionInformation;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (_Bool)isReaderAvailable;
@end

