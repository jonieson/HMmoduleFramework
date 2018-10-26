//
//  Ycbhm_gs45lpdListModel.h
//  NewsManager
//
//  Created by JD on 2018/9/25.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Ycbhm_gs45lpdListModel : NSObject
@property (nonatomic,strong)NSString *typeName;
@property (nonatomic,strong)NSString *time;
@property (nonatomic,strong)NSString *title;
@property (nonatomic,strong)NSString *imgUrl;
@property (nonatomic,strong)NSString *collectCount;
@property (nonatomic,strong)NSString *commendCount;
@property (nonatomic,strong)NSString *artId;
@property (nonatomic,strong)NSString *path;
+(Ycbhm_gs45lpdListModel *)jsonWithModel:(NSDictionary *)dic;
@end
