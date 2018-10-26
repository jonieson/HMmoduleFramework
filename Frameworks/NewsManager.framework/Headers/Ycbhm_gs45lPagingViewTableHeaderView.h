//
//  Ycbhm_gs45lPagingViewTableHeaderView.h
//  JXCategoryView
//
//  Created by jiaxin on 2018/8/27.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Ycbhm_gs45lPagingViewTableHeaderView : UIView
@property (nonatomic,strong)NSArray *bannerImages;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic,strong)void(^clickBannerIndex)(NSDictionary *);
- (void)scrollViewDidScrolls:(CGFloat)contentOffsetY;
//- (void)scrollViewDidScroll:(CGFloat)contentOffsetX;
@end
