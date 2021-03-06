/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBarButtonItemGroup : NSObject <NSCoding> {
    NSMutableArray * _barButtonItems;
    BOOL  _hidden;
    BOOL  _locked;
    float  _minimumLeadingSpace;
    float  _minimumTrailingSpace;
    <_UIBarButtonItemGroupOwner> * _owner;
    float  _priority;
    UIBarButtonItem * _representativeItem;
    UIViewController * _representativeUI;
}

@property (nonatomic, copy) NSArray *barButtonItems;
@property (getter=isDisplayingRepresentativeItem, nonatomic, readonly) BOOL displayingRepresentativeItem;
@property (getter=_isHidden, setter=_setHidden:, nonatomic) BOOL hidden;
@property (getter=_items, nonatomic, readonly) NSArray *items;
@property (getter=_isLocked, setter=_setLocked:, nonatomic) BOOL locked;
@property (getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:, nonatomic) float minimumLeadingSpace;
@property (getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:, nonatomic) float minimumTrailingSpace;
@property (getter=_owner, setter=_setOwner:, nonatomic) <_UIBarButtonItemGroupOwner> *owner;
@property (getter=_priority, setter=_setPriority:, nonatomic) float priority;
@property (nonatomic, retain) UIBarButtonItem *representativeItem;
@property (getter=_representativeUI, setter=_setRepresentativeUI:, nonatomic, retain) UIViewController *representativeUI;

- (void).cxx_destruct;
- (BOOL)_isHidden;
- (BOOL)_isLocked;
- (id)_items;
- (float)_minimumLeadingSpace;
- (float)_minimumTrailingSpace;
- (id)_owner;
- (float)_priority;
- (void)_removeBarButtonItem:(id)arg1;
- (void)_removeRepresentative:(id)arg1;
- (id)_representativeUI;
- (void)_setHidden:(BOOL)arg1;
- (void)_setLocked:(BOOL)arg1;
- (void)_setMinimumLeadingSpace:(float)arg1;
- (void)_setMinimumTrailingSpace:(float)arg1;
- (void)_setOwner:(id)arg1;
- (void)_setPriority:(float)arg1;
- (void)_setRepresentativeUI:(id)arg1;
- (void)_validateAllItems;
- (id)barButtonItems;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDisplayingRepresentativeItem;
- (id)representativeItem;
- (void)setBarButtonItems:(id)arg1;
- (void)setRepresentativeItem:(id)arg1;

@end
