//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CHDAnchor.h>

__attribute__((visibility("hidden")))
@interface CHDRelativeSizeAnchor : CHDAnchor
{
    struct CGPoint mFrom;
    struct CGPoint mTo;
}

- (void)setTo:(struct CGPoint)arg1;
- (struct CGPoint)to;
- (void)setFrom:(struct CGPoint)arg1;
- (struct CGPoint)from;

@end

