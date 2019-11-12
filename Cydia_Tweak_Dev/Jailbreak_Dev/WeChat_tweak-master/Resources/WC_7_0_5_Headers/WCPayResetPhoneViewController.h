//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCPayCountryCodeAndPhoneNumberItemDelegate.h"
#import "WCPayCountryCodeItemDelegate.h"

@class NSString, UIButton, WCBaseKeyboardToolBar, WCBizInfoGroup, WCPayCountryCodeAndPhoneNumberItem, WCPayCountryCodeItem, WCPayPhoneTextItem;

@interface WCPayResetPhoneViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, ILinkEventExt>
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayResetPhoneViewViewControllerDelegate> m_delegate;
    WCPayCountryCodeItem *_countryCodeItem;
    WCPayCountryCodeAndPhoneNumberItem *_countryCodeAndPhoneItem;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)checkData;
@property(retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem; // @synthesize countryCodeAndPhoneItem=_countryCodeAndPhoneItem;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
@property(retain, nonatomic) WCPayCountryCodeItem *countryCodeItem; // @synthesize countryCodeItem=_countryCodeItem;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (_Bool)isSupportForeignPhoneNum;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onNext;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)showDetailTip;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
