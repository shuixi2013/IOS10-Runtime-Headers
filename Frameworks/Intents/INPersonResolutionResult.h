//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INPersonResolutionResult : INIntentResolutionResult
{
}

+ (id)unsupportedWithReason:(long long)arg1 alternativePeople:(id)arg2;
+ (id)needsMoreDetailsForPerson:(id)arg1;
+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1;
+ (id)disambiguationWithPeopleToDisambiguate:(id)arg1;
+ (id)successWithResolvedPerson:(id)arg1;

@end

