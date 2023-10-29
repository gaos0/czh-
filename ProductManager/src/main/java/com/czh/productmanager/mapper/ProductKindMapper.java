package com.czh.productmanager.mapper;


import com.czh.productmanager.pojo.ProductKind;
import org.apache.ibatis.annotations.*;

import java.util.List;

@Mapper
public interface ProductKindMapper {

    @Select("select id,name from product_manager.product_kind")
    List<ProductKind> list();

    @Delete("delete from product_manager.product_kind where id =#{id}")
    void deleteById(@Param("id") Integer id);


    @Insert("insert into product_manager.product_kind (name) values (#{name})")
    void add(@Param("name") String name);
}
