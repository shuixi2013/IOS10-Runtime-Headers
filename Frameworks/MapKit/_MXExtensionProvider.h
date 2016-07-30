//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, _MXExtensionDispatchCenter, _MXExtensionMatchingMerger, _MXExtensionServiceCenter;

__attribute__((visibility("hidden")))
@interface _MXExtensionProvider : NSObject
{
    Class _extensionMatchingClass;
    id _matchingContext;
    id _intentNonUIMatchingContext;
    id _intentUIMatchingContext;
    NSArray *_blacklistedExtensions;
    NSArray *_blacklistedContainingApplications;
    _MXExtensionMatchingMerger *_merger;
    _MXExtensionDispatchCenter *_dispatchCenter;
    _MXExtensionServiceCenter *_serviceCenter;
}

+ (id)sharedProvider;
@property(retain, nonatomic) _MXExtensionServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(retain, nonatomic) _MXExtensionDispatchCenter *dispatchCenter; // @synthesize dispatchCenter=_dispatchCenter;
@property(retain, nonatomic) _MXExtensionMatchingMerger *merger; // @synthesize merger=_merger;
- (void).cxx_destruct;
- (_Bool)_disableExtension:(id)arg1 error:(id *)arg2;
- (_Bool)_enableExtension:(id)arg1 error:(id *)arg2;
- (void)_beginExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 remoteViewControllerInstantiationCompletion:(CDUnknownBlockType)arg3 serviceCompletion:(CDUnknownBlockType)arg4;
- (void)_beginExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 beginCompletion:(CDUnknownBlockType)arg3 serviceCompletion:(CDUnknownBlockType)arg4;
- (id)siblingExtensionsWithContainingAppIdentifer:(id)arg1;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)_currentExtensions;
- (void)removeExtensionUpdateHandler:(id)arg1;
- (void)_restartMatchingExtensionsForDefaultsChange;
- (void)_endMatchingExtensionsIfNeeded;
- (id)_intentClassFilter:(id)arg1;
- (void)_beginMatchingExtensionsIfNeeded;
- (id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg1;
- (id)addExtensionsUpdateHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

