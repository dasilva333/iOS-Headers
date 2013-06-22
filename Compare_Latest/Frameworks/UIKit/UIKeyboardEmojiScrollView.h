/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKBKeyView.h>

#import "UIKeyboardEmojiInput-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, UIKeyboardEmojiCategory, UIKeyboardEmojiInputController, UILabel, UIPageControl, UIScrollView;

@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput>
{
    UIKeyboardEmojiInputController *_inputController;
    UIKeyboardEmojiCategory *_category;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    UILabel *_categoryLabel;
    UILabel *_optionalDescription;
    NSMutableArray *_pages;
    int _currentPage;
}

- (void)goToFirstPage;
- (void)setScrollDelay:(double)arg1;
- (int)currentPage;
- (void)ensureSurrounded;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)pageChanged;
- (void)saveFirstVisibleEmojiIndex;
- (void)reloadForCategory:(id)arg1;
- (int)emojiCountPerPageForRotation;
- (void)clearPages;
- (void)interruptScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutPages;
- (void)delayLayout;
- (void)layoutRecents;
- (void)doLayout;
- (void)forceLayout;
- (BOOL)shouldCache;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;

@end
