//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty
{
    NSSet *_possibleValues;
    _Bool _autoSanitizeValues;
}

- (void).cxx_destruct;
- (id)longestValueString;
- (id)possibleValues;
- (unsigned long long)cardinality;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(_Bool)arg3;

@end

