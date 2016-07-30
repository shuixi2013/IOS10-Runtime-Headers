//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSArray, NSString;

@interface MPMediaCompoundPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    NSArray *_predicates;
}

+ (id)predicateMatchingPredicates:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (void).cxx_destruct;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

