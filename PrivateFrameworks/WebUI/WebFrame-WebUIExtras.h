//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WebFrame.h>

#import <WebUI/WBUFormAutoFillFrameHandle-Protocol.h>

@class NSArray, NSString, NSURL;

@interface WebFrame (WebUIExtras) <WBUFormAutoFillFrameHandle>
@property(readonly, nonatomic) NSArray *webui_certificateChain;
@property(readonly, nonatomic) NSURL *webui_URL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

