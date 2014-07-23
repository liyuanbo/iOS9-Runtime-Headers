/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, NSArray, SKUIViewElementLayoutContext, NSString, SKUIGridComponent;

@interface SKUIGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver> {
    long long _cardVerticalSpacingStyle;
    double _cellContentWidth;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    long long _lastNeedsMoreCount;
    long long _lockupType;
    long long _numberOfColumns;
    bool_rendersWithPerspective;
    UIColor *_separatorColor;
    long long _separatorStyle;
    bool_showsEditMode;
    NSArray *_viewElements;
}

@property(readonly) SKUIGridComponent * pageComponent;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cellForIndexPath:(id)arg1;
- (bool)_isContainedWithinExploreTemplate;
- (void)_reloadCellPadding;
- (double)_cellPaddingInteriorHorizontal;
- (bool)_useOrdinalPadding;
- (Class)_lockupCellClassWithLockup:(id)arg1;
- (Class)_cardCellClassForCard:(id)arg1;
- (bool)_viewElementIsStandardCard:(id)arg1;
- (long long)_positionForIndexPath:(id)arg1;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellInsetsForIndexPath:(id)arg1;
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;
- (double)_cellContentWidth;
- (double)_cellPaddingRightEdgeHorizontal;
- (double)_cellPaddingLeftEdgeHorizontal;
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;
- (void)_resetLayoutProperties;
- (long long)_numberOfColumnsForWidth:(double)arg1;
- (void)_requestLayoutForCells;
- (void)_enumerateVisibleViewElementsUsingBlock:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (long long)_lockupTypeForLockup:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)_reloadViewElementProperties;
- (void)scrollToElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2 animated:(bool)arg3;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id)arg2;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { double x1; double x2; })arg1 visibleRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;

@end