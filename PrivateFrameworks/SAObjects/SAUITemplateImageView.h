//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

#import <SAObjects/SAUITemplateMonogrammable-Protocol.h>

@class NSArray, NSString, SAUIImageResource;

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>
{
}

+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)imageView;
@property(copy, nonatomic) NSString *style;
@property(copy, nonatomic) NSArray *monogramName; // @dynamic monogramName;
@property(retain, nonatomic) SAUIImageResource *image;
@property(nonatomic) float alpha;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

