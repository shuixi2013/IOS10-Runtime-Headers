//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPNowPlayingInfoLanguageOption, NSArray;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject
{
    void *_mrLanguageOptionGroup;
}

@property(readonly, nonatomic) void *mrLanguageOptionGroup; // @synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup;
@property(readonly, nonatomic) _Bool allowEmptySelection; // @dynamic allowEmptySelection;
@property(readonly, nonatomic) MPNowPlayingInfoLanguageOption *defaultLanguageOption; // @dynamic defaultLanguageOption;
@property(readonly, nonatomic) NSArray *languageOptions; // @dynamic languageOptions;
- (void)dealloc;
- (id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(_Bool)arg3;

@end

