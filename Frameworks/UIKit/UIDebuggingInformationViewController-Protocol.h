//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSValue;
@protocol UIDebuggingInformationObserver;

@protocol UIDebuggingInformationViewController

@optional
- (void)removePropertyObserver:(id <UIDebuggingInformationObserver>)arg1 forKey:(NSString *)arg2;
- (void)addPropertyObserver:(id <UIDebuggingInformationObserver>)arg1 forKey:(NSString *)arg2;
- (void)addPropertyForKey:(NSString *)arg1 ofType:(long long)arg2 defaultValue:(NSValue *)arg3 minimumValue:(NSValue *)arg4 maximumValue:(NSValue *)arg5;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
@end

