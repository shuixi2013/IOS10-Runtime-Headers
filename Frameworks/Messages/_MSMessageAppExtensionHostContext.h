//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <Messages/_MSMessageComposeHostProtocol-Protocol.h>

@class NSString;
@protocol _MSMessageComposeHostProtocol;

@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostProtocol>
{
    id <_MSMessageComposeHostProtocol> _delegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak id <_MSMessageComposeHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_requestPresentationStyleExpanded:(_Bool)arg1;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_stageRichLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stageMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stageAppItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
