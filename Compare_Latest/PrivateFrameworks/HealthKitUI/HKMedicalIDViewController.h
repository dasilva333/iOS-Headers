//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "HKEmergencyCardDeletionDelegate.h"
#import "HKEmergencyCardEnabledDelegate.h"
#import "HKEmergencyCardRowHeightChangeDelegate.h"
#import "HKMedicalIDViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HKEmergencyCardGroupTableItem, HKHealthStore, NSArray, NSString, _HKMedicalIDData;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardEnabledDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate>
{
    NSArray *_tableItems;
    NSArray *_presentableTableItems;
    HKEmergencyCardGroupTableItem *_groupItem;
    BOOL _inEditMode;
    BOOL _allowsEditing;
    BOOL _showsDismissButton;
    BOOL _showsDeleteButton;
    _HKMedicalIDData *_medicalID;
    HKHealthStore *_healthStore;
    id <HKMedicalIDViewControllerDelegate> _delegate;
}

+ (BOOL)isSupportedOnThisDevice;
@property(nonatomic) __weak id <HKMedicalIDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) BOOL showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
@property(nonatomic) BOOL showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(retain, nonatomic) _HKMedicalIDData *medicalID; // @synthesize medicalID=_medicalID;
- (void).cxx_destruct;
- (void)tableItem:(id)arg1 heightDidChangeForRowIndex:(int)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (void)enabledTableItem:(id)arg1 stateDidChange:(BOOL)arg2;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)_fetchMedicalIDDataSynchronously:(char *)arg1;
- (void)_buildPresentableTableItems;
- (void)_buildTableItems;
- (void)_doneTapped:(id)arg1;
- (void)_editTapped:(id)arg1;
- (void)_doneEditingTapped:(id)arg1;
- (void)_cancelEditingTapped:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initInEditMode:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
