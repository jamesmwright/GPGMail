/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSButtonCell.h"

@class NSPopUpButtonCell;

@interface _SortBarButtonCell : NSButtonCell
{
    NSPopUpButtonCell *_popUpCell;
    BOOL _showingPopUpMenu;
}

- (void)accessibilityPerformShowMenuAction;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)runPopUpInView:(id)arg1;
- (void)showPopUpMenuForButton:(id)arg1;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (id)indicatorImage;
- (id)newIndicatorImageWithForegroundColor:(id)arg1 engravingColor:(id)arg2;
- (id)engravingColor;
- (id)foregroundTextColor;
- (double)titleHorizontalInset;
- (double)titleVerticalOffset;
- (double)textToImageSpace;
- (double)insetForMenuArrowImage;
- (double)insetForHighlightY;
- (double)insetForHighlightX;
- (void)dealloc;
- (void)sortBarButtonCellCommonInit;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
