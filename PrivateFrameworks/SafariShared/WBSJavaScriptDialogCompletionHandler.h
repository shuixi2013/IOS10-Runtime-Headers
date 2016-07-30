//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSJavaScriptDialogCompletionHandler : NSObject
{
    long long _dialogMode;
    CDUnknownBlockType _alertCompletionHandler;
    CDUnknownBlockType _confirmCompletionHandler;
    CDUnknownBlockType _promptCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType promptCompletionHandler; // @synthesize promptCompletionHandler=_promptCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType confirmCompletionHandler; // @synthesize confirmCompletionHandler=_confirmCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType alertCompletionHandler; // @synthesize alertCompletionHandler=_alertCompletionHandler;
@property(nonatomic) long long dialogMode; // @synthesize dialogMode=_dialogMode;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPromptCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithConfirmCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAlertCompletionHandler:(CDUnknownBlockType)arg1;

@end

