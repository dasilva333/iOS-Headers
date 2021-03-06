//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ABContactViewControllerDelegate.h"
#import "UIViewControllerRestoration.h"

@class ABContactViewController, NSArray, NSString, UIFont, UIImage, UIView;

@interface ABPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, UIViewControllerRestoration>
{
    BOOL _badgeEmailPropertiesForMailVIP;
    BOOL _allowsEditing;
    BOOL _allowsActions;
    BOOL _shouldShowLinkedPeople;
    BOOL _allowsSharing;
    BOOL _allowsAddToFavorites;
    BOOL _allowsConferencing;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
    BOOL _highlightedImportant;
    void *_addressBook;
    void *_displayedPerson;
    id <ABPersonViewControllerDelegate> _personViewDelegate;
    NSArray *_displayedProperties;
    UIView *_personHeaderView;
    ABContactViewController *_contactViewController;
    int _style;
    int _highlightedProperty;
    int _highlightedMultiValueIdentifier;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) BOOL highlightedImportant; // @synthesize highlightedImportant=_highlightedImportant;
@property(nonatomic) int highlightedMultiValueIdentifier; // @synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier;
@property(nonatomic) int highlightedProperty; // @synthesize highlightedProperty=_highlightedProperty;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) ABContactViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(nonatomic) BOOL allowsOnlyFaceTimeActions; // @synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions;
@property(nonatomic) BOOL allowsOnlyPhoneActions; // @synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions;
@property(retain, nonatomic) UIView *personHeaderView; // @synthesize personHeaderView=_personHeaderView;
@property(nonatomic) BOOL allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
@property(nonatomic) BOOL allowsConferencing; // @synthesize allowsConferencing=_allowsConferencing;
@property(nonatomic) BOOL allowsAddToFavorites; // @synthesize allowsAddToFavorites=_allowsAddToFavorites;
@property(nonatomic) BOOL allowsSharing; // @synthesize allowsSharing=_allowsSharing;
@property(nonatomic) BOOL shouldShowLinkedPeople; // @synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople;
@property(nonatomic) BOOL allowsActions; // @synthesize allowsActions=_allowsActions;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(nonatomic) id <ABPersonViewControllerDelegate> personViewDelegate; // @synthesize personViewDelegate=_personViewDelegate;
- (void)cancelEditing:(BOOL)arg1;
- (void)personViewController:(id)arg1 willSetEditing:(BOOL)arg2 animated:(BOOL)arg3;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)shareContactByEmail:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willWeiboLocationCallback;
@property(copy, nonatomic) CDUnknownBlockType willTweetLocationCallback;
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;
@property(copy, nonatomic) NSString *shareLocationURL;
@property(copy, nonatomic) NSString *shareMessageSubject;
@property(copy, nonatomic) NSString *shareMessageBody;
@property(nonatomic) BOOL shareMessageBodyIsHTML;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)handleExternalChange;
- (BOOL)_updateAllDataForExternalChange;
- (void)_updateTableDataForExternalChange;
- (BOOL)_updatePeopleDataForExternalChange;
- (void)addressBookChangedLocally:(struct __CFDictionary *)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(copy, nonatomic) NSString *attribution;
@property(retain, nonatomic) UIView *customFooterView;
@property(retain, nonatomic) UIView *customHeaderView;
@property(nonatomic) BOOL shouldAlignPersonHeaderViewToImage;
@property(readonly, nonatomic) UIView *tableHeaderView;
- (void)setCardContentProvider:(id)arg1;
@property(retain, nonatomic) UIView *customMessageView;
@property(retain, nonatomic) UIFont *messageDetailFont;
@property(copy, nonatomic) NSString *messageDetail;
@property(retain, nonatomic) UIFont *messageFont;
@property(copy, nonatomic) NSString *message;
- (void)setDisplayedUIPerson:(id)arg1;
- (id)displayedUIPerson;
- (BOOL)allowsSettingAsPreferredCardForName;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
@property(nonatomic) BOOL allowsVibrations;
@property(nonatomic) BOOL allowsSounds;
@property(nonatomic) BOOL allowsCancel;
@property(nonatomic) BOOL allowsDeletion;
- (id)editDelegate;
- (void)setEditDelegate:(id)arg1;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
- (BOOL)manuallyLinkPerson:(id)arg1;
- (void)setShouldShowLinkingUIOnCard:(BOOL)arg1;
- (BOOL)shouldShowLinkingUIOnCard;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (BOOL)appearsInLinkingPeoplePicker;
- (void)loadContactViewController;
@property(nonatomic) BOOL badgeEmailPropertiesForMailVIP; // @synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(BOOL)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (id)contactViewController:(id)arg1 highlightColorForPropertyItem:(id)arg2 contact:(id)arg3;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)loadView;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
@property(nonatomic) void *displayedPerson; // @synthesize displayedPerson=_displayedPerson;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;
- (id)initWithStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3 style:(int)arg4;
- (id)init;
- (id)newActionButton;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(int)arg6 destructive:(BOOL)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(int)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(int)arg4 destructive:(BOOL)arg5;

@end

