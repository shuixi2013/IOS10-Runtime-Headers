//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class PUSearchButtonItemCustomView, UINavigationItem, UISearchBar, UIView;
@protocol UISearchBarDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchButtonItem : UIBarButtonItem
{
    PUSearchButtonItemCustomView *_customView;
    UIView *_searchIcon;
    struct CGRect _searchIconDefaultBounds;
    UISearchBar *_searchBar;
    _Bool _wantsShowingSearchBar;
    _Bool _showingSearchBar;
    _Bool _nudgesSearchIcon;
    UINavigationItem *_navigationItem;
    id <UISearchBarDelegate> _searchBarDelegate;
}

@property(nonatomic) _Bool nudgesSearchIcon; // @synthesize nudgesSearchIcon=_nudgesSearchIcon;
@property(nonatomic) __weak id <UISearchBarDelegate> searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
@property(readonly, nonatomic) _Bool showingSearchBar; // @synthesize showingSearchBar=_showingSearchBar;
@property(readonly, nonatomic) __weak UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
- (void).cxx_destruct;
- (id)_allNavigationButtonItems;
- (struct CGRect)_targetBoundsForSearchBarInNavigationBar:(id)arg1;
- (void)navigationBarDidUpdate;
@property(nonatomic) double maxSearchBarWidth;
- (void)setShowingSearchBar:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UISearchBar *searchBar;
- (id)initWithNavigationItem:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

