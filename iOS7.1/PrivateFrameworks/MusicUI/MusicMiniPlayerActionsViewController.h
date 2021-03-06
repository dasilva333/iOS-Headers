//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class MPAVItem, NSArray;

@interface MusicMiniPlayerActionsViewController : UITableViewController
{
    NSArray *_actions;
    id <MusicMiniPlayerActionsViewControllerDelegate> _delegate;
    MPAVItem *_item;
}

+ (id)_titleForAction:(int)arg1;
+ (id)_imageForAction:(int)arg1;
+ (id)_actionsForItem:(id)arg1;
+ (BOOL)hasActionsForItem:(id)arg1;
@property(readonly, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <MusicMiniPlayerActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateActions;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

