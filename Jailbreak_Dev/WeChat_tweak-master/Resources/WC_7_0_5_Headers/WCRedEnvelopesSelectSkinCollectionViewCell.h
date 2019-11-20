//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "WCRedEnvelopesReceiveHomeTemplateViewDelegate.h"

@class HbEnvelopSource, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UIView, WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView;

@interface WCRedEnvelopesSelectSkinCollectionViewCell : UICollectionViewCell <WCRedEnvelopesReceiveHomeTemplateViewDelegate>
{
    _Bool _isSkinSelected;
    _Bool _isDisabled;
    _Bool _isLeft;
    UIView *_skinBackgroundView;
    UIImageView *_templateView;
    UILabel *_corporationLabel;
    UIImageView *_selectedImageView;
    UILabel *_selectLabel;
    UILabel *_overtimeLabel;
    UIButton *_selectButton;
    WCRedEnvelopesReceiveHomeTemplateItem *_templateItem;
    HbEnvelopSource *_hbShowResource;
    UIImage *_skinImage;
    UIView *_downloadImageStatusMaskView;
    UIActivityIndicatorView *_imageDownloadingView;
    WCRedEnvelopesReceiveHomeTemplateView *_templateItemView;
    UIView *_borderView;
    unsigned long long _viewStatus;
    UIImageView *_reloadImageView;
    UILabel *_tryReloadImageLabel;
    UILabel *_descriptLabel;
    UIView *_rightUpTagView;
    UILabel *_expiredTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
- (_Bool)canTouch;
@property(retain, nonatomic) UILabel *corporationLabel; // @synthesize corporationLabel=_corporationLabel;
@property(retain, nonatomic) UILabel *descriptLabel; // @synthesize descriptLabel=_descriptLabel;
@property(retain, nonatomic) UIView *downloadImageStatusMaskView; // @synthesize downloadImageStatusMaskView=_downloadImageStatusMaskView;
@property(retain, nonatomic) UILabel *expiredTimeLabel; // @synthesize expiredTimeLabel=_expiredTimeLabel;
@property(retain, nonatomic) HbEnvelopSource *hbShowResource; // @synthesize hbShowResource=_hbShowResource;
@property(retain, nonatomic) UIActivityIndicatorView *imageDownloadingView; // @synthesize imageDownloadingView=_imageDownloadingView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isLeft; // @synthesize isLeft=_isLeft;
@property(nonatomic) _Bool isSkinSelected; // @synthesize isSkinSelected=_isSkinSelected;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *overtimeLabel; // @synthesize overtimeLabel=_overtimeLabel;
@property(retain, nonatomic) UIImageView *reloadImageView; // @synthesize reloadImageView=_reloadImageView;
@property(retain, nonatomic) UIView *rightUpTagView; // @synthesize rightUpTagView=_rightUpTagView;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIView *skinBackgroundView; // @synthesize skinBackgroundView=_skinBackgroundView;
@property(retain, nonatomic) UIImage *skinImage; // @synthesize skinImage=_skinImage;
- (void)setSkinSelected:(_Bool)arg1;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView; // @synthesize templateItemView=_templateItemView;
@property(retain, nonatomic) UIImageView *templateView; // @synthesize templateView=_templateView;
@property(retain, nonatomic) UILabel *tryReloadImageLabel; // @synthesize tryReloadImageLabel=_tryReloadImageLabel;
@property(nonatomic) unsigned long long viewStatus; // @synthesize viewStatus=_viewStatus;
- (void)skinImageDownloadFail;
- (void)skinImageDownloadOK;
- (void)updateBackgroundView;
- (void)updateCellData:(id)arg1;
- (void)updateMaskView;
- (void)updateView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
