//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCondition, NSMutableArray, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateParserLibrary : NSObject
{
    OITSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (void)returnDateParser:(id)arg1;
- (id)checkoutDateParser;
- (id)initWithLocale:(id)arg1;

@end

