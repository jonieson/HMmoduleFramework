//
//  Ycbhm_gs45lPDModel.h
//  NewsManager
//
//  Created by JD on 2018/9/25.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Ycbhm_gs45lPDModel : NSObject
@property (nonatomic,strong)NSString *pdId;
@property (nonatomic,strong)NSString *imgUrl;
@property (nonatomic,strong)NSString *typeName;
+(Ycbhm_gs45lPDModel *)jsonWithModel:(NSDictionary *)dic;
@end
