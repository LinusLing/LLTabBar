//
//  LLTabBar.h
//  LLTabBar
//
//  Created by Linus on 15-6-18.
//  Copyright (c) 2015年 Linus. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LLTabBarDelegate <NSObject>

@optional
- (void)optionsButton:(UIButton*)optionButton didSelectItem:(int)index;
- (void)didExpand;
- (void)didCollapse;

@end

typedef enum {
    LLTabBarItemsPop_Up,
    LLTabBarItemsPop_Down
} LLTabBarItemsPopDirection;

@interface LLTabBar : UIView{
    
}
/**
 *  Set the direction you want to the choices to pop. This must be set before setting up choices.
 */
@property (assign, nonatomic) LLTabBarItemsPopDirection currentDirectionToPopOptions;
@property(nonatomic,weak) id<LLTabBarDelegate> delegate;

- (void) setUpChoices:(UIViewController*) parentViewController choices:(NSArray*) choices withMainButtonImage:(UIImage*)mainButtonImage;
- (void) setUpChoices:(UIViewController*) parentViewController choices:(NSArray*) choices withMainButtonImage:(UIImage*)mainButtonImage andMainButtonCustomOrigin:(CGPoint)customOrigin;
@end
