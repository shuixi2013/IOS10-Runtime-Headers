//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSUITVOutManager;

@interface PSUITVOutController : PSListController
{
    PSUITVOutManager *_tvOutManager;
}

- (void).cxx_destruct;
- (void)setTVSignal:(id)arg1 specifier:(id)arg2;
- (id)tvSignal:(id)arg1;
- (void)setWidescreen:(id)arg1 specifier:(id)arg2;
- (id)isWidescreen:(id)arg1;
- (void)writeValue:(struct __CFString *)arg1 forKey:(struct __CFString *)arg2;
- (void)handleTVOutChange;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end

