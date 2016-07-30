//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFMoreResults.h>

@class NSURL, NSXPCListenerEndpoint, PARSessionConfiguration;

@interface PARAsyncMoreResults : SFMoreResults
{
    NSXPCListenerEndpoint *_endpoint;
    PARSessionConfiguration *_configuration;
    double _scale;
    NSURL *_moreResultsURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4;
@property(readonly, copy, nonatomic) NSURL *moreResultsURL; // @synthesize moreResultsURL=_moreResultsURL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (void)loadSearchResultsWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

