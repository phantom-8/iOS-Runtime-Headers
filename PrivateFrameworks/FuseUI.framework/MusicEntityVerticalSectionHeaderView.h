/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityVerticalSectionHeaderView : UICollectionReusableView <MusicActionableHeaderViewDelegate> {
    MusicActionableHeaderView *_actionableHeaderView;
    BOOL _alignsHairlineWithTitle;
    float _bottomContentInset;
    <MusicEntityVerticalSectionHeaderViewDelegate> *_delegate;
    UIView *_hairlineView;
    float _topContentInset;
}

@property (nonatomic, readonly) MusicActionableHeaderView *actionableHeaderView;
@property (nonatomic) BOOL alignsHairlineWithTitle;
@property (nonatomic) float bottomContentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityVerticalSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) float topContentInset;

+ (struct { float x1; float x2; })_actionableHeaderMetrics;
+ (Class)actionableHeaderViewClass;
+ (float)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)actionableHeaderView;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (BOOL)alignsHairlineWithTitle;
- (float)bottomContentInset;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAlignsHairlineWithTitle:(BOOL)arg1;
- (void)setBottomContentInset:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTopContentInset:(float)arg1;
- (float)topContentInset;

@end
