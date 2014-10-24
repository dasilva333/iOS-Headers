//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUICategoryControllerDelegate.h"
#import "SKUIMetricsViewController.h"
#import "SKUIViewControllerTesting.h"

@class NSString, NSURL, SKUICategoryController, SKUIStorePageViewController;

@interface SKUIChartsViewController : SKUIViewController <SKUICategoryControllerDelegate, SKUIMetricsViewController, SKUIViewControllerTesting>
{
    SKUICategoryController *_categoryController;
    BOOL _hasCategoryButton;
    SKUIStorePageViewController *_storePageViewController;
    NSURL *_url;
}

+ (id)_defaultURL;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (id)_storePageViewController;
- (void)_reloadNavigationItem;
- (void)_loadStorePage;
- (void)_loadCategoriesWithURL:(id)arg1;
- (void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (id)_categoryController;
- (BOOL)performTestWithName:(id)arg1 options:(id)arg2;
- (id)activeMetricsController;
- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
