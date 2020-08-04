//
//  LNPopupContentView+Private.h
//  LNPopupController
//
//  Created by Leo Natan (Wix) on 8/4/20.
//  Copyright © 2020 Leo Natan. All rights reserved.
//

#import <LNPopupController/LNPopupContentView.h>

@interface LNPopupContentView ()

- (instancetype)initWithFrame:(CGRect)frame;

@property (nonatomic, strong, readwrite) UIPanGestureRecognizer* popupInteractionGestureRecognizer;
@property (nonatomic, strong, readwrite) LNPopupCloseButton* popupCloseButton;
@property (nonatomic, strong) UIVisualEffectView* effectView;
@property (nonatomic, strong, readonly) UIView* contentView;

@property (nonatomic, weak) UIViewController* currentPopupContentViewController;

- (void)setControllerOverrideUserInterfaceStyle:(UIUserInterfaceStyle)overrideUserInterfaceStyle API_AVAILABLE(ios(13.0));

- (void)_applyBackgroundEffectWithContentViewController:(UIViewController*)vc barEffect:(UIBlurEffect*)barEffect;

@end

@interface _LNPopupTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> @end
