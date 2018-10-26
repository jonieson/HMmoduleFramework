//
//  Ycbhm_gs45lTestListBaseView.h
//  JXCategoryView
//
//  Created by jiaxin on 2018/8/27.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JXPagerView.h"
#import "Ycbhm_gs45lNewsModel.h"

@interface Ycbhm_gs45lTestListBaseView : UIView <JXPagerViewListViewDelegate>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSMutableArray <NSString *> *dataSource;
@property (nonatomic, assign) BOOL isNeedFooter;
@property (nonatomic, assign) BOOL isNeedHeader;

@property (nonatomic,strong)NSString *typeId;

@property (nonatomic,strong)void(^clickDetail)(Ycbhm_gs45lNewsModel *model);

@end
