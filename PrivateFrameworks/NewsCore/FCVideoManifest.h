//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FCVideoManifest : NSObject
{
    NSURL *_videoURL;
    NSString *_articleID;
}

@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (id)initWithArticleID:(id)arg1 videoURL:(id)arg2;
- (id)init;

@end

