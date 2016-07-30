//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SUICSiriLanguageDelegate;

@interface SUICSiriLanguage : NSObject
{
    _Bool _setupAssistantHasCompletedInitialRunChecked;
    _Bool _setupAssistantHasCompletedInitialRunAvailable;
    NSString *_spokenLanguageCode;
    id <SUICSiriLanguageDelegate> _delegate;
}

@property(nonatomic, getter=_setupAssistantHasCompletedInitialRunAvailable) _Bool setupAssistantHasCompletedInitialRunAvailable; // @synthesize setupAssistantHasCompletedInitialRunAvailable=_setupAssistantHasCompletedInitialRunAvailable;
@property(nonatomic) _Bool setupAssistantHasCompletedInitialRunChecked; // @synthesize setupAssistantHasCompletedInitialRunChecked=_setupAssistantHasCompletedInitialRunChecked;
@property(readonly, nonatomic, getter=_delegate) __weak id <SUICSiriLanguageDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode; // @synthesize spokenLanguageCode=_spokenLanguageCode;
- (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_updateSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

