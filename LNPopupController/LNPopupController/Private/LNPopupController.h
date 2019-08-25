//
//  _LNPopupBarSupportObject.h
//  LNPopupController
//
//  Created by Leo Natan on 7/24/15.
//  Copyright © 2015 Leo Natan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LNPopupBar+Private.h"
#import "UIViewController+LNPopupSupportPrivate.h"
#import "LNPopupCloseButton.h"
#import "LNPopupContentView.h"
#import "LNPopupContentViewController.h"

@interface LNPopupController : NSObject

- (instancetype)initWithContainerViewController:(__kindof UIViewController*)containerController;

@property (nonatomic, weak) UIView* bottomBar;

@property (nonatomic, strong) LNPopupBar* popupBar;
@property (nonatomic, strong, readonly) LNPopupBar* popupBarStorage;
@property (nonatomic, strong) LNPopupContentViewController* popupContentViewController;
@property (nonatomic, strong) UIScrollView* popupContentContainerView;

@property (nonatomic) LNPopupPresentationState popupControllerState;
@property (nonatomic) LNPopupPresentationState popupControllerTargetState;

@property (nonatomic, weak) __kindof UIViewController* containerController;

@property (nonatomic) CGPoint lastPopupBarLocation;
@property (nonatomic) CFTimeInterval lastSeenMovement;

@property (nonatomic, weak) UIViewController* effectiveStatusBarUpdateController;

- (void)_resetPopupBar;

- (void)_movePopupBarAndContentToBottomBarSuperview;

- (void)presentPopupBarAnimated:(BOOL)animated openPopup:(BOOL)open completion:(void(^)(void))completionBlock;
- (void)openPopupAnimated:(BOOL)animated completion:(void(^)(void))completionBlock;
- (void)closePopupAnimated:(BOOL)animated completion:(void(^)(void))completionBlock;
- (void)dismissPopupBarAnimated:(BOOL)animated completion:(void(^)(void))completionBlock;
- (void)_closePopupContent;

- (void)_configurePopupBarFromBottomBar;

- (CGRect)_frameForClosedPopupBar;

@end
