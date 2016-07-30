//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSSecureCoding-Protocol.h>

@class GKDecisionNode, GKRandomSource, NSArray;

@interface GKDecisionTree : NSObject <NSSecureCoding>
{
    struct GKCDecisionTree *_decisionTree;
    NSArray *forest;
    GKDecisionNode *_rootNode;
    GKRandomSource *_randomSource;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) GKRandomSource *randomSource; // @synthesize randomSource=_randomSource;
@property(retain, nonatomic) GKDecisionNode *rootNode; // @synthesize rootNode=_rootNode;
- (void).cxx_destruct;
- (void)generateForestFromExamples:(id)arg1 andAttributes:(id)arg2;
- (id)description;
- (id)findActionForAnswers:(id)arg1;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttribute:(id)arg1;
- (id)init;

@end

