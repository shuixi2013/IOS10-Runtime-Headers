//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CNContactViewController, EKEventEditViewController, SGRealtimeContact, SGRealtimeEvent, SGUIBannerView, UIViewController;

@protocol SGUIBannerViewDelegate
- (UIViewController *)viewControllerForPresentingFromSuggestionsBannerView:(SGUIBannerView *)arg1;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 wantsToPushMixedSuggestionsViewController:(UIViewController *)arg2;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 didTapAddForEvent:(SGRealtimeEvent *)arg2 wantsToPresentEventViewController:(EKEventEditViewController *)arg3;
- (void)suggestionsBannerView:(SGUIBannerView *)arg1 didTapAddForContact:(SGRealtimeContact *)arg2 wantsToPresentContactViewController:(CNContactViewController *)arg3;
- (void)suggestionsBannerViewDidDismiss:(SGUIBannerView *)arg1;
@end

