//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _EARSpeechRecognizer, _EARUserProfile;

@interface _EARSpeechExperiment : NSObject
{
    _EARSpeechRecognizer *_recognizer;
    _EARUserProfile *_userProfile;
}

- (void).cxx_destruct;
- (void)evaluateScript:(id)arg1 archiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)evaluateScript:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRecognizer:(id)arg1 userProfile:(id)arg2;

@end

