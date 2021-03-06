//
//  RCAlertController.h
//  RCKit
//
//  Created by Yeuham Wang on 16/2/21.
//  Copyright (c) 2016 Yeuham Wang.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, RCAlertControllerStyle) {
    RCAlertControllerStyleActionSheet,
    RCAlertControllerStyleAlert
} NS_ENUM_AVAILABLE_IOS(7_0);

@protocol RCAlertControllerDelegate;

NS_CLASS_AVAILABLE_IOS(7_0) @interface RCAlertController : UIViewController {
    CGFloat _alertWindowHeight;
    RCAlertControllerStyle _style;
    UIWindow *_alertWindow;
    UIView *_dimmingView;
    UIView *_tappingView;
}

@property (weak, nonatomic) id<RCAlertControllerDelegate> delegate;
@property (nonatomic) BOOL dimsBackgroundDuringPresentation;
@property (nonatomic) NSTimeInterval animationDuration;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void)presentAlertWithStyle:(RCAlertControllerStyle)style animated:(BOOL)animated completion:(void (^)(void))completion;
- (void)dismissAlertAnimated:(BOOL)animated completion:(void (^)(void))completion;

@end

@protocol RCAlertControllerDelegate <NSObject>

@optional
- (void)willPresentAlertController:(RCAlertController *)alertController;
- (void)didPresentAlertController:(RCAlertController *)alertController;
- (void)willDismissAlertController:(RCAlertController *)alertController;
- (void)didDismissAlertController:(RCAlertController *)alertController;

@end