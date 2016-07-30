//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPFeatureManager : NSObject
{
}

+ (id)descriptionForScanResultType:(unsigned long long)arg1;
+ (id)cleanedStringForFeatureData:(id)arg1;
+ (void)scanEventsInMessageUnits:(id)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)scanEventsInMessageUnits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)bestEventFromEvents:(id)arg1;
+ (void)normalizedEvents:(id)arg1;
+ (id)normalizedAllDayDateFromDate:(id)arg1;
+ (id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2 resultType:(unsigned long long *)arg3;
+ (id)decoratedTitle:(id)arg1 withSubtitles:(id)arg2;
+ (void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(_Bool)arg3 features:(id)arg4;
+ (id)stitchedEventsFromEvents:(id)arg1;
+ (void)_scanEventsInMessageUnits:(id)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)artisNamesFromFeatures:(id)arg1;
+ (id)sportTeamNamesFromFeatures:(id)arg1;
+ (id)movieTitlesFromFeatures:(id)arg1;
+ (id)linksAndPhoneNumbersStringsFromFeatures:(id)arg1;
+ (id)stringsFromDataFeatures:(id)arg1 matchingTypes:(id)arg2;
+ (_Bool)isEventProposalFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 eventIsTenseDependent:(_Bool)arg4 extractedFromSubject:(_Bool)arg5 clusterType:(unsigned long long *)arg6;
+ (id)subjectEventVocabularyIgnoreDateKeyword:(id)arg1;
+ (id)subjectEventVocabularyRejectionKeyword:(id)arg1;
+ (_Bool)features:(id)arg1 containDateOlderThan:(id)arg2;
+ (unsigned long long)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2;
+ (_Bool)isDateAroundNoon:(id)arg1;
+ (_Bool)isBlacklistedSender:(id)arg1;
+ (_Bool)isNaturalLanguageEventDetectionEnabled;
+ (_Bool)shouldReplaceSendDateWithCurrentDate;
+ (id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
+ (id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
+ (unsigned long long)featureSentencePolarityForFeatureAtIndex:(unsigned long long)arg1 inFeatures:(id)arg2;
+ (id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned long long)arg3;
+ (id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(struct _NSRange)arg2;
+ (unsigned long long)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2;
+ (id)_sortedFeaturesByRange:(id)arg1;
+ (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4;
+ (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2;
+ (id)featureExtractorsExceptDataDetectorsExtractor;
+ (id)dataDetectorsFeatureExtractor;
+ (id)sharedFeatureManager;

@end

