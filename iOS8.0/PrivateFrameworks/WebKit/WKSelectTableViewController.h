//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UIKeyInput.h"

@class NSString, WKContentView, WKSelectPopover;

__attribute__((visibility("hidden")))
@interface WKSelectTableViewController : UITableViewController <UIKeyInput>
{
    unsigned int _singleSelectionIndex;
    unsigned int _singleSelectionSection;
    int _numberOfSections;
    BOOL _allowsMultipleSelection;
    float _fontSize;
    float _maximumTextWidth;
    int _textAlignment;
    WKSelectPopover *_popover;
    WKContentView *_contentView;
}

@property(nonatomic) WKSelectPopover *popover; // @synthesize popover=_popover;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct OptionItem *)findItemAt:(id)arg1;
- (int)findItemIndexAt:(id)arg1;
- (void)populateCell:(id)arg1 withItem:(const struct OptionItem *)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithView:(id)arg1 hasGroups:(BOOL)arg2;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end
