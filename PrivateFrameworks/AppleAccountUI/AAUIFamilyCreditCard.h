//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface AAUIFamilyCreditCard : NSObject
{
    NSString *_details;
    NSString *_footer;
    NSString *_providerDescription;
    NSString *_type;
    NSString *_usageNotice;
    NSURL *_imageURL;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *usageNotice; // @synthesize usageNotice=_usageNotice;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *providerDescription; // @synthesize providerDescription=_providerDescription;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *details; // @synthesize details=_details;
- (void).cxx_destruct;

@end

