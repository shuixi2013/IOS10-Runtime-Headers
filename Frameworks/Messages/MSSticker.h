//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/MSSticker-Protocol.h>

@class NSData, NSString, NSURL;

@interface MSSticker : NSObject <MSSticker>
{
    NSURL *_imageFileURL;
    NSString *_localizedDescription;
    NSData *_data;
}

+ (id)stickerWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) NSURL *imageFileURL; // @synthesize imageFileURL=_imageFileURL;
- (void).cxx_destruct;
- (id)accessibilityLabel;
@property(readonly, copy) NSString *description;
- (id)initWithContentsOfURL:(id)arg1 data:(id)arg2 localizedDescription:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfFileURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
