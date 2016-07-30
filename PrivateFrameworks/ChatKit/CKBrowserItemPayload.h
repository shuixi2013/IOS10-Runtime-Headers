//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMPluginPayload.h>

@class NSDictionary, NSURL, UIViewController;
@protocol CKPluginEntryViewController;

@interface CKBrowserItemPayload : IMPluginPayload
{
    NSURL *_videoComplementFileURL;
    UIViewController<CKPluginEntryViewController> *_photoShelfViewController;
    NSURL *_fileURL;
    NSDictionary *_attributionInfo;
}

@property(retain, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) UIViewController<CKPluginEntryViewController> *photoShelfViewController; // @synthesize photoShelfViewController=_photoShelfViewController;
@property(retain, nonatomic) NSURL *videoComplementFileURL; // @synthesize videoComplementFileURL=_videoComplementFileURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPluginPayload:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)__ck_urlFromTextBodyForRichLink;
- (id)mediaObjectFromPayload;
- (_Bool)shouldSendAsRichLink;
- (_Bool)shouldSendAsText;
- (_Bool)shouldSendAsMediaObject;

@end

