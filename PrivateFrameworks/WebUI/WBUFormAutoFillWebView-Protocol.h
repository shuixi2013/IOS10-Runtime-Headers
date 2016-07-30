//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class NSDictionary, NSString, UIView;
@protocol WBUFormAutoFillFrameHandle;

@protocol WBUFormAutoFillWebView <NSObject>
@property(copy, nonatomic, setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;
@property(readonly, nonatomic) _Bool webui_privateBrowsingEnabled;
@property(readonly, nonatomic) UIView *webui_viewForAutoFillPrompt;
- (NSDictionary *)webui_formMetadataAndFrame:(id *)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id <WBUFormAutoFillFrameHandle>)arg2;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id <WBUFormAutoFillFrameHandle>)arg1;
- (void)webui_setFormMetadata:(NSDictionary *)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id <WBUFormAutoFillFrameHandle>)arg2;
- (NSDictionary *)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id <WBUFormAutoFillFrameHandle>)arg1;
- (void (^)(void))webui_preventNavigationDuringAutoFillPrompt;
@end

