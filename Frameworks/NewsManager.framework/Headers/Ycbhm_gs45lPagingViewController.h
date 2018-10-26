//
//  OCExampleViewController.h
//  JXPagingView
//
//  Created by jiaxin on 2018/8/27.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JXPagerView.h"
#import "Ycbhm_gs45lPagingViewTableHeaderView.h"
#import "Ycbhm_gs45lTestListBaseView.h"
#import <TMSDK/TMViewController.h>

static const CGFloat JXTableHeaderViewHeight = 200;
static const CGFloat JXheightForHeaderInSection = 50;

@interface Ycbhm_gs45lPagingViewController : TMViewController <JXPagerViewDelegate>

@property (nonatomic, strong) JXPagerView *pagerView;
@property (nonatomic, strong) Ycbhm_gs45lPagingViewTableHeaderView *userHeaderView;
@property (nonatomic, strong) NSArray <Ycbhm_gs45lTestListBaseView *> *listViewArray;
- (JXPagerView *)preferredPagingView;

@end
