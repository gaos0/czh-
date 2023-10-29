package com.czh.productmanager.mapper;


import com.czh.productmanager.pojo.User;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

@Mapper
public interface UserMapper {

    @Select("select id,username,password,gender from product_manager.user" +
            " where username = #{username} and password = #{password}")
    public User login( @Param("username") String username,@Param("password") String password);
}
