/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColor : NSObject <NSCopying> {
    UIColor *_color;
    int _colorType;
    NSArray *_gradientColors;
    int _gradientDirectionType;
    int _gradientType;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) int colorType;
@property (nonatomic, copy) NSArray *gradientColors;
@property (nonatomic) int gradientDirectionType;
@property (nonatomic) int gradientType;

- (void).cxx_destruct;
- (id)color;
- (int)colorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)gradientColors;
- (int)gradientDirectionType;
- (int)gradientType;
- (id)initWithColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorType:(int)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setGradientDirectionType:(int)arg1;
- (void)setGradientType:(int)arg1;

@end
