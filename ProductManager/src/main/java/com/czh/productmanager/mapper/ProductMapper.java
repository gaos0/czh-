package com.czh.productmanager.mapper;

import com.czh.productmanager.pojo.Product;
import org.apache.ibatis.annotations.*;

import java.util.List;

@Mapper
public interface ProductMapper {

    @Select("select * from product_manager.product")
    List<Product> list();

    @Select("select * from product_manager.product where product_name like '%${productName}%'")
    List<Product> findByName(@Param("productName") String productName);

    @Delete("delete from product_manager.product where id = #{id}")
    void delete(@Param("id") Integer id);

    @Insert("insert into product_manager.product (product_name, product_kind_id, price) " +
            "values (#{productName},#{productKindId},#{price})")
    void add(@Param("productName") String productName,@Param("productKindId") Integer productKindId,@Param("price") Integer price);



    @Update("update product_manager.product set product_name = #{productName},product_kind_id=#{productKindId}" +
            " , price = #{price} where id = #{id}")
    void update(@Param("id")Integer id,@Param("productName")String productName,
                @Param("productKindId")Integer productKindId,@Param("price")Integer price);
}
