//
//  ModuleManager.h
//  NewsManager
//
//  Created by JD on 2018/9/21.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface Ycbhm_gs45lHMModuleManager : NSObject
@property (nonatomic,strong)NSString *baseServer;
@property (nonatomic,strong)NSString *userId;
//@property (nonatomic,strong)NSString *memberCode;
//@property (nonatomic,strong)NSString *token;
@property (nonatomic,strong)UIColor *themeColor;
@property (nonatomic,strong)UIColor *titleColor;
+(Ycbhm_gs45lHMModuleManager *)shareManager;
@end
