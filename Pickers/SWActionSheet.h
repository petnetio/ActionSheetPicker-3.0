//
// Created by Petr Korolev on 11/08/14.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SWActionSheet : UIView
@property(nonatomic, strong) UIView *bgView;
@property(nonatomic, strong) UIColor *presentationViewBgColor;

- (void)dismissWithClickedButtonIndex:(int)i animated:(BOOL)animated;

- (void)showFromBarButtonItem:(UIBarButtonItem *)item animated:(BOOL)animated;

- (instancetype)initWithView:(UIView *)view;

//- (instancetype)initWithView:(UIView *)aView andPresentationBgColor:(UIColor *)presentationViewBgColor;

- (void)showInContainerView;
@end
