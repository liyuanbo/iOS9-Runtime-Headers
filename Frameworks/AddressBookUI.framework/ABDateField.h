/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABDateField : ABUILabelWithPlaceholder {
    UIButton * _clearButton;
    NSDate * _date;
    UIDatePicker * _datePicker;
    struct CGSize { 
        float width; 
        float height; 
    }  _datePickerSize;
    <ABDateFieldDelegate> * _delegate;
    BOOL  _editable;
    BOOL  _inBecomeFirstResponder;
    BOOL  _isClearButtonEnabled;
    BOOL  _isFirstResponder;
    <ABDatePickerPresentationDelegate> * _presentationDelegate;
    BOOL  _usesDatePickerAsInputView;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) struct CGSize { float x1; float x2; } datePickerSize;
@property (nonatomic) <ABDateFieldDelegate> *delegate;
@property (getter=isEditable, nonatomic) BOOL editable;
@property (nonatomic) <ABDatePickerPresentationDelegate> *presentationDelegate;

- (void)_attachToDatePicker:(id)arg1;
- (id)_clearButton;
- (void)_clearButtonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })_clearButtonSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isClearButtonPresent:(BOOL)arg2;
- (void)_dettachFromDatePicker:(id)arg1;
- (float)_extraWidthForClearButton;
- (void)_setClearButtonEnabled:(BOOL)arg1;
- (void)_setDate:(id)arg1 andInformDelegate:(BOOL)arg2;
- (BOOL)_shouldEnableClearButton;
- (void)_updateClearButton;
- (void)_updateLabelText;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)date;
- (void)datePickerDateDidChange:(id)arg1;
- (struct CGSize { float x1; float x2; })datePickerSize;
- (void)dealloc;
- (id)delegate;
- (void)endEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputView;
- (BOOL)isEditable;
- (void)layoutSubviews;
- (id)presentationDelegate;
- (BOOL)resignFirstResponder;
- (void)setDate:(id)arg1;
- (void)setDatePickerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
