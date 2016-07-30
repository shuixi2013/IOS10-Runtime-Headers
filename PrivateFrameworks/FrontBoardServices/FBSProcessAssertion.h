//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class BKSProcessAssertion, FBSProcessExecutionPolicy, NSString;
@protocol FBSProcess;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding>
{
    NSString *_name;
    id <FBSProcess> _process;
    FBSProcessExecutionPolicy *_policy;
    unsigned long long _activationCount;
    _Bool _invalidated;
    BKSProcessAssertion *_assertion;
}

@property(readonly, nonatomic) unsigned long long activationCount; // @synthesize activationCount=_activationCount;
@property(readonly, retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly, retain, nonatomic) FBSProcessExecutionPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak id <FBSProcess> process; // @synthesize process=_process;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_invalidateAssertion:(id)arg1;
- (void)invalidate;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
- (void)dealloc;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

