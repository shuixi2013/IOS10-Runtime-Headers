//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCoding-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface PXFeedbackEntry : NSObject <NSCoding>
{
    NSDictionary *_feedbackItemDetails;
    _Bool _alreadyCollected;
    NSMutableDictionary *_feedbackItemsDict;
    long long _generalFeedback;
    NSString *_systemID;
    NSDate *_timestamp;
    NSString *_appVersion;
}

+ (id)createFakeTestFeedbackDictionary;
+ (id)createFakeTestEntry;
+ (id)negativeFeedbackForMemoriesKeys;
+ (id)positiveFeedbackForMemoriesKeys;
+ (id)negativeFeedbackForMemoryDetailsKeys;
+ (id)positiveFeedbackForMemoryDetailsKeys;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool alreadyCollected; // @synthesize alreadyCollected=_alreadyCollected;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *systemID; // @synthesize systemID=_systemID;
@property(nonatomic) long long generalFeedback; // @synthesize generalFeedback=_generalFeedback;
@property(retain, nonatomic) NSMutableDictionary *feedbackItemsDict; // @synthesize feedbackItemsDict=_feedbackItemsDict;
- (void).cxx_destruct;
- (id)longDescription;
- (id)asTextForItemKey:(id)arg1;
- (id)osKeyForItemKey:(id)arg1;
- (_Bool)userLikedResults;
- (id)uniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemID:(id)arg1 timestamp:(id)arg2;
- (id)init;

@end

