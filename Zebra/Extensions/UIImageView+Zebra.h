//
//  UIImageView+Zebra.h
//  Zebra
//
//  Created by Wilson Styres on 1/11/20.
//  Copyright © 2020 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SDWebImage/SDWebImage.h>
#import "MobileIcons.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (Zebra)

@property (nonatomic, copy, nullable, setter=zb_setImageURL:) NSURL *zb_imageURL;

- (void)applyBorder;
- (void)removeBorder;
- (void)setColor:(UIColor *)color;
- (void)setLeftColor:(UIColor *)leftColor rightColor:(UIColor *)rightColor;
- (void)setIconImage:(UIImage *)image variant:(MIIconVariant)variant;
- (void)resize:(CGSize)size applyRadius:(BOOL)radius;

- (void)setRetinaImageWithURL:(NSURL *)url placeholderImage:(nullable UIImage *)placeholder completed:(nullable SDExternalCompletionBlock)completion;
- (void)setRetinaImageWithURL:(NSURL *)url placeholderImage:(nullable UIImage *)placeholder;

@end

NS_ASSUME_NONNULL_END
