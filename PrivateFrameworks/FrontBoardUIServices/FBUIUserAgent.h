//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardUIServices/FBUIUserAgentInternal-Protocol.h>

@class NSString;

@interface FBUIUserAgent : NSObject <FBUIUserAgentInternal>
{
    _Bool _systemApp;
}

+ (id)sharedAgent;
@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
- (id)processManager;
- (id)sceneManager;
- (id)mainQueue;
- (id)mainDisplay;
- (id)mainScene;
- (id)currentProcess;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

